// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LAB_10_Composite/LAB_10_CompositeGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLAB_10_CompositeGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_ALAB_10_CompositeGameMode();
LAB_10_COMPOSITE_API UClass* Z_Construct_UClass_ALAB_10_CompositeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_LAB_10_Composite();
// End Cross Module References

// Begin Class ALAB_10_CompositeGameMode
void ALAB_10_CompositeGameMode::StaticRegisterNativesALAB_10_CompositeGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALAB_10_CompositeGameMode);
UClass* Z_Construct_UClass_ALAB_10_CompositeGameMode_NoRegister()
{
	return ALAB_10_CompositeGameMode::StaticClass();
}
struct Z_Construct_UClass_ALAB_10_CompositeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "LAB_10_CompositeGameMode.h" },
		{ "ModuleRelativePath", "LAB_10_CompositeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALAB_10_CompositeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ALAB_10_CompositeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_LAB_10_Composite,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALAB_10_CompositeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ALAB_10_CompositeGameMode_Statics::ClassParams = {
	&ALAB_10_CompositeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALAB_10_CompositeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALAB_10_CompositeGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ALAB_10_CompositeGameMode()
{
	if (!Z_Registration_Info_UClass_ALAB_10_CompositeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALAB_10_CompositeGameMode.OuterSingleton, Z_Construct_UClass_ALAB_10_CompositeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ALAB_10_CompositeGameMode.OuterSingleton;
}
template<> LAB_10_COMPOSITE_API UClass* StaticClass<ALAB_10_CompositeGameMode>()
{
	return ALAB_10_CompositeGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ALAB_10_CompositeGameMode);
ALAB_10_CompositeGameMode::~ALAB_10_CompositeGameMode() {}
// End Class ALAB_10_CompositeGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_LAB_10_CompositeGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ALAB_10_CompositeGameMode, ALAB_10_CompositeGameMode::StaticClass, TEXT("ALAB_10_CompositeGameMode"), &Z_Registration_Info_UClass_ALAB_10_CompositeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALAB_10_CompositeGameMode), 1123637868U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_LAB_10_CompositeGameMode_h_3820411698(TEXT("/Script/LAB_10_Composite"),
	Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_LAB_10_CompositeGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samsa_Documents_Unreal_Projects_LAB_10_Composite_Source_LAB_10_Composite_LAB_10_CompositeGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
