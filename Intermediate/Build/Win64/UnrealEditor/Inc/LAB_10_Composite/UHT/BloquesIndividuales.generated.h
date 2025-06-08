// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BloquesIndividuales.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EBlockType : uint8;
#ifdef LAB_10_COMPOSITE_BloquesIndividuales_generated_h
#error "BloquesIndividuales.generated.h already included, missing '#pragma once' in BloquesIndividuales.h"
#endif
#define LAB_10_COMPOSITE_BloquesIndividuales_generated_h

#define FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetBlockType);


#define FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABloquesIndividuales(); \
	friend struct Z_Construct_UClass_ABloquesIndividuales_Statics; \
public: \
	DECLARE_CLASS(ABloquesIndividuales, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/LAB_10_Composite"), NO_API) \
	DECLARE_SERIALIZER(ABloquesIndividuales) \
	virtual UObject* _getUObject() const override { return const_cast<ABloquesIndividuales*>(this); }


#define FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABloquesIndividuales(ABloquesIndividuales&&); \
	ABloquesIndividuales(const ABloquesIndividuales&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABloquesIndividuales); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABloquesIndividuales); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABloquesIndividuales) \
	NO_API virtual ~ABloquesIndividuales();


#define FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_20_PROLOG
#define FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_23_INCLASS_NO_PURE_DECLS \
	FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LAB_10_COMPOSITE_API UClass* StaticClass<class ABloquesIndividuales>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h


#define FOREACH_ENUM_EBLOCKTYPE(op) \
	op(EBlockType::BT_Vacio) \
	op(EBlockType::BT_Acero) \
	op(EBlockType::BT_Madera) \
	op(EBlockType::BT_Concreto) \
	op(EBlockType::BT_Ladrillo) \
	op(EBlockType::BT_Burbuja) 

enum class EBlockType : uint8;
template<> struct TIsUEnumClass<EBlockType> { enum { Value = true }; };
template<> LAB_10_COMPOSITE_API UEnum* StaticEnum<EBlockType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
