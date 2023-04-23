// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_PhysicsComponent_generated_h
#error "PhysicsComponent.generated.h already included, missing '#pragma once' in PhysicsComponent.h"
#endif
#define TANKS_PhysicsComponent_generated_h

#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_SPARSE_DATA
#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_RPC_WRAPPERS
#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhysicsComponent(); \
	friend struct Z_Construct_UClass_UPhysicsComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsComponent)


#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUPhysicsComponent(); \
	friend struct Z_Construct_UClass_UPhysicsComponent_Statics; \
public: \
	DECLARE_CLASS(UPhysicsComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(UPhysicsComponent)


#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsComponent(UPhysicsComponent&&); \
	NO_API UPhysicsComponent(const UPhysicsComponent&); \
public:


#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhysicsComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhysicsComponent(UPhysicsComponent&&); \
	NO_API UPhysicsComponent(const UPhysicsComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhysicsComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhysicsComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhysicsComponent)


#define FID_Tanks_Source_Tanks_PhysicsComponent_h_10_PROLOG
#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_PhysicsComponent_h_13_SPARSE_DATA \
	FID_Tanks_Source_Tanks_PhysicsComponent_h_13_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_PhysicsComponent_h_13_INCLASS \
	FID_Tanks_Source_Tanks_PhysicsComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_PhysicsComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_PhysicsComponent_h_13_SPARSE_DATA \
	FID_Tanks_Source_Tanks_PhysicsComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_PhysicsComponent_h_13_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_PhysicsComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class UPhysicsComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_PhysicsComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
