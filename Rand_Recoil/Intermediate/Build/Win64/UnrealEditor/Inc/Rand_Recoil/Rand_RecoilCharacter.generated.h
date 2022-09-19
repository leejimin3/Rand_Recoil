// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RAND_RECOIL_Rand_RecoilCharacter_generated_h
#error "Rand_RecoilCharacter.generated.h already included, missing '#pragma once' in Rand_RecoilCharacter.h"
#endif
#define RAND_RECOIL_Rand_RecoilCharacter_generated_h

#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_18_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_SPARSE_DATA
#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGet_MouseDown); \
	DECLARE_FUNCTION(execSet_CurrentAmmo); \
	DECLARE_FUNCTION(execGet_CurrentAmmo); \
	DECLARE_FUNCTION(execSet_DefaultAmmo); \
	DECLARE_FUNCTION(execGet_DefaultAmmo);


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGet_MouseDown); \
	DECLARE_FUNCTION(execSet_CurrentAmmo); \
	DECLARE_FUNCTION(execGet_CurrentAmmo); \
	DECLARE_FUNCTION(execSet_DefaultAmmo); \
	DECLARE_FUNCTION(execGet_DefaultAmmo);


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARand_RecoilCharacter(); \
	friend struct Z_Construct_UClass_ARand_RecoilCharacter_Statics; \
public: \
	DECLARE_CLASS(ARand_RecoilCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rand_Recoil"), NO_API) \
	DECLARE_SERIALIZER(ARand_RecoilCharacter)


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_INCLASS \
private: \
	static void StaticRegisterNativesARand_RecoilCharacter(); \
	friend struct Z_Construct_UClass_ARand_RecoilCharacter_Statics; \
public: \
	DECLARE_CLASS(ARand_RecoilCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Rand_Recoil"), NO_API) \
	DECLARE_SERIALIZER(ARand_RecoilCharacter)


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARand_RecoilCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARand_RecoilCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARand_RecoilCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARand_RecoilCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARand_RecoilCharacter(ARand_RecoilCharacter&&); \
	NO_API ARand_RecoilCharacter(const ARand_RecoilCharacter&); \
public:


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARand_RecoilCharacter(ARand_RecoilCharacter&&); \
	NO_API ARand_RecoilCharacter(const ARand_RecoilCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARand_RecoilCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARand_RecoilCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARand_RecoilCharacter)


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_20_PROLOG
#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_SPARSE_DATA \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_RPC_WRAPPERS \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_INCLASS \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_SPARSE_DATA \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RAND_RECOIL_API UClass* StaticClass<class ARand_RecoilCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Rand_Recoil_Source_Rand_Recoil_Rand_RecoilCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
