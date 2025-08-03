// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSamsara_init() {}
	SAMSARA_API UFunction* Z_Construct_UDelegateFunction_Samsara_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Samsara;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Samsara()
	{
		if (!Z_Registration_Info_UPackage__Script_Samsara.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Samsara_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Samsara",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD1820496,
				0xBE6E183B,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Samsara.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Samsara.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Samsara(Z_Construct_UPackage__Script_Samsara, TEXT("/Script/Samsara"), Z_Registration_Info_UPackage__Script_Samsara, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD1820496, 0xBE6E183B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
