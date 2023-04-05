// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/GamePool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamePool() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_AGamePool_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_AGamePool();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	TANKS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
// End Cross Module References
	void AGamePool::StaticRegisterNativesAGamePool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGamePool);
	UClass* Z_Construct_UClass_AGamePool_NoRegister()
	{
		return AGamePool::StaticClass();
	}
	struct Z_Construct_UClass_AGamePool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile___MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile__;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGamePool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GamePool.h" },
		{ "ModuleRelativePath", "GamePool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePool_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Cannon" },
		{ "ModuleRelativePath", "GamePool.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGamePool_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamePool, ProjectileClass), Z_Construct_UClass_AProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGamePool_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePool_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGamePool_Statics::NewProp_Projectile___MetaData[] = {
		{ "ModuleRelativePath", "GamePool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGamePool_Statics::NewProp_Projectile__ = { "Projectile__", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGamePool, Projectile__), Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGamePool_Statics::NewProp_Projectile___MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePool_Statics::NewProp_Projectile___MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGamePool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePool_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGamePool_Statics::NewProp_Projectile__,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGamePool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGamePool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGamePool_Statics::ClassParams = {
		&AGamePool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGamePool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGamePool_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGamePool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGamePool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGamePool()
	{
		if (!Z_Registration_Info_UClass_AGamePool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGamePool.OuterSingleton, Z_Construct_UClass_AGamePool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGamePool.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<AGamePool>()
	{
		return AGamePool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGamePool);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GamePool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GamePool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGamePool, AGamePool::StaticClass, TEXT("AGamePool"), &Z_Registration_Info_UClass_AGamePool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGamePool), 3461506637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GamePool_h_213542755(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GamePool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GamePool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
