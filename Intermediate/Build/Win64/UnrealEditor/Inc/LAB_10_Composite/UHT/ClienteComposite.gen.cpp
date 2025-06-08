// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LAB_10_Composite/ClienteComposite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClienteComposite() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_AClienteComposite();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_AClienteComposite_NoRegister();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_UICompositeInterfaz_NoRegister();
UPackage* Z_Construct_UPackage__Script_LAB_10_Composite();
// End Cross Module References

// Begin Class AClienteComposite
void AClienteComposite::StaticRegisterNativesAClienteComposite()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AClienteComposite);
UClass* Z_Construct_UClass_AClienteComposite_NoRegister()
{
	return AClienteComposite::StaticClass();
}
struct Z_Construct_UClass_AClienteComposite_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "ClienteComposite.h" },
		{ "ModuleRelativePath", "ClienteComposite.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentComponent_MetaData[] = {
		{ "ModuleRelativePath", "ClienteComposite.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CurrentComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AClienteComposite>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AClienteComposite_Statics::NewProp_CurrentComponent = { "CurrentComponent", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AClienteComposite, CurrentComponent), Z_Construct_UClass_UICompositeInterfaz_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentComponent_MetaData), NewProp_CurrentComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AClienteComposite_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AClienteComposite_Statics::NewProp_CurrentComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClienteComposite_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AClienteComposite_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_LAB_10_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AClienteComposite_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AClienteComposite_Statics::ClassParams = {
	&AClienteComposite::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AClienteComposite_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AClienteComposite_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AClienteComposite_Statics::Class_MetaDataParams), Z_Construct_UClass_AClienteComposite_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AClienteComposite()
{
	if (!Z_Registration_Info_UClass_AClienteComposite.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AClienteComposite.OuterSingleton, Z_Construct_UClass_AClienteComposite_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AClienteComposite.OuterSingleton;
}
template<> LAB_10_COMPOSITE_API UClass* StaticClass<AClienteComposite>()
{
	return AClienteComposite::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AClienteComposite);
AClienteComposite::~AClienteComposite() {}
// End Class AClienteComposite

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_ClienteComposite_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AClienteComposite, AClienteComposite::StaticClass, TEXT("AClienteComposite"), &Z_Registration_Info_UClass_AClienteComposite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AClienteComposite), 1977211936U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_ClienteComposite_h_133392372(TEXT("/Script/LAB_10_Composite"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_ClienteComposite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_ClienteComposite_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
