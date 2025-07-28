// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SamsaraGameMode.h"

#ifdef SAMSARA_SamsaraGameMode_generated_h
#error "SamsaraGameMode.generated.h already included, missing '#pragma once' in SamsaraGameMode.h"
#endif
#define SAMSARA_SamsaraGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASamsaraGameMode *********************************************************
SAMSARA_API UClass* Z_Construct_UClass_ASamsaraGameMode_NoRegister();

#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsaraGameMode(); \
	friend struct Z_Construct_UClass_ASamsaraGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_API UClass* Z_Construct_UClass_ASamsaraGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(ASamsaraGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara"), Z_Construct_UClass_ASamsaraGameMode_NoRegister) \
	DECLARE_SERIALIZER(ASamsaraGameMode)


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASamsaraGameMode(ASamsaraGameMode&&) = delete; \
	ASamsaraGameMode(const ASamsaraGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsaraGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsaraGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ASamsaraGameMode) \
	NO_API virtual ~ASamsaraGameMode();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_12_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASamsaraGameMode;

// ********** End Class ASamsaraGameMode ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
