// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define TANKS_HealthComponent_generated_h

#define FID_Tanks_Source_Tanks_HealthComponent_h_14_SPARSE_DATA
#define FID_Tanks_Source_Tanks_HealthComponent_h_14_RPC_WRAPPERS
#define FID_Tanks_Source_Tanks_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tanks_Source_Tanks_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_Tanks_Source_Tanks_HealthComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FID_Tanks_Source_Tanks_HealthComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define FID_Tanks_Source_Tanks_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define FID_Tanks_Source_Tanks_HealthComponent_h_10_PROLOG
#define FID_Tanks_Source_Tanks_HealthComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_HealthComponent_h_14_SPARSE_DATA \
	FID_Tanks_Source_Tanks_HealthComponent_h_14_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_HealthComponent_h_14_INCLASS \
	FID_Tanks_Source_Tanks_HealthComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_HealthComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_HealthComponent_h_14_SPARSE_DATA \
	FID_Tanks_Source_Tanks_HealthComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_HealthComponent_h_14_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_HealthComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
