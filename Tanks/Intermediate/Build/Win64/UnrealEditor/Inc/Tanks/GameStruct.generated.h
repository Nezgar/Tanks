// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_GameStruct_generated_h
#error "GameStruct.generated.h already included, missing '#pragma once' in GameStruct.h"
#endif
#define TANKS_GameStruct_generated_h

#define FID_Tanks_Source_Tanks_GameStruct_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDamageData_Statics; \
	TANKS_API static class UScriptStruct* StaticStruct();


template<> TANKS_API UScriptStruct* StaticStruct<struct FDamageData>();

#define FID_Tanks_Source_Tanks_GameStruct_h_35_SPARSE_DATA
#define FID_Tanks_Source_Tanks_GameStruct_h_35_RPC_WRAPPERS
#define FID_Tanks_Source_Tanks_GameStruct_h_35_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tanks_Source_Tanks_GameStruct_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameStruct(); \
	friend struct Z_Construct_UClass_UGameStruct_Statics; \
public: \
	DECLARE_CLASS(UGameStruct, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(UGameStruct)


#define FID_Tanks_Source_Tanks_GameStruct_h_35_INCLASS \
private: \
	static void StaticRegisterNativesUGameStruct(); \
	friend struct Z_Construct_UClass_UGameStruct_Statics; \
public: \
	DECLARE_CLASS(UGameStruct, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(UGameStruct)


#define FID_Tanks_Source_Tanks_GameStruct_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStruct) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStruct); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStruct(UGameStruct&&); \
	NO_API UGameStruct(const UGameStruct&); \
public:


#define FID_Tanks_Source_Tanks_GameStruct_h_35_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameStruct(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameStruct(UGameStruct&&); \
	NO_API UGameStruct(const UGameStruct&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameStruct); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameStruct); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameStruct)


#define FID_Tanks_Source_Tanks_GameStruct_h_32_PROLOG
#define FID_Tanks_Source_Tanks_GameStruct_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_GameStruct_h_35_SPARSE_DATA \
	FID_Tanks_Source_Tanks_GameStruct_h_35_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_GameStruct_h_35_INCLASS \
	FID_Tanks_Source_Tanks_GameStruct_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_GameStruct_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_GameStruct_h_35_SPARSE_DATA \
	FID_Tanks_Source_Tanks_GameStruct_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_GameStruct_h_35_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_GameStruct_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class UGameStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_GameStruct_h


#define FOREACH_ENUM_ECANNONTYPE(op) \
	op(ECannonType::FireProjectile) \
	op(ECannonType::FireTrace) \
	op(ECannonType::FireSpecial) 

enum class ECannonType : uint8;
template<> TANKS_API UEnum* StaticEnum<ECannonType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
