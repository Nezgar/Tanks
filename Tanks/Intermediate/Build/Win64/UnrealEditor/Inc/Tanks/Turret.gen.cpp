// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/Turret.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ATurret_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATurret();
	TANKS_API UClass* Z_Construct_UClass_AMachinePawn();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
// End Cross Module References
	void ATurret::StaticRegisterNativesATurret()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATurret);
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	struct Z_Construct_UClass_ATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accurency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Accurency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMachinePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Turret.h" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRange_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRange = { "TargetingRange", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, TargetingRange), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TargetingSpeed_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TargetingSpeed = { "TargetingSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, TargetingSpeed), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_TargetingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TargetingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRate_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRate = { "TargetingRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, TargetingRate), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_Accurency_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_Accurency = { "Accurency", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, Accurency), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_Accurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_Accurency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_PlayerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_TargetingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_TargetingRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_Accurency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
		&ATurret::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATurret_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurret()
	{
		if (!Z_Registration_Info_UClass_ATurret.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATurret.OuterSingleton, Z_Construct_UClass_ATurret_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATurret.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<ATurret>()
	{
		return ATurret::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Turret_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Turret_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATurret, ATurret::StaticClass, TEXT("ATurret"), &Z_Registration_Info_UClass_ATurret, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATurret), 1302750946U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Turret_h_3067876110(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Turret_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Turret_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
