// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCurveFloat;
class ARand_RecoilCharacter;
#ifdef RAND_RECOIL_TP_WeaponComponent_generated_h
#error "TP_WeaponComponent.generated.h already included, missing '#pragma once' in TP_WeaponComponent.h"
#endif
#define RAND_RECOIL_TP_WeaponComponent_generated_h

#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_SPARSE_DATA
#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurve); \
	DECLARE_FUNCTION(execStartVerticalRecoil); \
	DECLARE_FUNCTION(execStartHorizontalRecoil); \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurve); \
	DECLARE_FUNCTION(execStartVerticalRecoil); \
	DECLARE_FUNCTION(execStartHorizontalRecoil); \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTP_WeaponComponent(); \
	friend struct Z_Construct_UClass_UTP_WeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UTP_WeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rand_Recoil"), NO_API) \
	DECLARE_SERIALIZER(UTP_WeaponComponent)


#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTP_WeaponComponent(); \
	friend struct Z_Construct_UClass_UTP_WeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UTP_WeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rand_Recoil"), NO_API) \
	DECLARE_SERIALIZER(UTP_WeaponComponent)


#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTP_WeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTP_WeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_WeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_WeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_WeaponComponent(UTP_WeaponComponent&&); \
	NO_API UTP_WeaponComponent(const UTP_WeaponComponent&); \
public:


#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTP_WeaponComponent(UTP_WeaponComponent&&); \
	NO_API UTP_WeaponComponent(const UTP_WeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTP_WeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTP_WeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTP_WeaponComponent)


#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_13_PROLOG
#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_SPARSE_DATA \
	FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_RPC_WRAPPERS \
	FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_INCLASS \
	FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_SPARSE_DATA \
	FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAND_RECOIL_API UClass* StaticClass<class UTP_WeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Rand_Recoil_Source_Rand_Recoil_TP_WeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
