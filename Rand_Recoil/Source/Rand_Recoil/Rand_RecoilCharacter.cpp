// Copyright Epic Games, Inc. All Rights Reserved.

#include "Rand_RecoilCharacter.h"
#include "Rand_RecoilProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/InputSettings.h"


//////////////////////////////////////////////////////////////////////////
// ARand_RecoilCharacter

ARand_RecoilCharacter::ARand_RecoilCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// set our turn rates for input
	TurnRateGamepad = 45.f;

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-39.56f, 1.75f, 64.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeRotation(FRotator(1.9f, -19.19f, 5.2f));
	Mesh1P->SetRelativeLocation(FVector(-0.5f, -4.4f, -155.7f));

}

void ARand_RecoilCharacter::BeginPlay()
{
	// Call the base class  
	Super::BeginPlay();

}

//////////////////////////////////////////////////////////////////////////// Input

bool ARand_RecoilCharacter::Get_MouseDown()
{
	return MouseDown;
}

void ARand_RecoilCharacter::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	// Set up gameplay key bindings
	check(PlayerInputComponent);

	// Bind jump events
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ACharacter::Jump);
	PlayerInputComponent->BindAction("Jump", IE_Released, this, &ACharacter::StopJumping);

	// Bind fire event
	PlayerInputComponent->BindAction("PrimaryAction", IE_Pressed, this, &ARand_RecoilCharacter::OnStartFire);
	PlayerInputComponent->BindAction("PrimaryAction", IE_Released, this, &ARand_RecoilCharacter::OnStopFire);

	PlayerInputComponent->BindAction("Reload", IE_Pressed, this, &ARand_RecoilCharacter::OnStartReload);
	// Enable touchscreen input
	EnableTouchscreenMovement(PlayerInputComponent);

	// Bind movement events
	PlayerInputComponent->BindAxis("Move Forward / Backward", this, &ARand_RecoilCharacter::MoveForward);
	PlayerInputComponent->BindAxis("Move Right / Left", this, &ARand_RecoilCharacter::MoveRight);

	// We have 2 versions of the rotation bindings to handle different kinds of devices differently
	// "Mouse" versions handle devices that provide an absolute delta, such as a mouse.
	// "Gamepad" versions are for devices that we choose to treat as a rate of change, such as an analog joystick
	PlayerInputComponent->BindAxis("Turn Right / Left Mouse", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("Look Up / Down Mouse", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("Turn Right / Left Gamepad", this, &ARand_RecoilCharacter::TurnAtRate);
	PlayerInputComponent->BindAxis("Look Up / Down Gamepad", this, &ARand_RecoilCharacter::LookUpAtRate);
}

void ARand_RecoilCharacter::OnPrimaryAction()
{
	// Trigger the OnItemUsed Event
	OnUseItem.Broadcast();
}

void ARand_RecoilCharacter::BeginTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == true)
	{
		return;
	}
	if ((FingerIndex == TouchItem.FingerIndex) && (TouchItem.bMoved == false))
	{
		OnPrimaryAction();
	}
	TouchItem.bIsPressed = true;
	TouchItem.FingerIndex = FingerIndex;
	TouchItem.Location = Location;
	TouchItem.bMoved = false;
}

void ARand_RecoilCharacter::EndTouch(const ETouchIndex::Type FingerIndex, const FVector Location)
{
	if (TouchItem.bIsPressed == false)
	{
		return;
	}
	TouchItem.bIsPressed = false;
}


void ARand_RecoilCharacter::OnStartFire()
{
	MouseDown = true;
	OnPrimaryAction();
	GetWorld()->GetTimerManager().SetTimer(AutomaticFireHandle, this, &ARand_RecoilCharacter::OnPrimaryAction, 0.1, true);
}

void ARand_RecoilCharacter::OnStopFire()
{
	MouseDown = false;
	GetWorld()->GetTimerManager().ClearTimer(AutomaticFireHandle);
}

void ARand_RecoilCharacter::OnStartReload()
{
	FTimerHandle ReloadHandle;
	GetWorld()->GetTimerManager().SetTimer(ReloadHandle, this, &ARand_RecoilCharacter::Reload, 1.25);
}

void ARand_RecoilCharacter::Reload()
{
	if(MouseDown == false)
		Set_CurrentAmmo(DefaultAmmo);
}



int ARand_RecoilCharacter::Get_DefaultAmmo()
{
	return DefaultAmmo;
}

void ARand_RecoilCharacter::Set_DefaultAmmo(int32 Ammo)
{
	DefaultAmmo = Ammo;
}

int ARand_RecoilCharacter::Get_CurrentAmmo()
{
	return CurrentAmmo;
}

void ARand_RecoilCharacter::Set_CurrentAmmo(int32 Ammo)
{
	CurrentAmmo = Ammo;
}





void ARand_RecoilCharacter::MoveForward(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorForwardVector(), Value);
	}
}

void ARand_RecoilCharacter::MoveRight(float Value)
{
	if (Value != 0.0f)
	{
		// add movement in that direction
		AddMovementInput(GetActorRightVector(), Value);
	}
}

void ARand_RecoilCharacter::TurnAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerYawInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

void ARand_RecoilCharacter::LookUpAtRate(float Rate)
{
	// calculate delta for this frame from the rate information
	AddControllerPitchInput(Rate * TurnRateGamepad * GetWorld()->GetDeltaSeconds());
}

bool ARand_RecoilCharacter::EnableTouchscreenMovement(class UInputComponent* PlayerInputComponent)
{
	if (FPlatformMisc::SupportsTouchInput() || GetDefault<UInputSettings>()->bUseMouseForTouch)
	{
		PlayerInputComponent->BindTouch(EInputEvent::IE_Pressed, this, &ARand_RecoilCharacter::BeginTouch);
		PlayerInputComponent->BindTouch(EInputEvent::IE_Released, this, &ARand_RecoilCharacter::EndTouch);

		return true;
	}
	
	return false;
}
