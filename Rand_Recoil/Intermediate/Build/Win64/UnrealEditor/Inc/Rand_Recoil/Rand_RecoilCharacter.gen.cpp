// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rand_Recoil/Rand_RecoilCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRand_RecoilCharacter() {}
// Cross Module References
	RAND_RECOIL_API UFunction* Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Rand_Recoil();
	RAND_RECOIL_API UClass* Z_Construct_UClass_ARand_RecoilCharacter_NoRegister();
	RAND_RECOIL_API UClass* Z_Construct_UClass_ARand_RecoilCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Rand_Recoil, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ARand_RecoilCharacter::execGet_MouseDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->Get_MouseDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARand_RecoilCharacter::execSet_CurrentAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set_CurrentAmmo(Z_Param_Ammo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARand_RecoilCharacter::execGet_CurrentAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Get_CurrentAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARand_RecoilCharacter::execSet_DefaultAmmo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Ammo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Set_DefaultAmmo(Z_Param_Ammo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ARand_RecoilCharacter::execGet_DefaultAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Get_DefaultAmmo();
		P_NATIVE_END;
	}
	void ARand_RecoilCharacter::StaticRegisterNativesARand_RecoilCharacter()
	{
		UClass* Class = ARand_RecoilCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Get_CurrentAmmo", &ARand_RecoilCharacter::execGet_CurrentAmmo },
			{ "Get_DefaultAmmo", &ARand_RecoilCharacter::execGet_DefaultAmmo },
			{ "Get_MouseDown", &ARand_RecoilCharacter::execGet_MouseDown },
			{ "Set_CurrentAmmo", &ARand_RecoilCharacter::execSet_CurrentAmmo },
			{ "Set_DefaultAmmo", &ARand_RecoilCharacter::execSet_DefaultAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics
	{
		struct Rand_RecoilCharacter_eventGet_CurrentAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rand_RecoilCharacter_eventGet_CurrentAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARand_RecoilCharacter, nullptr, "Get_CurrentAmmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::Rand_RecoilCharacter_eventGet_CurrentAmmo_Parms), Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics
	{
		struct Rand_RecoilCharacter_eventGet_DefaultAmmo_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rand_RecoilCharacter_eventGet_DefaultAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARand_RecoilCharacter, nullptr, "Get_DefaultAmmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::Rand_RecoilCharacter_eventGet_DefaultAmmo_Parms), Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics
	{
		struct Rand_RecoilCharacter_eventGet_MouseDown_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((Rand_RecoilCharacter_eventGet_MouseDown_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Rand_RecoilCharacter_eventGet_MouseDown_Parms), &Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARand_RecoilCharacter, nullptr, "Get_MouseDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::Rand_RecoilCharacter_eventGet_MouseDown_Parms), Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics
	{
		struct Rand_RecoilCharacter_eventSet_CurrentAmmo_Parms
		{
			int32 Ammo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rand_RecoilCharacter_eventSet_CurrentAmmo_Parms, Ammo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::NewProp_Ammo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARand_RecoilCharacter, nullptr, "Set_CurrentAmmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::Rand_RecoilCharacter_eventSet_CurrentAmmo_Parms), Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics
	{
		struct Rand_RecoilCharacter_eventSet_DefaultAmmo_Parms
		{
			int32 Ammo;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Ammo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::NewProp_Ammo = { "Ammo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Rand_RecoilCharacter_eventSet_DefaultAmmo_Parms, Ammo), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::NewProp_Ammo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARand_RecoilCharacter, nullptr, "Set_DefaultAmmo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::Rand_RecoilCharacter_eventSet_DefaultAmmo_Parms), Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARand_RecoilCharacter);
	UClass* Z_Construct_UClass_ARand_RecoilCharacter_NoRegister()
	{
		return ARand_RecoilCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ARand_RecoilCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh1P_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh1P;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DefaultAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MouseDown_MetaData[];
#endif
		static void NewProp_MouseDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_MouseDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARand_RecoilCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Rand_Recoil,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARand_RecoilCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARand_RecoilCharacter_Get_CurrentAmmo, "Get_CurrentAmmo" }, // 256687495
		{ &Z_Construct_UFunction_ARand_RecoilCharacter_Get_DefaultAmmo, "Get_DefaultAmmo" }, // 796660361
		{ &Z_Construct_UFunction_ARand_RecoilCharacter_Get_MouseDown, "Get_MouseDown" }, // 2861973790
		{ &Z_Construct_UFunction_ARand_RecoilCharacter_Set_CurrentAmmo, "Set_CurrentAmmo" }, // 1832251745
		{ &Z_Construct_UFunction_ARand_RecoilCharacter_Set_DefaultAmmo, "Set_DefaultAmmo" }, // 1292700683
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Rand_RecoilCharacter.h" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_Mesh1P_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Pawn mesh: 1st person view (arms; seen only by self) */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
		{ "ToolTip", "Pawn mesh: 1st person view (arms; seen only by self)" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_Mesh1P = { "Mesh1P", nullptr, (EPropertyFlags)0x00400000000b0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARand_RecoilCharacter, Mesh1P), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_Mesh1P_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_Mesh1P_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARand_RecoilCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARand_RecoilCharacter, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARand_RecoilCharacter, OnUseItem), Z_Construct_UDelegateFunction_Rand_Recoil_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_OnUseItem_MetaData)) }; // 3193162983
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_CurrentAmmo_MetaData[] = {
		{ "BlueprintGetter", "Get_CurrentAmmo" },
		{ "BlueprintSetter", "Set_CurrentAmmo" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_CurrentAmmo = { "CurrentAmmo", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARand_RecoilCharacter, CurrentAmmo), METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_CurrentAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_CurrentAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_DefaultAmmo_MetaData[] = {
		{ "BlueprintGetter", "Get_DefaultAmmo" },
		{ "BlueprintSetter", "Set_DefaultAmmo" },
		{ "Category", "Stat" },
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_DefaultAmmo = { "DefaultAmmo", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARand_RecoilCharacter, DefaultAmmo), METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_DefaultAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_DefaultAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_MouseDown_MetaData[] = {
		{ "ModuleRelativePath", "Rand_RecoilCharacter.h" },
	};
#endif
	void Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_MouseDown_SetBit(void* Obj)
	{
		((ARand_RecoilCharacter*)Obj)->MouseDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_MouseDown = { "MouseDown", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARand_RecoilCharacter), &Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_MouseDown_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_MouseDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_MouseDown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARand_RecoilCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_Mesh1P,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_CurrentAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_DefaultAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARand_RecoilCharacter_Statics::NewProp_MouseDown,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARand_RecoilCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARand_RecoilCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARand_RecoilCharacter_Statics::ClassParams = {
		&ARand_RecoilCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARand_RecoilCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARand_RecoilCharacter()
	{
		if (!Z_Registration_Info_UClass_ARand_RecoilCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARand_RecoilCharacter.OuterSingleton, Z_Construct_UClass_ARand_RecoilCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARand_RecoilCharacter.OuterSingleton;
	}
	template<> RAND_RECOIL_API UClass* StaticClass<ARand_RecoilCharacter>()
	{
		return ARand_RecoilCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARand_RecoilCharacter);
	struct Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARand_RecoilCharacter, ARand_RecoilCharacter::StaticClass, TEXT("ARand_RecoilCharacter"), &Z_Registration_Info_UClass_ARand_RecoilCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARand_RecoilCharacter), 2785812163U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_1518905165(TEXT("/Script/Rand_Recoil"),
		Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
