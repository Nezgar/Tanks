// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/TankAIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankAIController() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ATAnkAIController_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATAnkAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ATAnkAIController::StaticRegisterNativesATAnkAIController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATAnkAIController);
	UClass* Z_Construct_UClass_ATAnkAIController_NoRegister()
	{
		return ATAnkAIController::StaticClass();
	}
	struct Z_Construct_UClass_ATAnkAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PatrollingPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PatrollingPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PatrollingPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementAccurency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementAccurency;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WeaponChangeDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WeaponChangeDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetingSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Accurency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Accurency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATAnkAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "TankAIController.h" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TankPawn_MetaData[] = {
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TankPawn = { "TankPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATAnkAIController, TankPawn), Z_Construct_UClass_ATankPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TankPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TankPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATAnkAIController, PlayerPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PlayerPawn_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PatrollingPoints_Inner = { "PatrollingPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PatrollingPoints_MetaData[] = {
		{ "Category", "AI|Move params|Patrol points" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PatrollingPoints = { "PatrollingPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATAnkAIController, PatrollingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PatrollingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PatrollingPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::NewProp_MovementAccurency_MetaData[] = {
		{ "Category", "AI|Move params|Accurency" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_MovementAccurency = { "MovementAccurency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATAnkAIController, MovementAccurency), METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_MovementAccurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_MovementAccurency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::NewProp_WeaponChangeDelay_MetaData[] = {
		{ "Category", "AI|Fire Change" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_WeaponChangeDelay = { "WeaponChangeDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATAnkAIController, WeaponChangeDelay), METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_WeaponChangeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_WeaponChangeDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingRange_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingRange = { "TargetingRange", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATAnkAIController, TargetingRange), METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingSpeed_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingSpeed = { "TargetingSpeed", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATAnkAIController, TargetingSpeed), METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATAnkAIController_Statics::NewProp_Accurency_MetaData[] = {
		{ "Category", "Targeting" },
		{ "ModuleRelativePath", "TankAIController.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATAnkAIController_Statics::NewProp_Accurency = { "Accurency", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATAnkAIController, Accurency), METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_Accurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::NewProp_Accurency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATAnkAIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TankPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PlayerPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PatrollingPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_PatrollingPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_MovementAccurency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_WeaponChangeDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_TargetingSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATAnkAIController_Statics::NewProp_Accurency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATAnkAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATAnkAIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATAnkAIController_Statics::ClassParams = {
		&ATAnkAIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATAnkAIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATAnkAIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATAnkAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATAnkAIController()
	{
		if (!Z_Registration_Info_UClass_ATAnkAIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATAnkAIController.OuterSingleton, Z_Construct_UClass_ATAnkAIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATAnkAIController.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<ATAnkAIController>()
	{
		return ATAnkAIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATAnkAIController);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankAIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankAIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATAnkAIController, ATAnkAIController::StaticClass, TEXT("ATAnkAIController"), &Z_Registration_Info_UClass_ATAnkAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATAnkAIController), 3372726843U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankAIController_h_1275821298(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankAIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankAIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
