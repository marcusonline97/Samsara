// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SamsaraCharacter.h"

#ifdef SAMSARA_SamsaraCharacter_generated_h
#error "SamsaraCharacter.generated.h already included, missing '#pragma once' in SamsaraCharacter.h"
#endif
#define SAMSARA_SamsaraCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASamsaraCharacter ********************************************************
#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


SAMSARA_API UClass* Z_Construct_UClass_ASamsaraCharacter_NoRegister();

#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsaraCharacter(); \
	friend struct Z_Construct_UClass_ASamsaraCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_API UClass* Z_Construct_UClass_ASamsaraCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(ASamsaraCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara"), Z_Construct_UClass_ASamsaraCharacter_NoRegister) \
	DECLARE_SERIALIZER(ASamsaraCharacter)


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASamsaraCharacter(ASamsaraCharacter&&) = delete; \
	ASamsaraCharacter(const ASamsaraCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsaraCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsaraCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASamsaraCharacter) \
	NO_API virtual ~ASamsaraCharacter();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h_21_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASamsaraCharacter;

// ********** End Class ASamsaraCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
