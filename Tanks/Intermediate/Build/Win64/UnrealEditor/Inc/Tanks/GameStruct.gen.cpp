// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/GameStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStruct() {}
// Cross Module References
	TANKS_API UEnum* Z_Construct_UEnum_Tanks_ECannonType();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	TANKS_API UScriptStruct* Z_Construct_UScriptStruct_FDamageData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UGameStruct_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_UGameStruct();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECannonType;
	static UEnum* ECannonType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECannonType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECannonType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Tanks_ECannonType, Z_Construct_UPackage__Script_Tanks(), TEXT("ECannonType"));
		}
		return Z_Registration_Info_UEnum_ECannonType.OuterSingleton;
	}
	template<> TANKS_API UEnum* StaticEnum<ECannonType>()
	{
		return ECannonType_StaticEnum();
	}
	struct Z_Construct_UEnum_Tanks_ECannonType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Tanks_ECannonType_Statics::Enumerators[] = {
		{ "ECannonType::FireProjectile", (int64)ECannonType::FireProjectile },
		{ "ECannonType::FireTrace", (int64)ECannonType::FireTrace },
		{ "ECannonType::FireSpecial", (int64)ECannonType::FireSpecial },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Tanks_ECannonType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FireProjectile.DisplayName", "Use projectile" },
		{ "FireProjectile.Name", "ECannonType::FireProjectile" },
		{ "FireSpecial.DisplayName", "Use special" },
		{ "FireSpecial.Name", "ECannonType::FireSpecial" },
		{ "FireTrace.DisplayName", "Use Trace" },
		{ "FireTrace.Name", "ECannonType::FireTrace" },
		{ "ModuleRelativePath", "GameStruct.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Tanks_ECannonType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Tanks,
		nullptr,
		"ECannonType",
		"ECannonType",
		Z_Construct_UEnum_Tanks_ECannonType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Tanks_ECannonType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Tanks_ECannonType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Tanks_ECannonType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Tanks_ECannonType()
	{
		if (!Z_Registration_Info_UEnum_ECannonType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECannonType.InnerSingleton, Z_Construct_UEnum_Tanks_ECannonType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECannonType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DamageData;
class UScriptStruct* FDamageData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DamageData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DamageData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDamageData, Z_Construct_UPackage__Script_Tanks(), TEXT("DamageData"));
	}
	return Z_Registration_Info_UScriptStruct_DamageData.OuterSingleton;
}
template<> TANKS_API UScriptStruct* StaticStruct<FDamageData>()
{
	return FDamageData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDamageData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instigator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageMaker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageMaker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "GameStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDamageData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDamageData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue_MetaData[] = {
		{ "ModuleRelativePath", "GameStruct.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue = { "DamageValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageData, DamageValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "GameStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageData, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker_MetaData[] = {
		{ "ModuleRelativePath", "GameStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker = { "DamageMaker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDamageData, DamageMaker), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_Instigator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDamageData_Statics::NewProp_DamageMaker,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDamageData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
		nullptr,
		&NewStructOps,
		"DamageData",
		sizeof(FDamageData),
		alignof(FDamageData),
		Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDamageData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDamageData()
	{
		if (!Z_Registration_Info_UScriptStruct_DamageData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DamageData.InnerSingleton, Z_Construct_UScriptStruct_FDamageData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DamageData.InnerSingleton;
	}
	void UGameStruct::StaticRegisterNativesUGameStruct()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameStruct);
	UClass* Z_Construct_UClass_UGameStruct_NoRegister()
	{
		return UGameStruct::StaticClass();
	}
	struct Z_Construct_UClass_UGameStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameStruct.h" },
		{ "ModuleRelativePath", "GameStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameStruct>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameStruct_Statics::ClassParams = {
		&UGameStruct::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UGameStruct_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameStruct()
	{
		if (!Z_Registration_Info_UClass_UGameStruct.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameStruct.OuterSingleton, Z_Construct_UClass_UGameStruct_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGameStruct.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<UGameStruct>()
	{
		return UGameStruct::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameStruct);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::EnumInfo[] = {
		{ ECannonType_StaticEnum, TEXT("ECannonType"), &Z_Registration_Info_UEnum_ECannonType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3543087063U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::ScriptStructInfo[] = {
		{ FDamageData::StaticStruct, Z_Construct_UScriptStruct_FDamageData_Statics::NewStructOps, TEXT("DamageData"), &Z_Registration_Info_UScriptStruct_DamageData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDamageData), 3196560608U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGameStruct, UGameStruct::StaticClass, TEXT("UGameStruct"), &Z_Registration_Info_UClass_UGameStruct, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameStruct), 463046260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_719500027(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_GameStruct_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
