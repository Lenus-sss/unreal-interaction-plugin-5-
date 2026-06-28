// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examples/InteractionExampleActor.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractionExampleActor() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_AInteractionExampleActor();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_AInteractionExampleActor_NoRegister();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AInteractionExampleActor *************************************************
void AInteractionExampleActor::StaticRegisterNativesAInteractionExampleActor()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AInteractionExampleActor;
UClass* AInteractionExampleActor::GetPrivateStaticClass()
{
	using TClass = AInteractionExampleActor;
	if (!Z_Registration_Info_UClass_AInteractionExampleActor.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractionExampleActor"),
			Z_Registration_Info_UClass_AInteractionExampleActor.InnerSingleton,
			StaticRegisterNativesAInteractionExampleActor,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AInteractionExampleActor.InnerSingleton;
}
UClass* Z_Construct_UClass_AInteractionExampleActor_NoRegister()
{
	return AInteractionExampleActor::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AInteractionExampleActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe5\x8f\xaf\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x8b\x96\xe5\x85\xa5\xe5\x85\xb3\xe5\x8d\xa1\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\xa4\xba\xe4\xbe\x8b Actor\xe3\x80\x82\n * \xe5\xae\x83\xe4\xbd\xbf\xe7\x94\xa8 UE \xe9\xbb\x98\xe8\xae\xa4 Cube \xe4\xbd\x9c\xe4\xb8\xba\xe5\x8f\xaf\xe8\xa2\xab\xe5\x87\x86\xe5\xbf\x83\xe5\x91\xbd\xe4\xb8\xad\xe7\x9a\x84\xe7\x89\xa9\xe4\xbd\x93\xef\xbc\x8c\xe5\xb9\xb6\xe9\xa2\x84\xe7\xbd\xae\xe2\x80\x9c\xe6\x8c\x89 E \xe4\xba\xa4\xe4\xba\x92\xe2\x80\x9d\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe5\x92\x8c\xe2\x80\x9c\xe6\x89\x93\xe5\x8d\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97\xe2\x80\x9d\xe8\xa1\x8c\xe4\xb8\xba\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "Examples/InteractionExampleActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Examples/InteractionExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe7\x9b\xb4\xe6\x8e\xa5\xe6\x8b\x96\xe5\x85\xa5\xe5\x85\xb3\xe5\x8d\xa1\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\xa4\xba\xe4\xbe\x8b Actor\xe3\x80\x82\n\xe5\xae\x83\xe4\xbd\xbf\xe7\x94\xa8 UE \xe9\xbb\x98\xe8\xae\xa4 Cube \xe4\xbd\x9c\xe4\xb8\xba\xe5\x8f\xaf\xe8\xa2\xab\xe5\x87\x86\xe5\xbf\x83\xe5\x91\xbd\xe4\xb8\xad\xe7\x9a\x84\xe7\x89\xa9\xe4\xbd\x93\xef\xbc\x8c\xe5\xb9\xb6\xe9\xa2\x84\xe7\xbd\xae\xe2\x80\x9c\xe6\x8c\x89 E \xe4\xba\xa4\xe4\xba\x92\xe2\x80\x9d\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe5\x92\x8c\xe2\x80\x9c\xe6\x89\x93\xe5\x8d\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97\xe2\x80\x9d\xe8\xa1\x8c\xe4\xb8\xba\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CubeMesh_MetaData[] = {
		{ "Category", "Interaction Example" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xa4\xba\xe4\xbe\x8b\xe7\x89\xa9\xe4\xbd\x93\xe7\x9a\x84\xe5\x8f\xaf\xe8\xa7\x81\xe7\xbd\x91\xe6\xa0\xbc\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe4\xbd\x9c\xe4\xb8\xba Actor \xe6\xa0\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe4\xb8\x8e\xe5\x87\x86\xe5\xbf\x83\xe5\xb0\x84\xe7\xba\xbf\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Examples/InteractionExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa4\xba\xe4\xbe\x8b\xe7\x89\xa9\xe4\xbd\x93\xe7\x9a\x84\xe5\x8f\xaf\xe8\xa7\x81\xe7\xbd\x91\xe6\xa0\xbc\xef\xbc\x8c\xe5\x90\x8c\xe6\x97\xb6\xe4\xbd\x9c\xe4\xb8\xba Actor \xe6\xa0\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe4\xb8\x8e\xe5\x87\x86\xe5\xbf\x83\xe5\xb0\x84\xe7\xba\xbf\xe7\xa2\xb0\xe6\x92\x9e\xe4\xbd\x93\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "Category", "Interaction Example" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xa4\xba\xe4\xbe\x8b\xe7\x89\xa9\xe4\xbd\x93\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe9\x85\x8d\xe7\xbd\xae\xef\xbc\x9b\xe5\x9c\xa8\xe8\xaf\xa6\xe6\x83\x85\xe9\x9d\xa2\xe6\x9d\xbf\xe4\xb8\xad\xe4\xb8\xba\xe5\x85\xb6\xe6\x8c\x87\xe5\xae\x9a Prompt Widget Class \xe5\x8d\xb3\xe5\x8f\xaf\xe6\x98\xbe\xe7\xa4\xba\xe6\x8f\x90\xe7\xa4\xba\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Examples/InteractionExampleActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xa4\xba\xe4\xbe\x8b\xe7\x89\xa9\xe4\xbd\x93\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe9\x85\x8d\xe7\xbd\xae\xef\xbc\x9b\xe5\x9c\xa8\xe8\xaf\xa6\xe6\x83\x85\xe9\x9d\xa2\xe6\x9d\xbf\xe4\xb8\xad\xe4\xb8\xba\xe5\x85\xb6\xe6\x8c\x87\xe5\xae\x9a Prompt Widget Class \xe5\x8d\xb3\xe5\x8f\xaf\xe6\x98\xbe\xe7\xa4\xba\xe6\x8f\x90\xe7\xa4\xba\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CubeMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionExampleActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionExampleActor_Statics::NewProp_CubeMesh = { "CubeMesh", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractionExampleActor, CubeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CubeMesh_MetaData), NewProp_CubeMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionExampleActor_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x01140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AInteractionExampleActor, InteractionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractionExampleActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionExampleActor_Statics::NewProp_CubeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionExampleActor_Statics::NewProp_InteractionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionExampleActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AInteractionExampleActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionExampleActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractionExampleActor_Statics::ClassParams = {
	&AInteractionExampleActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AInteractionExampleActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionExampleActor_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionExampleActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AInteractionExampleActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AInteractionExampleActor()
{
	if (!Z_Registration_Info_UClass_AInteractionExampleActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractionExampleActor.OuterSingleton, Z_Construct_UClass_AInteractionExampleActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AInteractionExampleActor.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionExampleActor);
AInteractionExampleActor::~AInteractionExampleActor() {}
// ********** End Class AInteractionExampleActor ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h__Script_InteractionPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AInteractionExampleActor, AInteractionExampleActor::StaticClass, TEXT("AInteractionExampleActor"), &Z_Registration_Info_UClass_AInteractionExampleActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractionExampleActor), 3838416813U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h__Script_InteractionPlugin_4167644918(TEXT("/Script/InteractionPlugin"),
	Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h__Script_InteractionPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h__Script_InteractionPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
