// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LAB_10_Composite/BloquesComposite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloquesComposite() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_ABloquesComposite();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_ABloquesComposite_NoRegister();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_UICompositeInterfaz_NoRegister();
UPackage* Z_Construct_UPackage__Script_LAB_10_Composite();
// End Cross Module References

// Begin Class ABloquesComposite
void ABloquesComposite::StaticRegisterNativesABloquesComposite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABloquesComposite);
UClass* Z_Construct_UClass_ABloquesComposite_NoRegister()
{
	return ABloquesComposite::StaticClass();
}
struct Z_Construct_UClass_ABloquesComposite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BloquesComposite.h" },
		{ "ModuleRelativePath", "BloquesComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootScene_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BloquesComposite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootScene;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABloquesComposite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABloquesComposite_Statics::NewProp_RootScene = { "RootScene", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABloquesComposite, RootScene), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootScene_MetaData), NewProp_RootScene_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABloquesComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABloquesComposite_Statics::NewProp_RootScene,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesComposite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABloquesComposite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LAB_10_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesComposite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ABloquesComposite_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UICompositeInterfaz_NoRegister, (int32)VTABLE_OFFSET(ABloquesComposite, IICompositeInterfaz), false },  // 463189644
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABloquesComposite_Statics::ClassParams = {
	&ABloquesComposite::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ABloquesComposite_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesComposite_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABloquesComposite_Statics::Class_MetaDataParams), Z_Construct_UClass_ABloquesComposite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABloquesComposite()
{
	if (!Z_Registration_Info_UClass_ABloquesComposite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABloquesComposite.OuterSingleton, Z_Construct_UClass_ABloquesComposite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABloquesComposite.OuterSingleton;
}
template<> LAB_10_COMPOSITE_API UClass* StaticClass<ABloquesComposite>()
{
	return ABloquesComposite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABloquesComposite);
ABloquesComposite::~ABloquesComposite() {}
// End Class ABloquesComposite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesComposite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABloquesComposite, ABloquesComposite::StaticClass, TEXT("ABloquesComposite"), &Z_Registration_Info_UClass_ABloquesComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABloquesComposite), 3647405713U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesComposite_h_4061064275(TEXT("/Script/LAB_10_Composite"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_BloquesComposite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
