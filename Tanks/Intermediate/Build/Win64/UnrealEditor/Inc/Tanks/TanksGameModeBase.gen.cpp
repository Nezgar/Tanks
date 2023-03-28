// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/TanksGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTanksGameModeBase() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ATanksGameModeBase_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATanksGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Tanks();
// End Cross Module References
	void ATanksGameModeBase::StaticRegisterNativesATanksGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATanksGameModeBase);
	UClass* Z_Construct_UClass_ATanksGameModeBase_NoRegister()
	{
		return ATanksGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ATanksGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATanksGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATanksGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "TanksGameModeBase.h" },
		{ "ModuleRelativePath", "TanksGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATanksGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATanksGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATanksGameModeBase_Statics::ClassParams = {
		&ATanksGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ATanksGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATanksGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATanksGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ATanksGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATanksGameModeBase.OuterSingleton, Z_Construct_UClass_ATanksGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATanksGameModeBase.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<ATanksGameModeBase>()
	{
		return ATanksGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATanksGameModeBase);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TanksGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TanksGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATanksGameModeBase, ATanksGameModeBase::StaticClass, TEXT("ATanksGameModeBase"), &Z_Registration_Info_UClass_ATanksGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATanksGameModeBase), 1167162933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TanksGameModeBase_h_505526789(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TanksGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TanksGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
