// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

#include "Components/TimelineComponent.h"
#include "Components/ActorComponent.h"
#include "TP_WeaponComponent.generated.h"

class ARand_RecoilCharacter;

UCLASS(Blueprintable, BlueprintType, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class RAND_RECOIL_API UTP_WeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	/** Projectile class to spawn */
	UPROPERTY(EditDefaultsOnly, Category=Projectile)
	TSubclassOf<class ARand_RecoilProjectile> ProjectileClass;

	/** Sound to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	USoundBase* FireSound;
	
	/** AnimMontage to play each time we fire */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
	UAnimMontage* FireAnimation;

	/** Gun muzzle's offset from the characters location */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Gameplay)
	FVector MuzzleOffset;

	/** Sets default values for this component's properties */
	UTP_WeaponComponent();

	/** Attaches the actor to a FirstPersonCharacter */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void AttachWeapon(ARand_RecoilCharacter* TargetCharacter);

	/** Make the weapon Fire a Projectile */
	UFUNCTION(BlueprintCallable, Category="Weapon")
	void Fire();

protected:

	UFUNCTION()
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	

	int32 Ammo = 30;
public:
	FTimeline RecoilTimeline;

	UFUNCTION()
	void StartHorizontalRecoil(float Value);

	UFUNCTION()
	void StartVerticalRecoil(float Value);

	void StartRecoil();

	void ReverseRecoil();

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category = "Advanced Recoil")
	class UCurveFloat* HorizentalCurve;

	UPROPERTY(EditAnywhere, BluePrintReadOnly, Category="Advanced Recoil")
	class UCurveFloat* VecticalCurve;




private:
	/** The Character holding this weapon*/
	ARand_RecoilCharacter* Character;
};
