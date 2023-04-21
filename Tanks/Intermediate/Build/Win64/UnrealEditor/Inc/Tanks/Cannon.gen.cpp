// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/Cannon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannon() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ACannon_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ACannon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	TANKS_API UEnum* Z_Construct_UEnum_Tanks_ECannonType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANKS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeBase_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_AGamePool_NoRegister();
// End Cross Module References
	void ACannon::StaticRegisterNativesACannon()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACannon);
	UClass* Z_Construct_UClass_ACannon_NoRegister()
	{
		return ACannon::StaticClass();
	}
	struct Z_Construct_UClass_ACannon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CannonMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileSpawnPoint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectileSpawnPoint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CannonType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CannonType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CannonType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FullAmmoReloadTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FullAmmoReloadTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectileAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TraceAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TraceAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpecialAmmo_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpecialAmmo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FireDelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FireDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootForceEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ShootForceEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootShake_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ShootShake;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamePool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GamePool;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACannon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Cannon.h" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh = { "CannonMesh", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, CannonMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint = { "ProjectileSpawnPoint", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ProjectileSpawnPoint), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_CannonType = { "CannonType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, CannonType), Z_Construct_UEnum_Tanks_ECannonType, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_MetaData)) }; // 3543087063
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, FireRate), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FullAmmoReloadTime_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FullAmmoReloadTime = { "FullAmmoReloadTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, FullAmmoReloadTime), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_FullAmmoReloadTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FullAmmoReloadTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireRange = { "FireRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, FireRange), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, Damage), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileAmmo_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileAmmo = { "ProjectileAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ProjectileAmmo), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_TraceAmmo_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_TraceAmmo = { "TraceAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, TraceAmmo), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_TraceAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_TraceAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_SpecialAmmo_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_SpecialAmmo = { "SpecialAmmo", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, SpecialAmmo), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_SpecialAmmo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_SpecialAmmo_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_FireDelayTime_MetaData[] = {
		{ "Category", "Fire params" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_FireDelayTime = { "FireDelayTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, FireDelayTime), METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_FireDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_FireDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ShootEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "Comment", "// Effects\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cannon.h" },
		{ "ToolTip", "Effects" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ShootEffect = { "ShootEffect", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ShootEffect), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ShootEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ShootEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_AudioEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_AudioEffect = { "AudioEffect", nullptr, (EPropertyFlags)0x00100000000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, AudioEffect), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_AudioEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_AudioEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ShootForceEffect_MetaData[] = {
		{ "Category", "Effects" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ShootForceEffect = { "ShootForceEffect", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ShootForceEffect), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ShootForceEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ShootForceEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_ShootShake_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_ShootShake = { "ShootShake", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, ShootShake), Z_Construct_UClass_UCameraShakeBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_ShootShake_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_ShootShake_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACannon_Statics::NewProp_GamePool_MetaData[] = {
		{ "ModuleRelativePath", "Cannon.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACannon_Statics::NewProp_GamePool = { "GamePool", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACannon, GamePool), Z_Construct_UClass_AGamePool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::NewProp_GamePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::NewProp_GamePool_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACannon_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileSpawnPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_CannonType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FullAmmoReloadTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_Damage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ProjectileAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_TraceAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_SpecialAmmo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_FireDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ShootEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_AudioEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ShootForceEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_ShootShake,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACannon_Statics::NewProp_GamePool,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACannon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACannon>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACannon_Statics::ClassParams = {
		&ACannon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACannon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACannon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACannon()
	{
		if (!Z_Registration_Info_UClass_ACannon.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACannon.OuterSingleton, Z_Construct_UClass_ACannon_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACannon.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<ACannon>()
	{
		return ACannon::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACannon);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Cannon_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Cannon_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACannon, ACannon::StaticClass, TEXT("ACannon"), &Z_Registration_Info_UClass_ACannon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACannon), 3833070305U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Cannon_h_3783893410(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Cannon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_Cannon_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
