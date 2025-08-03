// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Samsara/Actors/Samsara_Actor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSamsara_Actor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
SAMSARA_API UClass* Z_Construct_UClass_ASamsara_Actor();
SAMSARA_API UClass* Z_Construct_UClass_ASamsara_Actor_NoRegister();
UPackage* Z_Construct_UPackage__Script_Samsara();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASamsara_Actor ***********************************************************
void ASamsara_Actor::StaticRegisterNativesASamsara_Actor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ASamsara_Actor;
UClass* ASamsara_Actor::GetPrivateStaticClass()
{
	using TClass = ASamsara_Actor;
	if (!Z_Registration_Info_UClass_ASamsara_Actor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("Samsara_Actor"),
			Z_Registration_Info_UClass_ASamsara_Actor.InnerSingleton,
			StaticRegisterNativesASamsara_Actor,
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
	return Z_Registration_Info_UClass_ASamsara_Actor.InnerSingleton;
}
UClass* Z_Construct_UClass_ASamsara_Actor_NoRegister()
{
	return ASamsara_Actor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASamsara_Actor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actors/Samsara_Actor.h" },
		{ "ModuleRelativePath", "Actors/Samsara_Actor.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASamsara_Actor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ASamsara_Actor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Samsara,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsara_Actor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASamsara_Actor_Statics::ClassParams = {
	&ASamsara_Actor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASamsara_Actor_Statics::Class_MetaDataParams), Z_Construct_UClass_ASamsara_Actor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ASamsara_Actor()
{
	if (!Z_Registration_Info_UClass_ASamsara_Actor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASamsara_Actor.OuterSingleton, Z_Construct_UClass_ASamsara_Actor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASamsara_Actor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ASamsara_Actor);
ASamsara_Actor::~ASamsara_Actor() {}
// ********** End Class ASamsara_Actor *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h__Script_Samsara_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASamsara_Actor, ASamsara_Actor::StaticClass, TEXT("ASamsara_Actor"), &Z_Registration_Info_UClass_ASamsara_Actor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASamsara_Actor), 286048899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h__Script_Samsara_3610901989(TEXT("/Script/Samsara"),
	Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h__Script_Samsara_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Samsara_Samsara_Samsara_Source_Samsara_Actors_Samsara_Actor_h__Script_Samsara_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
