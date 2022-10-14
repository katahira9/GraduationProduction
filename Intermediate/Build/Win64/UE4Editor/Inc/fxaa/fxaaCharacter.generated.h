// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FXAA_fxaaCharacter_generated_h
#error "fxaaCharacter.generated.h already included, missing '#pragma once' in fxaaCharacter.h"
#endif
#define FXAA_fxaaCharacter_generated_h

#define fxaa_Source_fxaa_fxaaCharacter_h_12_SPARSE_DATA
#define fxaa_Source_fxaa_fxaaCharacter_h_12_RPC_WRAPPERS
#define fxaa_Source_fxaa_fxaaCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define fxaa_Source_fxaa_fxaaCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfxaaCharacter(); \
	friend struct Z_Construct_UClass_AfxaaCharacter_Statics; \
public: \
	DECLARE_CLASS(AfxaaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fxaa"), NO_API) \
	DECLARE_SERIALIZER(AfxaaCharacter)


#define fxaa_Source_fxaa_fxaaCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAfxaaCharacter(); \
	friend struct Z_Construct_UClass_AfxaaCharacter_Statics; \
public: \
	DECLARE_CLASS(AfxaaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/fxaa"), NO_API) \
	DECLARE_SERIALIZER(AfxaaCharacter)


#define fxaa_Source_fxaa_fxaaCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AfxaaCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AfxaaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfxaaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfxaaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfxaaCharacter(AfxaaCharacter&&); \
	NO_API AfxaaCharacter(const AfxaaCharacter&); \
public:


#define fxaa_Source_fxaa_fxaaCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AfxaaCharacter(AfxaaCharacter&&); \
	NO_API AfxaaCharacter(const AfxaaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfxaaCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfxaaCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AfxaaCharacter)


#define fxaa_Source_fxaa_fxaaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AfxaaCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AfxaaCharacter, FollowCamera); }


#define fxaa_Source_fxaa_fxaaCharacter_h_9_PROLOG
#define fxaa_Source_fxaa_fxaaCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fxaa_Source_fxaa_fxaaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	fxaa_Source_fxaa_fxaaCharacter_h_12_SPARSE_DATA \
	fxaa_Source_fxaa_fxaaCharacter_h_12_RPC_WRAPPERS \
	fxaa_Source_fxaa_fxaaCharacter_h_12_INCLASS \
	fxaa_Source_fxaa_fxaaCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define fxaa_Source_fxaa_fxaaCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	fxaa_Source_fxaa_fxaaCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	fxaa_Source_fxaa_fxaaCharacter_h_12_SPARSE_DATA \
	fxaa_Source_fxaa_fxaaCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	fxaa_Source_fxaa_fxaaCharacter_h_12_INCLASS_NO_PURE_DECLS \
	fxaa_Source_fxaa_fxaaCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FXAA_API UClass* StaticClass<class AfxaaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID fxaa_Source_fxaa_fxaaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
