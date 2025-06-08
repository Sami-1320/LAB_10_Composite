// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LAB_10_Composite/ICompositeInterfaz.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeICompositeInterfaz() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_UICompositeInterfaz();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_UICompositeInterfaz_NoRegister();
UPackage* Z_Construct_UPackage__Script_LAB_10_Composite();
// End Cross Module References

// Begin Interface UICompositeInterfaz
void UICompositeInterfaz::StaticRegisterNativesUICompositeInterfaz()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UICompositeInterfaz);
UClass* Z_Construct_UClass_UICompositeInterfaz_NoRegister()
{
	return UICompositeInterfaz::StaticClass();
}
struct Z_Construct_UClass_UICompositeInterfaz_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ICompositeInterfaz.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IICompositeInterfaz>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UICompositeInterfaz_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_LAB_10_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UICompositeInterfaz_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UICompositeInterfaz_Statics::ClassParams = {
	&UICompositeInterfaz::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UICompositeInterfaz_Statics::Class_MetaDataParams), Z_Construct_UClass_UICompositeInterfaz_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UICompositeInterfaz()
{
	if (!Z_Registration_Info_UClass_UICompositeInterfaz.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UICompositeInterfaz.OuterSingleton, Z_Construct_UClass_UICompositeInterfaz_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UICompositeInterfaz.OuterSingleton;
}
template<> LAB_10_COMPOSITE_API UClass* StaticClass<UICompositeInterfaz>()
{
	return UICompositeInterfaz::StaticClass();
}
UICompositeInterfaz::UICompositeInterfaz(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UICompositeInterfaz);
UICompositeInterfaz::~UICompositeInterfaz() {}
// End Interface UICompositeInterfaz

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_ICompositeInterfaz_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UICompositeInterfaz, UICompositeInterfaz::StaticClass, TEXT("UICompositeInterfaz"), &Z_Registration_Info_UClass_UICompositeInterfaz, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UICompositeInterfaz), 463189644U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_ICompositeInterfaz_h_3110164583(TEXT("/Script/LAB_10_Composite"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_ICompositeInterfaz_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_ICompositeInterfaz_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
