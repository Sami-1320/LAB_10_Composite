// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LAB_10_Composite/BloquesIndividuales.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloquesIndividuales() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterial_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_ABloquesIndividuales();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_ABloquesIndividuales_NoRegister();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_UICompositeInterfaz_NoRegister();
LAB_10_COMPOSITE_API UEnum* Z_Construct_UEnum_LAB_10_Composite_EBlockType();
UPackage* Z_Construct_UPackage__Script_LAB_10_Composite();
// End Cross Module References

// Begin Enum EBlockType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlockType;
static UEnum* EBlockType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBlockType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBlockType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LAB_10_Composite_EBlockType, (UObject*)Z_Construct_UPackage__Script_LAB_10_Composite(), TEXT("EBlockType"));
	}
	return Z_Registration_Info_UEnum_EBlockType.OuterSingleton;
}
template<> LAB_10_COMPOSITE_API UEnum* StaticEnum<EBlockType>()
{
	return EBlockType_StaticEnum();
}
struct Z_Construct_UEnum_LAB_10_Composite_EBlockType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BT_Acero.DisplayName", "Acero" },
		{ "BT_Acero.Name", "EBlockType::BT_Acero" },
		{ "BT_Burbuja.DisplayName", "Burbuja" },
		{ "BT_Burbuja.Name", "EBlockType::BT_Burbuja" },
		{ "BT_Concreto.DisplayName", "Concreto" },
		{ "BT_Concreto.Name", "EBlockType::BT_Concreto" },
		{ "BT_Ladrillo.DisplayName", "Ladrillo" },
		{ "BT_Ladrillo.Name", "EBlockType::BT_Ladrillo" },
		{ "BT_Madera.DisplayName", "Madera" },
		{ "BT_Madera.Name", "EBlockType::BT_Madera" },
		{ "BT_Vacio.DisplayName", "Vacio" },
		{ "BT_Vacio.Name", "EBlockType::BT_Vacio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Definir el enum como enum class derivado de uint8\n" },
#endif
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Definir el enum como enum class derivado de uint8" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBlockType::BT_Vacio", (int64)EBlockType::BT_Vacio },
		{ "EBlockType::BT_Acero", (int64)EBlockType::BT_Acero },
		{ "EBlockType::BT_Madera", (int64)EBlockType::BT_Madera },
		{ "EBlockType::BT_Concreto", (int64)EBlockType::BT_Concreto },
		{ "EBlockType::BT_Ladrillo", (int64)EBlockType::BT_Ladrillo },
		{ "EBlockType::BT_Burbuja", (int64)EBlockType::BT_Burbuja },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LAB_10_Composite_EBlockType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_LAB_10_Composite,
	nullptr,
	"EBlockType",
	"EBlockType",
	Z_Construct_UEnum_LAB_10_Composite_EBlockType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_LAB_10_Composite_EBlockType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_LAB_10_Composite_EBlockType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_LAB_10_Composite_EBlockType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_LAB_10_Composite_EBlockType()
{
	if (!Z_Registration_Info_UEnum_EBlockType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlockType.InnerSingleton, Z_Construct_UEnum_LAB_10_Composite_EBlockType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBlockType.InnerSingleton;
}
// End Enum EBlockType

// Begin Class ABloquesIndividuales Function SetBlockType
struct Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics
{
	struct BloquesIndividuales_eventSetBlockType_Parms
	{
		EBlockType NewBlockType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Block" },
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewBlockType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewBlockType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::NewProp_NewBlockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::NewProp_NewBlockType = { "NewBlockType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BloquesIndividuales_eventSetBlockType_Parms, NewBlockType), Z_Construct_UEnum_LAB_10_Composite_EBlockType, METADATA_PARAMS(0, nullptr) }; // 3562037475
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::NewProp_NewBlockType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::NewProp_NewBlockType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABloquesIndividuales, nullptr, "SetBlockType", nullptr, nullptr, Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::BloquesIndividuales_eventSetBlockType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::BloquesIndividuales_eventSetBlockType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABloquesIndividuales_SetBlockType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABloquesIndividuales_SetBlockType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABloquesIndividuales::execSetBlockType)
{
	P_GET_ENUM(EBlockType,Z_Param_NewBlockType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBlockType(EBlockType(Z_Param_NewBlockType));
	P_NATIVE_END;
}
// End Class ABloquesIndividuales Function SetBlockType

// Begin Class ABloquesIndividuales
void ABloquesIndividuales::StaticRegisterNativesABloquesIndividuales()
{
	UClass* Class = ABloquesIndividuales::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetBlockType", &ABloquesIndividuales::execSetBlockType },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloquesIndividuales);
UClass* Z_Construct_UClass_ABloquesIndividuales_NoRegister()
{
	return ABloquesIndividuales::StaticClass();
}
struct Z_Construct_UClass_ABloquesIndividuales_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloquesIndividuales.h" },
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlockType_MetaData[] = {
		{ "Category", "Block Properties" },
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatAcero_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Referencias a los materiales\n" },
#endif
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Referencias a los materiales" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatMadera_MetaData[] = {
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatConcreto_MetaData[] = {
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatLadrillo_MetaData[] = {
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatBurbuja_MetaData[] = {
		{ "ModuleRelativePath", "BloquesIndividuales.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlockType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlockType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatAcero;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatMadera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatConcreto;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatLadrillo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MatBurbuja;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABloquesIndividuales_SetBlockType, "SetBlockType" }, // 3400463932
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloquesIndividuales>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_BlockType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_BlockType = { "BlockType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesIndividuales, BlockType), Z_Construct_UEnum_LAB_10_Composite_EBlockType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlockType_MetaData), NewProp_BlockType_MetaData) }; // 3562037475
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesIndividuales, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatAcero = { "MatAcero", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesIndividuales, MatAcero), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatAcero_MetaData), NewProp_MatAcero_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatMadera = { "MatMadera", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesIndividuales, MatMadera), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatMadera_MetaData), NewProp_MatMadera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatConcreto = { "MatConcreto", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesIndividuales, MatConcreto), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatConcreto_MetaData), NewProp_MatConcreto_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatLadrillo = { "MatLadrillo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesIndividuales, MatLadrillo), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatLadrillo_MetaData), NewProp_MatLadrillo_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatBurbuja = { "MatBurbuja", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesIndividuales, MatBurbuja), Z_Construct_UClass_UMaterial_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatBurbuja_MetaData), NewProp_MatBurbuja_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloquesIndividuales_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_BlockType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_BlockType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatAcero,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatMadera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatConcreto,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatLadrillo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesIndividuales_Statics::NewProp_MatBurbuja,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesIndividuales_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloquesIndividuales_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LAB_10_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesIndividuales_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloquesIndividuales_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UICompositeInterfaz_NoRegister, (int32)VTABLE_OFFSET(ABloquesIndividuales, IICompositeInterfaz), false },  // 463189644
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloquesIndividuales_Statics::ClassParams = {
	&ABloquesIndividuales::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABloquesIndividuales_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesIndividuales_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesIndividuales_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloquesIndividuales_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloquesIndividuales()
{
	if (!Z_Registration_Info_UClass_ABloquesIndividuales.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloquesIndividuales.OuterSingleton, Z_Construct_UClass_ABloquesIndividuales_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloquesIndividuales.OuterSingleton;
}
template<> LAB_10_COMPOSITE_API UClass* StaticClass<ABloquesIndividuales>()
{
	return ABloquesIndividuales::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloquesIndividuales);
ABloquesIndividuales::~ABloquesIndividuales() {}
// End Class ABloquesIndividuales

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EBlockType_StaticEnum, TEXT("EBlockType"), &Z_Registration_Info_UEnum_EBlockType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3562037475U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloquesIndividuales, ABloquesIndividuales::StaticClass, TEXT("ABloquesIndividuales"), &Z_Registration_Info_UClass_ABloquesIndividuales, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloquesIndividuales), 30489697U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_4169277441(TEXT("/Script/LAB_10_Composite"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesIndividuales_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
