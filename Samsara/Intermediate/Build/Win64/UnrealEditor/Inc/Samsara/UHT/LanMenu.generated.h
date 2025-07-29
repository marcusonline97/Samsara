// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Lan/LanMenu.h"

#ifdef SAMSARA_LanMenu_generated_h
#error "LanMenu.generated.h already included, missing '#pragma once' in LanMenu.h"
#endif
#define SAMSARA_LanMenu_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ULanMenu *****************************************************************
#define FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execJoinButtonClicked); \
	DECLARE_FUNCTION(execHostButtonClicked);


SAMSARA_API UClass* Z_Construct_UClass_ULanMenu_NoRegister();

#define FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULanMenu(); \
	friend struct Z_Construct_UClass_ULanMenu_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SAMSARA_API UClass* Z_Construct_UClass_ULanMenu_NoRegister(); \
public: \
	DECLARE_CLASS2(ULanMenu, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Samsara"), Z_Construct_UClass_ULanMenu_NoRegister) \
	DECLARE_SERIALIZER(ULanMenu)


#define FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULanMenu(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ULanMenu(ULanMenu&&) = delete; \
	ULanMenu(const ULanMenu&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULanMenu); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULanMenu); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULanMenu) \
	NO_API virtual ~ULanMenu();


#define FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h_14_PROLOG
#define FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h_17_INCLASS_NO_PURE_DECLS \
	FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ULanMenu;

// ********** End Class ULanMenu *******************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
