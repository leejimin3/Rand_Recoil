// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rand_Recoil/NewWeaponComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNewWeaponComponent() {}
// Cross Module References
	RAND_RECOIL_API UClass* Z_Construct_UClass_UNewWeaponComponent_NoRegister();
	RAND_RECOIL_API UClass* Z_Construct_UClass_UNewWeaponComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Rand_Recoil();
	RAND_RECOIL_API UClass* Z_Construct_UClass_ARand_RecoilCharacter_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	RAND_RECOIL_API UClass* Z_Construct_UClass_ARand_RecoilProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstance_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UNewWeaponComponent::execSetCurve)
	{
		P_GET_OBJECT(UCurveFloat,Z_Param_Hor);
		P_GET_OBJECT(UCurveFloat,Z_Param_Ver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurve(Z_Param_Hor,Z_Param_Ver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewWeaponComponent::execStartVerticalRecoil)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartVerticalRecoil(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewWeaponComponent::execStartHorizontalRecoil)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHorizontalRecoil(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewWeaponComponent::execEndPlay)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_EndPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EndPlay(EEndPlayReason::Type(Z_Param_EndPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewWeaponComponent::execFire)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Fire();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNewWeaponComponent::execAttachWeapon)
	{
		P_GET_OBJECT(ARand_RecoilCharacter,Z_Param_TargetCharacter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttachWeapon(Z_Param_TargetCharacter);
		P_NATIVE_END;
	}
	void UNewWeaponComponent::StaticRegisterNativesUNewWeaponComponent()
	{
		UClass* Class = UNewWeaponComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachWeapon", &UNewWeaponComponent::execAttachWeapon },
			{ "EndPlay", &UNewWeaponComponent::execEndPlay },
			{ "Fire", &UNewWeaponComponent::execFire },
			{ "SetCurve", &UNewWeaponComponent::execSetCurve },
			{ "StartHorizontalRecoil", &UNewWeaponComponent::execStartHorizontalRecoil },
			{ "StartVerticalRecoil", &UNewWeaponComponent::execStartVerticalRecoil },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics
	{
		struct NewWeaponComponent_eventAttachWeapon_Parms
		{
			ARand_RecoilCharacter* TargetCharacter;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::NewProp_TargetCharacter = { "TargetCharacter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewWeaponComponent_eventAttachWeapon_Parms, TargetCharacter), Z_Construct_UClass_ARand_RecoilCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::NewProp_TargetCharacter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Attaches the actor to a FirstPersonCharacter */" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
		{ "ToolTip", "Attaches the actor to a FirstPersonCharacter" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewWeaponComponent, nullptr, "AttachWeapon", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::NewWeaponComponent_eventAttachWeapon_Parms), Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics
	{
		struct NewWeaponComponent_eventEndPlay_Parms
		{
			TEnumAsByte<EEndPlayReason::Type> EndPlayReason;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EndPlayReason_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EndPlayReason;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::NewProp_EndPlayReason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::NewProp_EndPlayReason = { "EndPlayReason", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewWeaponComponent_eventEndPlay_Parms, EndPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::NewProp_EndPlayReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::NewProp_EndPlayReason_MetaData)) }; // 2713016423
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::NewProp_EndPlayReason,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewWeaponComponent, nullptr, "EndPlay", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::NewWeaponComponent_eventEndPlay_Parms), Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewWeaponComponent_EndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewWeaponComponent_EndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewWeaponComponent_Fire_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewWeaponComponent_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Make the weapon Fire a Projectile */" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
		{ "ToolTip", "Make the weapon Fire a Projectile" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewWeaponComponent_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewWeaponComponent, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewWeaponComponent_Fire_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewWeaponComponent_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewWeaponComponent_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics
	{
		struct NewWeaponComponent_eventSetCurve_Parms
		{
			UCurveFloat* Hor;
			UCurveFloat* Ver;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Hor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Ver;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::NewProp_Hor = { "Hor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewWeaponComponent_eventSetCurve_Parms, Hor), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::NewProp_Ver = { "Ver", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewWeaponComponent_eventSetCurve_Parms, Ver), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::NewProp_Hor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::NewProp_Ver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewWeaponComponent, nullptr, "SetCurve", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::NewWeaponComponent_eventSetCurve_Parms), Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewWeaponComponent_SetCurve()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewWeaponComponent_SetCurve_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics
	{
		struct NewWeaponComponent_eventStartHorizontalRecoil_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewWeaponComponent_eventStartHorizontalRecoil_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewWeaponComponent, nullptr, "StartHorizontalRecoil", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::NewWeaponComponent_eventStartHorizontalRecoil_Parms), Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics
	{
		struct NewWeaponComponent_eventStartVerticalRecoil_Parms
		{
			float Value;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NewWeaponComponent_eventStartVerticalRecoil_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNewWeaponComponent, nullptr, "StartVerticalRecoil", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::NewWeaponComponent_eventStartVerticalRecoil_Parms), Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNewWeaponComponent);
	UClass* Z_Construct_UClass_UNewWeaponComponent_NoRegister()
	{
		return UNewWeaponComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNewWeaponComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FireAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MuzzleOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizentalCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HorizentalCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VerticalCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitEmitter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitEmitter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitDecalMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitDecalMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNewWeaponComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Rand_Recoil,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNewWeaponComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNewWeaponComponent_AttachWeapon, "AttachWeapon" }, // 3720545715
		{ &Z_Construct_UFunction_UNewWeaponComponent_EndPlay, "EndPlay" }, // 397652317
		{ &Z_Construct_UFunction_UNewWeaponComponent_Fire, "Fire" }, // 64955964
		{ &Z_Construct_UFunction_UNewWeaponComponent_SetCurve, "SetCurve" }, // 3055559960
		{ &Z_Construct_UFunction_UNewWeaponComponent_StartHorizontalRecoil, "StartHorizontalRecoil" }, // 1071786168
		{ &Z_Construct_UFunction_UNewWeaponComponent_StartVerticalRecoil, "StartVerticalRecoil" }, // 691513618
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "NewWeaponComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Projectile" },
		{ "Comment", "/** Projectile class to spawn */" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
		{ "ToolTip", "Projectile class to spawn" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewWeaponComponent, ProjectileClass), Z_Construct_UClass_ARand_RecoilProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Sound to play each time we fire */" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
		{ "ToolTip", "Sound to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewWeaponComponent, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireAnimation_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** AnimMontage to play each time we fire */" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
		{ "ToolTip", "AnimMontage to play each time we fire" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireAnimation = { "FireAnimation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewWeaponComponent, FireAnimation), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_MuzzleOffset_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "Comment", "/** Gun muzzle's offset from the characters location */" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
		{ "ToolTip", "Gun muzzle's offset from the characters location" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_MuzzleOffset = { "MuzzleOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewWeaponComponent, MuzzleOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_MuzzleOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_MuzzleOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HorizentalCurve_MetaData[] = {
		{ "Category", "Advanced Recoil|Curves" },
		{ "Comment", "//Create an array that holds curves of Horizontal\n" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
		{ "ToolTip", "Create an array that holds curves of Horizontal" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HorizentalCurve = { "HorizentalCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(HorizentalCurve, UNewWeaponComponent), STRUCT_OFFSET(UNewWeaponComponent, HorizentalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HorizentalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HorizentalCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_VerticalCurve_MetaData[] = {
		{ "Category", "Advanced Recoil|Curves" },
		{ "Comment", "//Create an array that holds curves of Vertical\n" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
		{ "ToolTip", "Create an array that holds curves of Vertical" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_VerticalCurve = { "VerticalCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VerticalCurve, UNewWeaponComponent), STRUCT_OFFSET(UNewWeaponComponent, VerticalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_VerticalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_VerticalCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitEmitter_MetaData[] = {
		{ "Category", "Advanced Recoil|FX" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitEmitter = { "HitEmitter", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewWeaponComponent, HitEmitter), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitEmitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitEmitter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitDecalMaterial_MetaData[] = {
		{ "Category", "Advanced Recoil|FX" },
		{ "ModuleRelativePath", "NewWeaponComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitDecalMaterial = { "HitDecalMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNewWeaponComponent, HitDecalMaterial), Z_Construct_UClass_UMaterialInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitDecalMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitDecalMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNewWeaponComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireSound,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_FireAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_MuzzleOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HorizentalCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_VerticalCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitEmitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNewWeaponComponent_Statics::NewProp_HitDecalMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNewWeaponComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNewWeaponComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNewWeaponComponent_Statics::ClassParams = {
		&UNewWeaponComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNewWeaponComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNewWeaponComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNewWeaponComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNewWeaponComponent()
	{
		if (!Z_Registration_Info_UClass_UNewWeaponComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNewWeaponComponent.OuterSingleton, Z_Construct_UClass_UNewWeaponComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNewWeaponComponent.OuterSingleton;
	}
	template<> RAND_RECOIL_API UClass* StaticClass<UNewWeaponComponent>()
	{
		return UNewWeaponComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNewWeaponComponent);
	struct Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNewWeaponComponent, UNewWeaponComponent::StaticClass, TEXT("UNewWeaponComponent"), &Z_Registration_Info_UClass_UNewWeaponComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNewWeaponComponent), 3053648641U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_2941884893(TEXT("/Script/Rand_Recoil"),
		Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
