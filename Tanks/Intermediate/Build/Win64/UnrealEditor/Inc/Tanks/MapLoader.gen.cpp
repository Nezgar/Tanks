// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/MapLoader.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMapLoader() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_AMapLoader_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_AMapLoader();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPointLightComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AMapLoader::execOnTriggerOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTriggerOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AMapLoader::StaticRegisterNativesAMapLoader()
	{
		UClass* Class = AMapLoader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTriggerOverlapBegin", &AMapLoader::execOnTriggerOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics
	{
		struct MapLoader_eventOnTriggerOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapLoader_eventOnTriggerOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapLoader_eventOnTriggerOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapLoader_eventOnTriggerOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapLoader_eventOnTriggerOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((MapLoader_eventOnTriggerOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MapLoader_eventOnTriggerOverlapBegin_Parms), &Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MapLoader_eventOnTriggerOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MapLoader.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMapLoader, nullptr, "OnTriggerOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::MapLoader_eventOnTriggerOverlapBegin_Parms), Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMapLoader);
	UClass* Z_Construct_UClass_AMapLoader_NoRegister()
	{
		return AMapLoader::StaticClass();
	}
	struct Z_Construct_UClass_AMapLoader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GatesMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GatesMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActivatedLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActivatedLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeactivatedLight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DeactivatedLight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoadLevelName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LoadLevelName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IsActivated_MetaData[];
#endif
		static void NewProp_IsActivated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsActivated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMapLoader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMapLoader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMapLoader_OnTriggerOverlapBegin, "OnTriggerOverlapBegin" }, // 3694216210
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLoader_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MapLoader.h" },
		{ "ModuleRelativePath", "MapLoader.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLoader_Statics::NewProp_GatesMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MapLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapLoader_Statics::NewProp_GatesMesh = { "GatesMesh", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapLoader, GatesMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapLoader_Statics::NewProp_GatesMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapLoader_Statics::NewProp_GatesMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLoader_Statics::NewProp_TriggerCollider_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MapLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapLoader_Statics::NewProp_TriggerCollider = { "TriggerCollider", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapLoader, TriggerCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapLoader_Statics::NewProp_TriggerCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapLoader_Statics::NewProp_TriggerCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLoader_Statics::NewProp_ActivatedLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MapLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapLoader_Statics::NewProp_ActivatedLight = { "ActivatedLight", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapLoader, ActivatedLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapLoader_Statics::NewProp_ActivatedLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapLoader_Statics::NewProp_ActivatedLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLoader_Statics::NewProp_DeactivatedLight_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MapLoader.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMapLoader_Statics::NewProp_DeactivatedLight = { "DeactivatedLight", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapLoader, DeactivatedLight), Z_Construct_UClass_UPointLightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMapLoader_Statics::NewProp_DeactivatedLight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapLoader_Statics::NewProp_DeactivatedLight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLoader_Statics::NewProp_LoadLevelName_MetaData[] = {
		{ "Category", "Level loading params" },
		{ "ModuleRelativePath", "MapLoader.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMapLoader_Statics::NewProp_LoadLevelName = { "LoadLevelName", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMapLoader, LoadLevelName), METADATA_PARAMS(Z_Construct_UClass_AMapLoader_Statics::NewProp_LoadLevelName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapLoader_Statics::NewProp_LoadLevelName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMapLoader_Statics::NewProp_IsActivated_MetaData[] = {
		{ "Category", "Level loading params" },
		{ "ModuleRelativePath", "MapLoader.h" },
	};
#endif
	void Z_Construct_UClass_AMapLoader_Statics::NewProp_IsActivated_SetBit(void* Obj)
	{
		((AMapLoader*)Obj)->IsActivated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMapLoader_Statics::NewProp_IsActivated = { "IsActivated", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AMapLoader), &Z_Construct_UClass_AMapLoader_Statics::NewProp_IsActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMapLoader_Statics::NewProp_IsActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMapLoader_Statics::NewProp_IsActivated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMapLoader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLoader_Statics::NewProp_GatesMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLoader_Statics::NewProp_TriggerCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLoader_Statics::NewProp_ActivatedLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLoader_Statics::NewProp_DeactivatedLight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLoader_Statics::NewProp_LoadLevelName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMapLoader_Statics::NewProp_IsActivated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMapLoader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMapLoader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMapLoader_Statics::ClassParams = {
		&AMapLoader::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AMapLoader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AMapLoader_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMapLoader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMapLoader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMapLoader()
	{
		if (!Z_Registration_Info_UClass_AMapLoader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMapLoader.OuterSingleton, Z_Construct_UClass_AMapLoader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMapLoader.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<AMapLoader>()
	{
		return AMapLoader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMapLoader);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_MapLoader_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_MapLoader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMapLoader, AMapLoader::StaticClass, TEXT("AMapLoader"), &Z_Registration_Info_UClass_AMapLoader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMapLoader), 3347862515U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_MapLoader_h_26459393(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_MapLoader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_MapLoader_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
