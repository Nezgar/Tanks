// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TANKS_TankAIController_generated_h
#error "TankAIController.generated.h already included, missing '#pragma once' in TankAIController.h"
#endif
#define TANKS_TankAIController_generated_h

#define FID_Tanks_Source_Tanks_TankAIController_h_17_SPARSE_DATA
#define FID_Tanks_Source_Tanks_TankAIController_h_17_RPC_WRAPPERS
#define FID_Tanks_Source_Tanks_TankAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Tanks_Source_Tanks_TankAIController_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATAnkAIController(); \
	friend struct Z_Construct_UClass_ATAnkAIController_Statics; \
public: \
	DECLARE_CLASS(ATAnkAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATAnkAIController)


#define FID_Tanks_Source_Tanks_TankAIController_h_17_INCLASS \
private: \
	static void StaticRegisterNativesATAnkAIController(); \
	friend struct Z_Construct_UClass_ATAnkAIController_Statics; \
public: \
	DECLARE_CLASS(ATAnkAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ATAnkAIController)


#define FID_Tanks_Source_Tanks_TankAIController_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATAnkAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATAnkAIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATAnkAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATAnkAIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATAnkAIController(ATAnkAIController&&); \
	NO_API ATAnkAIController(const ATAnkAIController&); \
public:


#define FID_Tanks_Source_Tanks_TankAIController_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATAnkAIController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATAnkAIController(ATAnkAIController&&); \
	NO_API ATAnkAIController(const ATAnkAIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATAnkAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATAnkAIController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATAnkAIController)


#define FID_Tanks_Source_Tanks_TankAIController_h_14_PROLOG
#define FID_Tanks_Source_Tanks_TankAIController_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_TankAIController_h_17_SPARSE_DATA \
	FID_Tanks_Source_Tanks_TankAIController_h_17_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_TankAIController_h_17_INCLASS \
	FID_Tanks_Source_Tanks_TankAIController_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_TankAIController_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_TankAIController_h_17_SPARSE_DATA \
	FID_Tanks_Source_Tanks_TankAIController_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_TankAIController_h_17_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_TankAIController_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class ATAnkAIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_TankAIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
