// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_TanksGameModeBase_generated_h
#error "TanksGameModeBase.generated.h already included, missing '#pragma once' in TanksGameModeBase.h"
#endif
#define TANKS_TanksGameModeBase_generated_h

#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_SPARSE_DATA
#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_RPC_WRAPPERS
#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATanksGameModeBase(); \
	friend struct Z_Construct_UClass_ATanksGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATanksGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATanksGameModeBase)


#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATanksGameModeBase(); \
	friend struct Z_Construct_UClass_ATanksGameModeBase_Statics; \
public: \
	DECLARE_CLASS(ATanksGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATanksGameModeBase)


#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATanksGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATanksGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATanksGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATanksGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATanksGameModeBase(ATanksGameModeBase&&); \
	NO_API ATanksGameModeBase(const ATanksGameModeBase&); \
public:


#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATanksGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATanksGameModeBase(ATanksGameModeBase&&); \
	NO_API ATanksGameModeBase(const ATanksGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATanksGameModeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATanksGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATanksGameModeBase)


#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_12_PROLOG
#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_SPARSE_DATA \
	FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_INCLASS \
	FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_SPARSE_DATA \
	FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_TanksGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class ATanksGameModeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_TanksGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
