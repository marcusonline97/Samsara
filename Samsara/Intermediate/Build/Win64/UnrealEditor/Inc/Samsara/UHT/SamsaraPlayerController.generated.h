// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SamsaraPlayerController.h"

#ifdef SAMSARA_SamsaraPlayerController_generated_h
#error "SamsaraPlayerController.generated.h already included, missing '#pragma once' in SamsaraPlayerController.h"
#endif
#define SAMSARA_SamsaraPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ASamsaraPlayerController *************************************************
SAMSARA_API UClass* Z_Construct_UClass_ASamsaraPlayerController_NoRegister();

#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASamsaraPlayerController(); \
	friend struct Z_Construct_UClass_ASamsaraPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_API UClass* Z_Construct_UClass_ASamsaraPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ASamsaraPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/Samsara"), Z_Construct_UClass_ASamsaraPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ASamsaraPlayerController)


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASamsaraPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ASamsaraPlayerController(ASamsaraPlayerController&&) = delete; \
	ASamsaraPlayerController(const ASamsaraPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASamsaraPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASamsaraPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASamsaraPlayerController) \
	NO_API virtual ~ASamsaraPlayerController();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h_15_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ASamsaraPlayerController;

// ********** End Class ASamsaraPlayerController ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
