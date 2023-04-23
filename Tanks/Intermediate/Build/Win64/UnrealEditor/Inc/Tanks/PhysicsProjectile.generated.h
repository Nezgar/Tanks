// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_PhysicsProjectile_generated_h
#error "PhysicsProjectile.generated.h already included, missing '#pragma once' in PhysicsProjectile.h"
#endif
#define TANKS_PhysicsProjectile_generated_h

#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_SPARSE_DATA
#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_RPC_WRAPPERS
#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsProjectile(); \
	friend struct Z_Construct_UClass_APhysicsProjectile_Statics; \
public: \
	DECLARE_CLASS(APhysicsProjectile, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(APhysicsProjectile)


#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsProjectile(); \
	friend struct Z_Construct_UClass_APhysicsProjectile_Statics; \
public: \
	DECLARE_CLASS(APhysicsProjectile, AProjectile, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(APhysicsProjectile)


#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsProjectile(APhysicsProjectile&&); \
	NO_API APhysicsProjectile(const APhysicsProjectile&); \
public:


#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsProjectile(APhysicsProjectile&&); \
	NO_API APhysicsProjectile(const APhysicsProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APhysicsProjectile)


#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_15_PROLOG
#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_SPARSE_DATA \
	FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_INCLASS \
	FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_SPARSE_DATA \
	FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_PhysicsProjectile_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class APhysicsProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_PhysicsProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
