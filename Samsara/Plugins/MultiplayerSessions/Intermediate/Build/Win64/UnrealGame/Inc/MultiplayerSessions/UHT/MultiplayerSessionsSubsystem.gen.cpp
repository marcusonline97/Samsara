// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MultiplayerSessionsSubsystem.h"
#include "Engine/GameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMultiplayerSessionsSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem();
MULTIPLAYERSESSIONS_API UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister();
MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature();
MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature();
MULTIPLAYERSESSIONS_API UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MultiplayerSessions();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FMultiplayerOnCreateSessionComplete ***********************************
struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics
{
	struct _Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\n// Delcaring our own custom delegates for the Menu class to bind callbacks to\n//\n" },
#endif
		{ "ModuleRelativePath", "Public/MultiplayerSessionsSubsystem.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delcaring our own custom delegates for the Menu class to bind callbacks to" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerOnCreateSessionComplete__DelegateSignature", Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnCreateSessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMultiplayerOnCreateSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnCreateSessionComplete, bool bWasSuccessful)
{
	struct _Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_MultiplayerSessions_eventMultiplayerOnCreateSessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MultiplayerOnCreateSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMultiplayerOnCreateSessionComplete *************************************

// ********** Begin Delegate FMultiplayerOnDestroySessionComplete **********************************
struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics
{
	struct _Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerSessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerOnDestroySessionComplete__DelegateSignature", Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnDestroySessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMultiplayerOnDestroySessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnDestroySessionComplete, bool bWasSuccessful)
{
	struct _Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_MultiplayerSessions_eventMultiplayerOnDestroySessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MultiplayerOnDestroySessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMultiplayerOnDestroySessionComplete ************************************

// ********** Begin Delegate FMultiplayerOnStartSessionComplete ************************************
struct Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics
{
	struct _Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MultiplayerSessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bWasSuccessful_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasSuccessful;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit(void* Obj)
{
	((_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms*)Obj)->bWasSuccessful = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful = { "bWasSuccessful", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms), &Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::NewProp_bWasSuccessful,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_MultiplayerSessions, nullptr, "MultiplayerOnStartSessionComplete__DelegateSignature", Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MultiplayerSessions_MultiplayerOnStartSessionComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMultiplayerOnStartSessionComplete_DelegateWrapper(const FMulticastScriptDelegate& MultiplayerOnStartSessionComplete, bool bWasSuccessful)
{
	struct _Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms
	{
		bool bWasSuccessful;
	};
	_Script_MultiplayerSessions_eventMultiplayerOnStartSessionComplete_Parms Parms;
	Parms.bWasSuccessful=bWasSuccessful ? true : false;
	MultiplayerOnStartSessionComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FMultiplayerOnStartSessionComplete **************************************

// ********** Begin Class UMultiplayerSessionsSubsystem ********************************************
void UMultiplayerSessionsSubsystem::StaticRegisterNativesUMultiplayerSessionsSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem;
UClass* UMultiplayerSessionsSubsystem::GetPrivateStaticClass()
{
	using TClass = UMultiplayerSessionsSubsystem;
	if (!Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MultiplayerSessionsSubsystem"),
			Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.InnerSingleton,
			StaticRegisterNativesUMultiplayerSessionsSubsystem,
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
	return Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem_NoRegister()
{
	return UMultiplayerSessionsSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MultiplayerSessionsSubsystem.h" },
		{ "ModuleRelativePath", "Public/MultiplayerSessionsSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMultiplayerSessionsSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_MultiplayerSessions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams = {
	&UMultiplayerSessionsSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMultiplayerSessionsSubsystem()
{
	if (!Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton, Z_Construct_UClass_UMultiplayerSessionsSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMultiplayerSessionsSubsystem);
UMultiplayerSessionsSubsystem::~UMultiplayerSessionsSubsystem() {}
// ********** End Class UMultiplayerSessionsSubsystem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Practice_MP_Test_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h__Script_MultiplayerSessions_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMultiplayerSessionsSubsystem, UMultiplayerSessionsSubsystem::StaticClass, TEXT("UMultiplayerSessionsSubsystem"), &Z_Registration_Info_UClass_UMultiplayerSessionsSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMultiplayerSessionsSubsystem), 3245489834U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Practice_MP_Test_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h__Script_MultiplayerSessions_2619548127(TEXT("/Script/MultiplayerSessions"),
	Z_CompiledInDeferFile_FID_Practice_MP_Test_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h__Script_MultiplayerSessions_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Practice_MP_Test_Plugins_MultiplayerSessions_Source_MultiplayerSessions_Public_MultiplayerSessionsSubsystem_h__Script_MultiplayerSessions_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
