// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/TankFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankFactory() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ATankFactory_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATankFactory();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UScriptStruct* Z_Construct_UScriptStruct_FDamageData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UHealthComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANKS_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_AMapLoader_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UDamageTaker_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATankFactory::execDamageTaked)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DamageTaked(Z_Param_DamageValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankFactory::execDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Die();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankFactory::execTakeDamage)
	{
		P_GET_STRUCT(FDamageData,Z_Param_DamageData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeDamage(Z_Param_DamageData);
		P_NATIVE_END;
	}
	void ATankFactory::StaticRegisterNativesATankFactory()
	{
		UClass* Class = ATankFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DamageTaked", &ATankFactory::execDamageTaked },
			{ "Die", &ATankFactory::execDie },
			{ "TakeDamage", &ATankFactory::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankFactory_DamageTaked_Statics
	{
		struct TankFactory_eventDamageTaked_Parms
		{
			float DamageValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankFactory_eventDamageTaked_Parms, DamageValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::NewProp_DamageValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankFactory, nullptr, "DamageTaked", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::TankFactory_eventDamageTaked_Parms), Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankFactory_DamageTaked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankFactory_DamageTaked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankFactory_Die_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankFactory_Die_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankFactory_Die_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankFactory, nullptr, "Die", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankFactory_Die_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_Die_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankFactory_Die()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankFactory_Die_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankFactory_TakeDamage_Statics
	{
		struct TankFactory_eventTakeDamage_Parms
		{
			FDamageData DamageData;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DamageData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::NewProp_DamageData = { "DamageData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankFactory_eventTakeDamage_Parms, DamageData), Z_Construct_UScriptStruct_FDamageData, METADATA_PARAMS(nullptr, 0) }; // 3196560608
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::NewProp_DamageData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankFactory, nullptr, "TakeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::TankFactory_eventTakeDamage_Parms), Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankFactory_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankFactory_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankFactory);
	UClass* Z_Construct_UClass_ATankFactory_NoRegister()
	{
		return ATankFactory::StaticClass();
	}
	struct Z_Construct_UClass_ATankFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedBuildingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedBuildingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeactivatedBuildingMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeactivatedBuildingMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankSpawnPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTankClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_SpawnTankClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnTankRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnTankRate;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankWayPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankWayPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TankWayPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedMapLoader_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LinkedMapLoader;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadLevelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadLevelName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankFactory_DamageTaked, "DamageTaked" }, // 3715997294
		{ &Z_Construct_UFunction_ATankFactory_Die, "Die" }, // 1582810893
		{ &Z_Construct_UFunction_ATankFactory_TakeDamage, "TakeDamage" }, // 2304392468
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TankFactory.h" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_ActivatedBuildingMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_ActivatedBuildingMesh = { "ActivatedBuildingMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, ActivatedBuildingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_ActivatedBuildingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_ActivatedBuildingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_DeactivatedBuildingMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_DeactivatedBuildingMesh = { "DeactivatedBuildingMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, DeactivatedBuildingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_DeactivatedBuildingMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_DeactivatedBuildingMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint = { "TankSpawnPoint", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, TankSpawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider = { "HitCollider", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, HitCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent = { "HealthComponent", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, HealthComponent), Z_Construct_UClass_UHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankClass_MetaData[] = {
		{ "Category", "Spawn tanks params" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankClass = { "SpawnTankClass", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, SpawnTankClass), Z_Construct_UClass_ATankPawn_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankRate_MetaData[] = {
		{ "Category", "Spawn tanks params" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankRate = { "SpawnTankRate", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, SpawnTankRate), METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankRate_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoints_Inner = { "TankWayPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoints_MetaData[] = {
		{ "Category", "Spawn tanks params" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoints = { "TankWayPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, TankWayPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_LinkedMapLoader_MetaData[] = {
		{ "Category", "Spawn tanks params" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_LinkedMapLoader = { "LinkedMapLoader", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, LinkedMapLoader), Z_Construct_UClass_AMapLoader_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_LinkedMapLoader_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_LinkedMapLoader_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankFactory_Statics::NewProp_LoadLevelName_MetaData[] = {
		{ "Category", "Load level name" },
		{ "ModuleRelativePath", "TankFactory.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATankFactory_Statics::NewProp_LoadLevelName = { "LoadLevelName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankFactory, LoadLevelName), METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::NewProp_LoadLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::NewProp_LoadLevelName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_ActivatedBuildingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_DeactivatedBuildingMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_TankSpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_HitCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_HealthComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_SpawnTankRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_TankWayPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_LinkedMapLoader,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankFactory_Statics::NewProp_LoadLevelName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ATankFactory_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDamageTaker_NoRegister, (int32)VTABLE_OFFSET(ATankFactory, IDamageTaker), false },  // 874727035
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankFactory_Statics::ClassParams = {
		&ATankFactory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankFactory_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankFactory()
	{
		if (!Z_Registration_Info_UClass_ATankFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankFactory.OuterSingleton, Z_Construct_UClass_ATankFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankFactory.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<ATankFactory>()
	{
		return ATankFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankFactory);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankFactory, ATankFactory::StaticClass, TEXT("ATankFactory"), &Z_Registration_Info_UClass_ATankFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankFactory), 1234238972U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankFactory_h_2881685193(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
