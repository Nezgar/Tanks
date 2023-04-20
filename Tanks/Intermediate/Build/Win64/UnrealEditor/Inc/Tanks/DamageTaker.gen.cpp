// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/DamageTaker.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDamageTaker() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_UDamageTaker_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UDamageTaker();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Tanks();
// End Cross Module References
	void UDamageTaker::StaticRegisterNativesUDamageTaker()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDamageTaker);
	UClass* Z_Construct_UClass_UDamageTaker_NoRegister()
	{
		return UDamageTaker::StaticClass();
	}
	struct Z_Construct_UClass_UDamageTaker_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDamageTaker_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDamageTaker_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "DamageTaker.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDamageTaker_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IDamageTaker>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDamageTaker_Statics::ClassParams = {
		&UDamageTaker::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDamageTaker_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDamageTaker_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDamageTaker()
	{
		if (!Z_Registration_Info_UClass_UDamageTaker.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDamageTaker.OuterSingleton, Z_Construct_UClass_UDamageTaker_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDamageTaker.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<UDamageTaker>()
	{
		return UDamageTaker::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDamageTaker);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_DamageTaker_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_DamageTaker_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDamageTaker, UDamageTaker::StaticClass, TEXT("UDamageTaker"), &Z_Registration_Info_UClass_UDamageTaker, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDamageTaker), 874727035U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_DamageTaker_h_1504477669(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_DamageTaker_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_DamageTaker_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
