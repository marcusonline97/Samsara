// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Samsara/Utility/Multiplayer_Utils.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiplayer_Utils() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SAMSARA_API UClass* Z_Construct_UClass_UMultiplayer_Utils();
SAMSARA_API UClass* Z_Construct_UClass_UMultiplayer_Utils_NoRegister();
UPackage* Z_Construct_UPackage__Script_Samsara();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMultiplayer_Utils Function PrintLocalNetRole ****************************
struct Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics
{
	struct Multiplayer_Utils_eventPrintLocalNetRole_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Multiplayer Utilities" },
		{ "ModuleRelativePath", "Utility/Multiplayer_Utils.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Multiplayer_Utils_eventPrintLocalNetRole_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMultiplayer_Utils, nullptr, "PrintLocalNetRole", Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::Multiplayer_Utils_eventPrintLocalNetRole_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::Multiplayer_Utils_eventPrintLocalNetRole_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMultiplayer_Utils::execPrintLocalNetRole)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMultiplayer_Utils::PrintLocalNetRole(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UMultiplayer_Utils Function PrintLocalNetRole ******************************

// ********** Begin Class UMultiplayer_Utils *******************************************************
void UMultiplayer_Utils::StaticRegisterNativesUMultiplayer_Utils()
{
	UClass* Class = UMultiplayer_Utils::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PrintLocalNetRole", &UMultiplayer_Utils::execPrintLocalNetRole },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMultiplayer_Utils;
UClass* UMultiplayer_Utils::GetPrivateStaticClass()
{
	using TClass = UMultiplayer_Utils;
	if (!Z_Registration_Info_UClass_UMultiplayer_Utils.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Multiplayer_Utils"),
			Z_Registration_Info_UClass_UMultiplayer_Utils.InnerSingleton,
			StaticRegisterNativesUMultiplayer_Utils,
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
	return Z_Registration_Info_UClass_UMultiplayer_Utils.InnerSingleton;
}
UClass* Z_Construct_UClass_UMultiplayer_Utils_NoRegister()
{
	return UMultiplayer_Utils::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMultiplayer_Utils_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Utility/Multiplayer_Utils.h" },
		{ "ModuleRelativePath", "Utility/Multiplayer_Utils.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMultiplayer_Utils_PrintLocalNetRole, "PrintLocalNetRole" }, // 3501713796
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayer_Utils>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMultiplayer_Utils_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_Samsara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayer_Utils_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayer_Utils_Statics::ClassParams = {
	&UMultiplayer_Utils::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayer_Utils_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiplayer_Utils_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiplayer_Utils()
{
	if (!Z_Registration_Info_UClass_UMultiplayer_Utils.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayer_Utils.OuterSingleton, Z_Construct_UClass_UMultiplayer_Utils_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiplayer_Utils.OuterSingleton;
}
UMultiplayer_Utils::UMultiplayer_Utils(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayer_Utils);
UMultiplayer_Utils::~UMultiplayer_Utils() {}
// ********** End Class UMultiplayer_Utils *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h__Script_Samsara_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayer_Utils, UMultiplayer_Utils::StaticClass, TEXT("UMultiplayer_Utils"), &Z_Registration_Info_UClass_UMultiplayer_Utils, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayer_Utils), 4293879986U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h__Script_Samsara_76263800(TEXT("/Script/Samsara"),
	Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h__Script_Samsara_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Utility_Multiplayer_Utils_h__Script_Samsara_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
