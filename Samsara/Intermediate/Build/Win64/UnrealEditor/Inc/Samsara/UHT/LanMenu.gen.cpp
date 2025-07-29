// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Samsara/Lan/LanMenu.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeLanMenu() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
SAMSARA_API UClass* Z_Construct_UClass_ULanMenu();
SAMSARA_API UClass* Z_Construct_UClass_ULanMenu_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableTextBox_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Samsara();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ULanMenu Function HostButtonClicked **************************************
struct Z_Construct_UFunction_ULanMenu_HostButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lan/LanMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULanMenu_HostButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULanMenu, nullptr, "HostButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULanMenu_HostButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULanMenu_HostButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULanMenu_HostButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULanMenu_HostButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULanMenu::execHostButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HostButtonClicked();
	P_NATIVE_END;
}
// ********** End Class ULanMenu Function HostButtonClicked ****************************************

// ********** Begin Class ULanMenu Function JoinButtonClicked **************************************
struct Z_Construct_UFunction_ULanMenu_JoinButtonClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Lan/LanMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULanMenu_JoinButtonClicked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ULanMenu, nullptr, "JoinButtonClicked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ULanMenu_JoinButtonClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_ULanMenu_JoinButtonClicked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ULanMenu_JoinButtonClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULanMenu_JoinButtonClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ULanMenu::execJoinButtonClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->JoinButtonClicked();
	P_NATIVE_END;
}
// ********** End Class ULanMenu Function JoinButtonClicked ****************************************

// ********** Begin Class ULanMenu *****************************************************************
void ULanMenu::StaticRegisterNativesULanMenu()
{
	UClass* Class = ULanMenu::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HostButtonClicked", &ULanMenu::execHostButtonClicked },
		{ "JoinButtonClicked", &ULanMenu::execJoinButtonClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ULanMenu;
UClass* ULanMenu::GetPrivateStaticClass()
{
	using TClass = ULanMenu;
	if (!Z_Registration_Info_UClass_ULanMenu.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("LanMenu"),
			Z_Registration_Info_UClass_ULanMenu.InnerSingleton,
			StaticRegisterNativesULanMenu,
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
	return Z_Registration_Info_UClass_ULanMenu.InnerSingleton;
}
UClass* Z_Construct_UClass_ULanMenu_NoRegister()
{
	return ULanMenu::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ULanMenu_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Lan/LanMenu.h" },
		{ "ModuleRelativePath", "Lan/LanMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextBox_IpAddress_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lan/LanMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Host_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lan/LanMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Button_Join_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Lan/LanMenu.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HostingLevel_MetaData[] = {
		{ "Category", "LanMenu" },
		{ "ModuleRelativePath", "Lan/LanMenu.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TextBox_IpAddress;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Host;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Button_Join;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_HostingLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ULanMenu_HostButtonClicked, "HostButtonClicked" }, // 3853591551
		{ &Z_Construct_UFunction_ULanMenu_JoinButtonClicked, "JoinButtonClicked" }, // 3339261922
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULanMenu>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULanMenu_Statics::NewProp_TextBox_IpAddress = { "TextBox_IpAddress", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULanMenu, TextBox_IpAddress), Z_Construct_UClass_UEditableTextBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextBox_IpAddress_MetaData), NewProp_TextBox_IpAddress_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULanMenu_Statics::NewProp_Button_Host = { "Button_Host", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULanMenu, Button_Host), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Host_MetaData), NewProp_Button_Host_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ULanMenu_Statics::NewProp_Button_Join = { "Button_Join", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULanMenu, Button_Join), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Button_Join_MetaData), NewProp_Button_Join_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_ULanMenu_Statics::NewProp_HostingLevel = { "HostingLevel", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ULanMenu, HostingLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HostingLevel_MetaData), NewProp_HostingLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULanMenu_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULanMenu_Statics::NewProp_TextBox_IpAddress,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULanMenu_Statics::NewProp_Button_Host,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULanMenu_Statics::NewProp_Button_Join,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULanMenu_Statics::NewProp_HostingLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULanMenu_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ULanMenu_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Samsara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ULanMenu_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ULanMenu_Statics::ClassParams = {
	&ULanMenu::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ULanMenu_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ULanMenu_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ULanMenu_Statics::Class_MetaDataParams), Z_Construct_UClass_ULanMenu_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ULanMenu()
{
	if (!Z_Registration_Info_UClass_ULanMenu.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULanMenu.OuterSingleton, Z_Construct_UClass_ULanMenu_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ULanMenu.OuterSingleton;
}
ULanMenu::ULanMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ULanMenu);
ULanMenu::~ULanMenu() {}
// ********** End Class ULanMenu *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h__Script_Samsara_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ULanMenu, ULanMenu::StaticClass, TEXT("ULanMenu"), &Z_Registration_Info_UClass_ULanMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULanMenu), 1021677651U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h__Script_Samsara_2979583376(TEXT("/Script/Samsara"),
	Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h__Script_Samsara_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Lan_LanMenu_h__Script_Samsara_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
