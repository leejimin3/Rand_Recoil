// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "Rand_RecoilCharacter.h"
#include "Rand_RecoilProjectile.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMathLibrary.h"
#include <random>



// Sets default values for this component's properties
UTP_WeaponComponent::UTP_WeaponComponent()
{
	// Default offset from the character location for projectiles to spawn
	MuzzleOffset = FVector(100.0f, 0.0f, 10.0f);

	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = true;
}


void UTP_WeaponComponent::SetCurve(UCurveFloat* Hor, UCurveFloat* Ver)
{

	if (!Hor || !Ver)
	{
		return;
	}

		FOnTimelineFloat XRecoilCurve;		//HorizontalRecoil
		FOnTimelineFloat YRecoilCurve;		//VerticalRecoil


		XRecoilCurve.BindUFunction(this, FName("StartHorizontalRecoil"));	//Bind Function On XRecoil "StartHorizontalRecoil"
		YRecoilCurve.BindUFunction(this, FName("StartVerticalRecoil"));		//Bind Function On YRecoil "StartVerticalRecoil"

		if (first == false)													//If you shoot for the first time, the "Recoiltimeline" adds a curve value.
		{
		RecoilTimeline.AddInterpFloat(Hor, XRecoilCurve, NAME_None, TEXT("HorizonCurve"));
		RecoilTimeline.AddInterpFloat(Ver, YRecoilCurve, NAME_None, TEXT("VerticalCurve"));
		first = true;
		}

		else																//If you're not shooting for the first time, modify the existing curve value.
		{
			RecoilTimeline.SetFloatCurve(Hor, TEXT("HorizonCurve"));
			RecoilTimeline.SetFloatCurve(Ver, TEXT("VerticalCurve"));
		}



}


void UTP_WeaponComponent::Fire()
{	
	if(Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}



	UWorld* const World = GetWorld();

	if (Character->Get_CurrentAmmo() > 0)
	{
		if (World != nullptr)
		{	
			if(OnRecoil == false)
			{
				int ran = rand() % 3;									// 'ran' is Random Value between 0~2. This value will determine which curve to give the gun.
				SetCurve(HorizentalCurve[ran], VerticalCurve[ran]);		// Send the curve equal to the value of 'ran' to the gun.
				StartRecoil();
				OnRecoil = true;
			}

			APlayerController* PlayerController = Cast<APlayerController>(Character->GetController());
			Character->Set_CurrentAmmo(Character->Get_CurrentAmmo()-1);

			FHitResult Hit;
			FVector CameraLocation;
			FRotator CameraRotation;

			PlayerController->GetPlayerViewPoint(CameraLocation, CameraRotation);
			FCollisionQueryParams Params;
			Params.AddIgnoredActor(Character);

			FVector TraceStart = CameraLocation;
			FVector TraceEnd = TraceStart + CameraRotation.Vector() * 10000;

			bool bHasHitSomething = World->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_Visibility, Params);

			if (bHasHitSomething)
			{
				if(!HitEmitter) { return; }
				UGameplayStatics::SpawnEmitterAtLocation(World, HitEmitter, Hit.Location);

				if (!HitDecalMaterial) { return; }
				UGameplayStatics::SpawnDecalAtLocation(World, HitDecalMaterial, FVector(15.0f), Hit.Location, Hit.ImpactNormal.Rotation(), 30.0f);
			}

			// Try and play the sound if specified
			if (FireSound != nullptr)
			{
				UGameplayStatics::PlaySoundAtLocation(this, FireSound, Character->GetActorLocation());
			}

			// Try and play a firing animation if specified
			if (FireAnimation != nullptr)
			{
				// Get the animation object for the arms mesh
				UAnimInstance* AnimInstance = Character->GetMesh1P()->GetAnimInstance();
				if (AnimInstance != nullptr)
				{
					AnimInstance->Montage_Play(FireAnimation, 1.f);
				}
			}


		}
	}
	else
	{
		Character->OnStopFire();
		OnRecoil = false;
		return;

	}

}





void UTP_WeaponComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	if(Character != nullptr)
	{
		// Unregister from the OnUseItem Event
		Character->OnUseItem.RemoveDynamic(this, &UTP_WeaponComponent::Fire);
	}
}


void UTP_WeaponComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	if (RecoilTimeline.IsPlaying())
	{
		RecoilTimeline.TickTimeline(DeltaTime);

		if (Character->Get_MouseDown() == false)
		{
			ReverseRecoil();
			OnRecoil = false;
		}
	}
	
	if (RecoilTimeline.IsReversing())
	{

		if (FMath::Abs(Character->YawInput) > 0 || FMath::Abs(Character->PitchInput) > 0)
		{
			RecoilTimeline.Stop();
			return;
		}

		RecoilTimeline.TickTimeline(DeltaTime);

		FRotator NewRotation = UKismetMathLibrary::RInterpTo(Character->GetControlRotation(), Character->StartRotation, DeltaTime, 10.0f);

		Character->Controller->ClientSetRotation(NewRotation);

		if (Character->Get_MouseDown() == false)
		{
			ReverseRecoil();
			OnRecoil = false;
		}
	}

}



void UTP_WeaponComponent::StartHorizontalRecoil(float Value)
{
	if (RecoilTimeline.IsReversing()) {return;}
	Character->AddControllerYawInput(Value);
}

void UTP_WeaponComponent::StartVerticalRecoil(float Value)
{
	if (RecoilTimeline.IsReversing()) { return; }
	Character->AddControllerPitchInput(Value);
}



void UTP_WeaponComponent::StartRecoil()
{
	RecoilTimeline.PlayFromStart();
}

void UTP_WeaponComponent::ReverseRecoil()
{
	RecoilTimeline.ReverseFromEnd();
}

void UTP_WeaponComponent::AttachWeapon(ARand_RecoilCharacter* TargetCharacter)
{
	Character = TargetCharacter;
	if(Character != nullptr)
	{
		// Attach the weapon to the First Person Character
		FAttachmentTransformRules AttachmentRules(EAttachmentRule::SnapToTarget, true);
		GetOwner()->AttachToComponent(Character->GetMesh1P(),AttachmentRules, FName(TEXT("GripPoint")));

		// Register so that Fire is called every time the character tries to use the item being held
		Character->OnUseItem.AddDynamic(this, &UTP_WeaponComponent::Fire);

		Character->Set_DefaultAmmo(Ammo);
		Character->Set_CurrentAmmo(Ammo);
	}
}

