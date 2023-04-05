// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef TANKS_CannonChange_generated_h
#error "CannonChange.generated.h already included, missing '#pragma once' in CannonChange.h"
#endif
#define TANKS_CannonChange_generated_h

#define FID_Tanks_Source_Tanks_CannonChange_h_12_SPARSE_DATA
#define FID_Tanks_Source_Tanks_CannonChange_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define FID_Tanks_Source_Tanks_CannonChange_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnMeshOverlapBegin);


#define FID_Tanks_Source_Tanks_CannonChange_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACannonChange(); \
	friend struct Z_Construct_UClass_ACannonChange_Statics; \
public: \
	DECLARE_CLASS(ACannonChange, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ACannonChange)


#define FID_Tanks_Source_Tanks_CannonChange_h_12_INCLASS \
private: \
	static void StaticRegisterNativesACannonChange(); \
	friend struct Z_Construct_UClass_ACannonChange_Statics; \
public: \
	DECLARE_CLASS(ACannonChange, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Tanks"), NO_API) \
	DECLARE_SERIALIZER(ACannonChange)


#define FID_Tanks_Source_Tanks_CannonChange_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACannonChange(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACannonChange) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannonChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannonChange); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannonChange(ACannonChange&&); \
	NO_API ACannonChange(const ACannonChange&); \
public:


#define FID_Tanks_Source_Tanks_CannonChange_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACannonChange(ACannonChange&&); \
	NO_API ACannonChange(const ACannonChange&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACannonChange); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACannonChange); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACannonChange)


#define FID_Tanks_Source_Tanks_CannonChange_h_9_PROLOG
#define FID_Tanks_Source_Tanks_CannonChange_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_CannonChange_h_12_SPARSE_DATA \
	FID_Tanks_Source_Tanks_CannonChange_h_12_RPC_WRAPPERS \
	FID_Tanks_Source_Tanks_CannonChange_h_12_INCLASS \
	FID_Tanks_Source_Tanks_CannonChange_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Tanks_Source_Tanks_CannonChange_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Tanks_Source_Tanks_CannonChange_h_12_SPARSE_DATA \
	FID_Tanks_Source_Tanks_CannonChange_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_CannonChange_h_12_INCLASS_NO_PURE_DECLS \
	FID_Tanks_Source_Tanks_CannonChange_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TANKS_API UClass* StaticClass<class ACannonChange>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Tanks_Source_Tanks_CannonChange_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
