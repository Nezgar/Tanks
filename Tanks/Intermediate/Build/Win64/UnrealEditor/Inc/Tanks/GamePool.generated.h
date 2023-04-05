// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_GamePool_generated_h
#error "GamePool.generated.h already included, missing '#pragma once' in GamePool.h"
#endif
#define TANKS_GamePool_generated_h

#define FID_Tanks_Source_Tanks_GamePool_h_13_SPARSE_DATA
#define FID_Tanks_Source_Tanks_GamePool_h_13_RPC_WRAPPERS
#define FID_Tanks_Source_Tanks_GamePool_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tanks_Source_Tanks_GamePool_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGamePool(); \
	friend struct Z_Construct_UClass_AGamePool_Statics; \
public: \
	DECLARE_CLASS(AGamePool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AGamePool)


#define FID_Tanks_Source_Tanks_GamePool_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGamePool(); \
	friend struct Z_Construct_UClass_AGamePool_Statics; \
public: \
	DECLARE_CLASS(AGamePool, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(AGamePool)


#define FID_Tanks_Source_Tanks_GamePool_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGamePool(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGamePool) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePool); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamePool(AGamePool&&); \
	NO_API AGamePool(const AGamePool&); \
public:


#define FID_Tanks_Source_Tanks_GamePool_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGamePool(AGamePool&&); \
	NO_API AGamePool(const AGamePool&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGamePool); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGamePool); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGamePool)


#define FID_Tanks_Source_Tanks_GamePool_h_10_PROLOG
#define FID_Tanks_Source_Tanks_GamePool_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_GamePool_h_13_SPARSE_DATA \
	FID_Tanks_Source_Tanks_GamePool_h_13_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_GamePool_h_13_INCLASS \
	FID_Tanks_Source_Tanks_GamePool_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_GamePool_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_GamePool_h_13_SPARSE_DATA \
	FID_Tanks_Source_Tanks_GamePool_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_GamePool_h_13_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_GamePool_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class AGamePool>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_GamePool_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
