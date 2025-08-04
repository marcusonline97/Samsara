// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/Multiplayer_Utils.h"

#ifdef SAMSARA_Multiplayer_Utils_generated_h
#error "Multiplayer_Utils.generated.h already included, missing '#pragma once' in Multiplayer_Utils.h"
#endif
#define SAMSARA_Multiplayer_Utils_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class UMultiplayer_Utils *******************************************************
#define FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execPrintLocalNetRole);


SAMSARA_API UClass* Z_Construct_UClass_UMultiplayer_Utils_NoRegister();

#define FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMultiplayer_Utils(); \
	friend struct Z_Construct_UClass_UMultiplayer_Utils_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_API UClass* Z_Construct_UClass_UMultiplayer_Utils_NoRegister(); \
public: \
	DECLARE_CLASS2(UMultiplayer_Utils, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Samsara"), Z_Construct_UClass_UMultiplayer_Utils_NoRegister) \
	DECLARE_SERIALIZER(UMultiplayer_Utils)


#define FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMultiplayer_Utils(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMultiplayer_Utils(UMultiplayer_Utils&&) = delete; \
	UMultiplayer_Utils(const UMultiplayer_Utils&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMultiplayer_Utils); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMultiplayer_Utils); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMultiplayer_Utils) \
	NO_API virtual ~UMultiplayer_Utils();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h_13_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h_16_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMultiplayer_Utils;

// ********** End Class UMultiplayer_Utils *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
