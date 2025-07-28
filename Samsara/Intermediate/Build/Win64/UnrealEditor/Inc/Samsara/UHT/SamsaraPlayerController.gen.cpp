// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Samsara/SamsaraPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSamsaraPlayerController() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
SAMSARA_API UClass* Z_Construct_UClass_ASamsaraPlayerController();
SAMSARA_API UClass* Z_Construct_UClass_ASamsaraPlayerController_NoRegister();
UPackage* Z_Construct_UPackage__Script_Samsara();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASamsaraPlayerController *************************************************
void ASamsaraPlayerController::StaticRegisterNativesASamsaraPlayerController()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASamsaraPlayerController;
UClass* ASamsaraPlayerController::GetPrivateStaticClass()
{
	using TClass = ASamsaraPlayerController;
	if (!Z_Registration_Info_UClass_ASamsaraPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SamsaraPlayerController"),
			Z_Registration_Info_UClass_ASamsaraPlayerController.InnerSingleton,
			StaticRegisterNativesASamsaraPlayerController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ASamsaraPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ASamsaraPlayerController_NoRegister()
{
	return ASamsaraPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASamsaraPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic PlayerController class for a third person game\n *  Manages input mappings\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "SamsaraPlayerController.h" },
		{ "ModuleRelativePath", "SamsaraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic PlayerController class for a third person game\nManages input mappings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "SamsaraPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASamsaraPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASamsaraPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASamsaraPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ASamsaraPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASamsaraPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamsaraPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASamsaraPlayerController_Statics::NewProp_DefaultMappingContexts,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsaraPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ASamsaraPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_Samsara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsaraPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASamsaraPlayerController_Statics::ClassParams = {
	&ASamsaraPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ASamsaraPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ASamsaraPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsaraPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ASamsaraPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASamsaraPlayerController()
{
	if (!Z_Registration_Info_UClass_ASamsaraPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASamsaraPlayerController.OuterSingleton, Z_Construct_UClass_ASamsaraPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASamsaraPlayerController.OuterSingleton;
}
ASamsaraPlayerController::ASamsaraPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASamsaraPlayerController);
ASamsaraPlayerController::~ASamsaraPlayerController() {}
// ********** End Class ASamsaraPlayerController ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h__Script_Samsara_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASamsaraPlayerController, ASamsaraPlayerController::StaticClass, TEXT("ASamsaraPlayerController"), &Z_Registration_Info_UClass_ASamsaraPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASamsaraPlayerController), 1122612760U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h__Script_Samsara_2637819378(TEXT("/Script/Samsara"),
	Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h__Script_Samsara_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_SamsaraPlayerController_h__Script_Samsara_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
