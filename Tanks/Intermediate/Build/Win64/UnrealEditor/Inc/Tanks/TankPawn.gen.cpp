// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tanks/TankPawn.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTankPawn() {}
// Cross Module References
	TANKS_API UClass* Z_Construct_UClass_ATankPawn_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATankPawn();
	TANKS_API UClass* Z_Construct_UClass_AMachinePawn();
	UPackage* Z_Construct_UPackage__Script_Tanks();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	TANKS_API UClass* Z_Construct_UClass_AProjectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_ATankPlayerController_NoRegister();
	TANKS_API UClass* Z_Construct_UClass_AGamePool_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ATankPawn::execGetMovementAccurency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMovementAccurency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execGetPatrollingPoints)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetPatrollingPoints();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execRotateTurretTo)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RotateTurretTo(Z_Param_TargetPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ATankPawn::execGetTurretForwardVector)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetTurretForwardVector();
		P_NATIVE_END;
	}
	void ATankPawn::StaticRegisterNativesATankPawn()
	{
		UClass* Class = ATankPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMovementAccurency", &ATankPawn::execGetMovementAccurency },
			{ "GetPatrollingPoints", &ATankPawn::execGetPatrollingPoints },
			{ "GetTurretForwardVector", &ATankPawn::execGetTurretForwardVector },
			{ "RotateTurretTo", &ATankPawn::execRotateTurretTo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics
	{
		struct TankPawn_eventGetMovementAccurency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventGetMovementAccurency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "GetMovementAccurency", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::TankPawn_eventGetMovementAccurency_Parms), Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_GetMovementAccurency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPawn_GetMovementAccurency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics
	{
		struct TankPawn_eventGetPatrollingPoints_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventGetPatrollingPoints_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "GetPatrollingPoints", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::TankPawn_eventGetPatrollingPoints_Parms), Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_GetPatrollingPoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPawn_GetPatrollingPoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics
	{
		struct TankPawn_eventGetTurretForwardVector_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventGetTurretForwardVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//AiTank\n" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "AiTank" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "GetTurretForwardVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::TankPawn_eventGetTurretForwardVector_Parms), Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_GetTurretForwardVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPawn_GetTurretForwardVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics
	{
		struct TankPawn_eventRotateTurretTo_Parms
		{
			FVector TargetPosition;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetPosition;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::NewProp_TargetPosition = { "TargetPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TankPawn_eventRotateTurretTo_Parms, TargetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::NewProp_TargetPosition,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATankPawn, nullptr, "RotateTurretTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::TankPawn_eventRotateTurretTo_Parms), Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATankPawn_RotateTurretTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATankPawn_RotateTurretTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATankPawn);
	UClass* Z_Construct_UClass_ATankPawn_NoRegister()
	{
		return ATankPawn::StaticClass();
	}
	struct Z_Construct_UClass_ATankPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpringArm_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArm;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurretRotationInterpolationKey_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurretRotationInterpolationKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TankController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TankController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GamePool_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_GamePool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitCollider;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATankPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMachinePawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Tanks,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATankPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATankPawn_GetMovementAccurency, "GetMovementAccurency" }, // 2650688297
		{ &Z_Construct_UFunction_ATankPawn_GetPatrollingPoints, "GetPatrollingPoints" }, // 3221570720
		{ &Z_Construct_UFunction_ATankPawn_GetTurretForwardVector, "GetTurretForwardVector" }, // 3812534295
		{ &Z_Construct_UFunction_ATankPawn_RotateTurretTo, "RotateTurretTo" }, // 3299245675
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TankPawn.h" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_Projectile_MetaData[] = {
		{ "Comment", "/*\n\x09UPROPERTY()\n\x09\x09""ACannon* Cannon;\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Cannon\")\n\x09\x09TSubclassOf<ACannon> CannonClass;\n\x09/*\n\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Cannon\")\n\x09\x09TSubclassOf<AProjectile> Projectile_;\n\x09\x09*/" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "UPROPERTY()\n        ACannon* Cannon;\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Cannon\")\n        TSubclassOf<ACannon> CannonClass;\n\nUPROPERTY(EditAnywhere, BlueprintReadWrite, Category = \"Cannon\")\n        TSubclassOf<AProjectile> Projectile_;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, Projectile), Z_Construct_UClass_AProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm = { "SpringArm", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, SpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movements" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Movements" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData[] = {
		{ "Category", "Movements | Rotation" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey = { "TurretRotationInterpolationKey", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TurretRotationInterpolationKey), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController = { "TankController", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, TankController), Z_Construct_UClass_ATankPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_GamePool_MetaData[] = {
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_GamePool = { "GamePool", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, GamePool), Z_Construct_UClass_AGamePool_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_GamePool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_GamePool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider = { "HitCollider", nullptr, (EPropertyFlags)0x00200800000b000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, HitCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_Inner = { "PatrollingPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_MetaData[] = {
		{ "Category", "AI|Move params|Patrol points" },
		{ "Comment", "/**/// Tank AI\n" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "TankPawn.h" },
		{ "ToolTip", "/// Tank AI" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints = { "PatrollingPoints", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, PatrollingPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency_MetaData[] = {
		{ "Category", "AI|Move params | Accurency" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency = { "MovementAccurency", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, MovementAccurency), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATankPawn_Statics::NewProp_WeaponChangeDelay_MetaData[] = {
		{ "Category", "AI|Fire Change" },
		{ "ModuleRelativePath", "TankPawn.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATankPawn_Statics::NewProp_WeaponChangeDelay = { "WeaponChangeDelay", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATankPawn, WeaponChangeDelay), METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::NewProp_WeaponChangeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::NewProp_WeaponChangeDelay_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATankPawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_Projectile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_SpringArm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_MoveSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_RotationSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TurretRotationInterpolationKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_TankController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_GamePool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_HitCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_PatrollingPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_MovementAccurency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATankPawn_Statics::NewProp_WeaponChangeDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATankPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATankPawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATankPawn_Statics::ClassParams = {
		&ATankPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATankPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATankPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATankPawn()
	{
		if (!Z_Registration_Info_UClass_ATankPawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATankPawn.OuterSingleton, Z_Construct_UClass_ATankPawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATankPawn.OuterSingleton;
	}
	template<> TANKS_API UClass* StaticClass<ATankPawn>()
	{
		return ATankPawn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATankPawn);
	struct Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATankPawn, ATankPawn::StaticClass, TEXT("ATankPawn"), &Z_Registration_Info_UClass_ATankPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATankPawn), 2274859605U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_2111835861(TEXT("/Script/Tanks"),
		Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Tanks_Source_Tanks_TankPawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
