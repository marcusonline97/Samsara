// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Actors/Samsara_Actor.h"

#ifdef SAMSARA_Samsara_Actor_generated_h
#error "Samsara_Actor.generated.h already included, missing '#pragma once' in Samsara_Actor.h"
#endif
#define SAMSARA_Samsara_Actor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASamsara_Actor ***********************************************************
SAMSARA_API UClass* Z_Construct_UClass_ASamsara_Actor_NoRegister();

#define FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsara_Actor(); \
	friend struct Z_Construct_UClass_ASamsara_Actor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_API UClass* Z_Construct_UClass_ASamsara_Actor_NoRegister(); \
public: \
	DECLARE_CLASS2(ASamsara_Actor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara"), Z_Construct_UClass_ASamsara_Actor_NoRegister) \
	DECLARE_SERIALIZER(ASamsara_Actor)


#define FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h_12_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASamsara_Actor(ASamsara_Actor&&) = delete; \
	ASamsara_Actor(const ASamsara_Actor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsara_Actor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsara_Actor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASamsara_Actor) \
	NO_API virtual ~ASamsara_Actor();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h_9_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASamsara_Actor;

// ********** End Class ASamsara_Actor *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
