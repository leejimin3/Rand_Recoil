// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rand_Recoil/Rand_RecoilGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRand_RecoilGameMode() {}
// Cross Module References
	RAND_RECOIL_API UClass* Z_Construct_UClass_ARand_RecoilGameMode_NoRegister();
	RAND_RECOIL_API UClass* Z_Construct_UClass_ARand_RecoilGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Rand_Recoil();
// End Cross Module References
	void ARand_RecoilGameMode::StaticRegisterNativesARand_RecoilGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARand_RecoilGameMode);
	UClass* Z_Construct_UClass_ARand_RecoilGameMode_NoRegister()
	{
		return ARand_RecoilGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ARand_RecoilGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARand_RecoilGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Rand_Recoil,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARand_RecoilGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Rand_RecoilGameMode.h" },
		{ "ModuleRelativePath", "Rand_RecoilGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARand_RecoilGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARand_RecoilGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ARand_RecoilGameMode_Statics::ClassParams = {
		&ARand_RecoilGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ARand_RecoilGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARand_RecoilGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARand_RecoilGameMode()
	{
		if (!Z_Registration_Info_UClass_ARand_RecoilGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARand_RecoilGameMode.OuterSingleton, Z_Construct_UClass_ARand_RecoilGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ARand_RecoilGameMode.OuterSingleton;
	}
	template<> RAND_RECOIL_API UClass* StaticClass<ARand_RecoilGameMode>()
	{
		return ARand_RecoilGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARand_RecoilGameMode);
	struct Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ARand_RecoilGameMode, ARand_RecoilGameMode::StaticClass, TEXT("ARand_RecoilGameMode"), &Z_Registration_Info_UClass_ARand_RecoilGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARand_RecoilGameMode), 4030355555U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilGameMode_h_704181780(TEXT("/Script/Rand_Recoil"),
		Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
