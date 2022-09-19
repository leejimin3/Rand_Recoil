// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_WeaponComponent.h"
#include "Rand_RecoilCharacter.h"
#include "Rand_RecoilProjectile.h"
#include "DrawDebugHelpers.h"
#include "GameFramework/PlayerController.h"
#include "Camera/PlayerCameraManager.h"
#include "Kismet/GameplayStatics.h"



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
	FOnTimelineFloat XRecoilCurve;
	FOnTimelineFloat YRecoilCurve;

	XRecoilCurve.BindUFunction(this, FName("StartHorizontalRecoil"));
	YRecoilCurve.BindUFunction(this, FName("StartVerticalRecoil"));

	if (!Hor || !Ver)
	{
		return;
	}

	RecoilTimeline.AddInterpFloat(Hor, XRecoilCurve);
	RecoilTimeline.AddInterpFloat(Ver, YRecoilCurve);
}


void UTP_WeaponComponent::Fire()
{	
	if(Character == nullptr || Character->GetController() == nullptr)
	{
		return;
	}



	UWorld* const World = GetWorld();
	// Try and fire a projectile
	if (Character->Get_CurrentAmmo() > 0)
	{
		if (World != nullptr)
		{
			if(OnRecoil == false)
			{
				SetCurve(HorizentalCurve, VerticalCurve);
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
			DrawDebugLine(World, TraceStart, TraceEnd, FColor::Red, false, 3.0f, 0, 0.5f);

			if (bHasHitSomething)
			{
				DrawDebugBox(World, Hit.Location, FVector(15), FColor::Green, false, 3.0f, 0, 3.0f);
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



			//const FRotator SpawnRotation = PlayerController->PlayerCameraManager->GetCameraRotation();
			//// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
			//const FVector SpawnLocation = GetOwner()->GetActorLocation() + SpawnRotation.RotateVector(MuzzleOffset);
	
			////Set Spawn Collision Handling Override
			//FActorSpawnParameters ActorSpawnParams;
			//ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
	
			//// Spawn the projectile at the muzzle
			//World->SpawnActor<ARand_RecoilProjectile>(ProjectileClass, SpawnLocation, SpawnRotation, ActorSpawnParams);
		}
	}
	else
	{
		Character->OnStopFire();
		ReverseRecoil();
		OnRecoil = false;
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
		RecoilTimeline.TickTimeline(DeltaTime);

		if (Character->Get_MouseDown() == false)
		{
			ReverseRecoil();
			OnRecoil = false;
		}
	}

}



void UTP_WeaponComponent::StartHorizontalRecoil(float Value)
{
	Character->AddControllerYawInput(Value);
}

void UTP_WeaponComponent::StartVerticalRecoil(float Value)
{
	Character->AddControllerPitchInput(Value);
}



void UTP_WeaponComponent::StartRecoil()
{
	RecoilTimeline.PlayFromStart();
}

void UTP_WeaponComponent::ReverseRecoil()
{
	RecoilTimeline.Reverse();
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

