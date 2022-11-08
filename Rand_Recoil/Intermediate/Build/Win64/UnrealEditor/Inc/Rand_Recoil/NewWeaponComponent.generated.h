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
#ifdef RAND_RECOIL_NewWeaponComponent_generated_h
#error "NewWeaponComponent.generated.h already included, missing '#pragma once' in NewWeaponComponent.h"
#endif
#define RAND_RECOIL_NewWeaponComponent_generated_h

#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_SPARSE_DATA
#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetCurve); \
	DECLARE_FUNCTION(execStartVerticalRecoil); \
	DECLARE_FUNCTION(execStartHorizontalRecoil); \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCurve); \
	DECLARE_FUNCTION(execStartVerticalRecoil); \
	DECLARE_FUNCTION(execStartHorizontalRecoil); \
	DECLARE_FUNCTION(execEndPlay); \
	DECLARE_FUNCTION(execFire); \
	DECLARE_FUNCTION(execAttachWeapon);


#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNewWeaponComponent(); \
	friend struct Z_Construct_UClass_UNewWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UNewWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rand_Recoil"), NO_API) \
	DECLARE_SERIALIZER(UNewWeaponComponent)


#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUNewWeaponComponent(); \
	friend struct Z_Construct_UClass_UNewWeaponComponent_Statics; \
public: \
	DECLARE_CLASS(UNewWeaponComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rand_Recoil"), NO_API) \
	DECLARE_SERIALIZER(UNewWeaponComponent)


#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNewWeaponComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNewWeaponComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewWeaponComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewWeaponComponent(UNewWeaponComponent&&); \
	NO_API UNewWeaponComponent(const UNewWeaponComponent&); \
public:


#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNewWeaponComponent(UNewWeaponComponent&&); \
	NO_API UNewWeaponComponent(const UNewWeaponComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNewWeaponComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNewWeaponComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNewWeaponComponent)


#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_13_PROLOG
#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_SPARSE_DATA \
	FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_RPC_WRAPPERS \
	FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_INCLASS \
	FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_SPARSE_DATA \
	FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_INCLASS_NO_PURE_DECLS \
	FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAND_RECOIL_API UClass* StaticClass<class UNewWeaponComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Rand_Recoil_Source_Rand_Recoil_NewWeaponComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
