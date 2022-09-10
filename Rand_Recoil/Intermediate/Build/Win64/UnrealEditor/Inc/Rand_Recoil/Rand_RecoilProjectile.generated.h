// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef RAND_RECOIL_Rand_RecoilProjectile_generated_h
#error "Rand_RecoilProjectile.generated.h already included, missing '#pragma once' in Rand_RecoilProjectile.h"
#endif
#define RAND_RECOIL_Rand_RecoilProjectile_generated_h

#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_SPARSE_DATA
#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARand_RecoilProjectile(); \
	friend struct Z_Construct_UClass_ARand_RecoilProjectile_Statics; \
public: \
	DECLARE_CLASS(ARand_RecoilProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rand_Recoil"), NO_API) \
	DECLARE_SERIALIZER(ARand_RecoilProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARand_RecoilProjectile(); \
	friend struct Z_Construct_UClass_ARand_RecoilProjectile_Statics; \
public: \
	DECLARE_CLASS(ARand_RecoilProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rand_Recoil"), NO_API) \
	DECLARE_SERIALIZER(ARand_RecoilProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARand_RecoilProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARand_RecoilProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARand_RecoilProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARand_RecoilProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARand_RecoilProjectile(ARand_RecoilProjectile&&); \
	NO_API ARand_RecoilProjectile(const ARand_RecoilProjectile&); \
public:


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARand_RecoilProjectile(ARand_RecoilProjectile&&); \
	NO_API ARand_RecoilProjectile(const ARand_RecoilProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARand_RecoilProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARand_RecoilProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARand_RecoilProjectile)


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_12_PROLOG
#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_SPARSE_DATA \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_RPC_WRAPPERS \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_INCLASS \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_SPARSE_DATA \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAND_RECOIL_API UClass* StaticClass<class ARand_RecoilProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
