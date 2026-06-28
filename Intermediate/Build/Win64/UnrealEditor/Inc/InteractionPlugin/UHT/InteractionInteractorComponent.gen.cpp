// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionInteractorComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractionInteractorComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionInteractorComponent();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionInteractorComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InteractionPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInteractionInteractorComponent Function GetFocusedInteraction ***********
struct Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics
{
	struct InteractionInteractorComponent_eventGetFocusedInteraction_Parms
	{
		UInteractionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x94\xe5\x9b\x9e\xe5\xbd\x93\xe5\x89\x8d\xe8\xa2\xab\xe6\x9c\xac\xe5\x9c\xb0\xe5\x87\x86\xe5\xbf\x83\xe9\x94\x81\xe5\xae\x9a\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x9b\xe6\x9c\xaa\xe9\x94\x81\xe5\xae\x9a\xe6\x97\xb6\xe8\xbf\x94\xe5\x9b\x9e nullptr\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e\xe5\xbd\x93\xe5\x89\x8d\xe8\xa2\xab\xe6\x9c\xac\xe5\x9c\xb0\xe5\x87\x86\xe5\xbf\x83\xe9\x94\x81\xe5\xae\x9a\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x9b\xe6\x9c\xaa\xe9\x94\x81\xe5\xae\x9a\xe6\x97\xb6\xe8\xbf\x94\xe5\x9b\x9e nullptr\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionInteractorComponent_eventGetFocusedInteraction_Parms, ReturnValue), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionInteractorComponent, nullptr, "GetFocusedInteraction", Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::InteractionInteractorComponent_eventGetFocusedInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::InteractionInteractorComponent_eventGetFocusedInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionInteractorComponent::execGetFocusedInteraction)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInteractionComponent**)Z_Param__Result=P_THIS->GetFocusedInteraction();
	P_NATIVE_END;
}
// ********** End Class UInteractionInteractorComponent Function GetFocusedInteraction *************

// ********** Begin Class UInteractionInteractorComponent Function TryInteract *********************
struct Z_Construct_UFunction_UInteractionInteractorComponent_TryInteract_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xaf\xb9\xe5\xbd\x93\xe5\x89\x8d\xe7\x84\xa6\xe7\x82\xb9\xe7\x89\xa9\xe5\x93\x81\xe6\x89\xa7\xe8\xa1\x8c\xe4\xba\xa4\xe4\xba\x92\xef\xbc\x8c\xe9\x80\x82\xe5\x90\x88\xe4\xbb\x8e Enhanced Input \xe7\xad\x89\xe5\xa4\x96\xe9\x83\xa8\xe8\xbe\x93\xe5\x85\xa5\xe5\x9b\x9e\xe8\xb0\x83\xe8\xb0\x83\xe7\x94\xa8\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xaf\xb9\xe5\xbd\x93\xe5\x89\x8d\xe7\x84\xa6\xe7\x82\xb9\xe7\x89\xa9\xe5\x93\x81\xe6\x89\xa7\xe8\xa1\x8c\xe4\xba\xa4\xe4\xba\x92\xef\xbc\x8c\xe9\x80\x82\xe5\x90\x88\xe4\xbb\x8e Enhanced Input \xe7\xad\x89\xe5\xa4\x96\xe9\x83\xa8\xe8\xbe\x93\xe5\x85\xa5\xe5\x9b\x9e\xe8\xb0\x83\xe8\xb0\x83\xe7\x94\xa8\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionInteractorComponent_TryInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionInteractorComponent, nullptr, "TryInteract", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionInteractorComponent_TryInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionInteractorComponent_TryInteract_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UInteractionInteractorComponent_TryInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionInteractorComponent_TryInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionInteractorComponent::execTryInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TryInteract();
	P_NATIVE_END;
}
// ********** End Class UInteractionInteractorComponent Function TryInteract ***********************

// ********** Begin Class UInteractionInteractorComponent ******************************************
void UInteractionInteractorComponent::StaticRegisterNativesUInteractionInteractorComponent()
{
	UClass* Class = UInteractionInteractorComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFocusedInteraction", &UInteractionInteractorComponent::execGetFocusedInteraction },
		{ "TryInteract", &UInteractionInteractorComponent::execTryInteract },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractionInteractorComponent;
UClass* UInteractionInteractorComponent::GetPrivateStaticClass()
{
	using TClass = UInteractionInteractorComponent;
	if (!Z_Registration_Info_UClass_UInteractionInteractorComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractionInteractorComponent"),
			Z_Registration_Info_UClass_UInteractionInteractorComponent.InnerSingleton,
			StaticRegisterNativesUInteractionInteractorComponent,
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
	return Z_Registration_Info_UClass_UInteractionInteractorComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractionInteractorComponent_NoRegister()
{
	return UInteractionInteractorComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractionInteractorComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x8c\x82\xe8\xbd\xbd\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe6\x8e\xa7\xe5\x88\xb6 Pawn \xe6\x88\x96 Character \xe7\x9a\x84\xe7\x8e\xa9\xe5\xae\xb6\xe7\xab\xaf\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\n * \xe5\xae\x83\xe4\xbb\x8e\xe7\x9b\xb8\xe6\x9c\xba\xe4\xb8\xad\xe5\xbf\x83\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe7\x89\xa9\xe5\x93\x81\xe3\x80\x81\xe9\xa9\xb1\xe5\x8a\xa8\xe6\x8f\x90\xe7\xa4\xba\xe6\x98\xbe\xe9\x9a\x90\xef\xbc\x8c\xe5\xb9\xb6\xe5\x8f\xaf\xe7\x9b\xb4\xe6\x8e\xa5\xe6\xa3\x80\xe6\xb5\x8b\xe5\x8e\x9f\xe5\xa7\x8b E \xe9\x94\xae\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "InteractionInteractorComponent.h" },
		{ "ModuleRelativePath", "Public/InteractionInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x82\xe8\xbd\xbd\xe5\x88\xb0\xe6\x9c\xac\xe5\x9c\xb0\xe6\x8e\xa7\xe5\x88\xb6 Pawn \xe6\x88\x96 Character \xe7\x9a\x84\xe7\x8e\xa9\xe5\xae\xb6\xe7\xab\xaf\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\n\xe5\xae\x83\xe4\xbb\x8e\xe7\x9b\xb8\xe6\x9c\xba\xe4\xb8\xad\xe5\xbf\x83\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe7\x89\xa9\xe5\x93\x81\xe3\x80\x81\xe9\xa9\xb1\xe5\x8a\xa8\xe6\x8f\x90\xe7\xa4\xba\xe6\x98\xbe\xe9\x9a\x90\xef\xbc\x8c\xe5\xb9\xb6\xe5\x8f\xaf\xe7\x9b\xb4\xe6\x8e\xa5\xe6\xa3\x80\xe6\xb5\x8b\xe5\x8e\x9f\xe5\xa7\x8b E \xe9\x94\xae\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionDistance_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbb\x8e\xe7\x9b\xb8\xe6\x9c\xba\xe4\xb8\xad\xe5\xbf\x83\xe5\x90\x91\xe5\x89\x8d\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe8\xb7\x9d\xe7\xa6\xbb\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe4\xb8\xba Unreal Units\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbb\x8e\xe7\x9b\xb8\xe6\x9c\xba\xe4\xb8\xad\xe5\xbf\x83\xe5\x90\x91\xe5\x89\x8d\xe6\xa3\x80\xe6\xb5\x8b\xe7\x9a\x84\xe6\x9c\x80\xe5\xa4\xa7\xe8\xb7\x9d\xe7\xa6\xbb\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe4\xb8\xba Unreal Units\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionTraceRadius_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x87\x86\xe5\xbf\x83\xe6\x89\xab\xe6\x8f\x8f\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe4\xb8\xba Unreal Units\xef\xbc\x9b\xe8\xae\xbe\xe4\xb8\xba 0 \xe6\x97\xb6\xe9\x80\x80\xe5\x9b\x9e\xe7\xb2\xbe\xe7\xa1\xae\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x87\x86\xe5\xbf\x83\xe6\x89\xab\xe6\x8f\x8f\xe5\x8d\x8a\xe5\xbe\x84\xef\xbc\x8c\xe5\x8d\x95\xe4\xbd\x8d\xe4\xb8\xba Unreal Units\xef\xbc\x9b\xe8\xae\xbe\xe4\xb8\xba 0 \xe6\x97\xb6\xe9\x80\x80\xe5\x9b\x9e\xe7\xb2\xbe\xe7\xa1\xae\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraceChannel_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe9\x80\x9a\xe9\x81\x93\xef\xbc\x9b\xe9\xbb\x98\xe8\xae\xa4\xe8\xa6\x81\xe6\xb1\x82\xe7\x89\xa9\xe5\x93\x81\xe9\x98\xbb\xe6\x8c\xa1 Visibility\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xb0\x84\xe7\xba\xbf\xe6\xa3\x80\xe6\xb5\x8b\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84\xe7\xa2\xb0\xe6\x92\x9e\xe9\x80\x9a\xe9\x81\x93\xef\xbc\x9b\xe9\xbb\x98\xe8\xae\xa4\xe8\xa6\x81\xe6\xb1\x82\xe7\x89\xa9\xe5\x93\x81\xe9\x98\xbb\xe6\x8c\xa1 Visibility\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRawEKey_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbd\xbf\xe7\x94\xa8\xe5\x85\xb6\xe4\xbb\x96\xe8\xbe\x93\xe5\x85\xa5\xe7\xb3\xbb\xe7\xbb\x9f\xe6\x97\xb6\xe8\xae\xbe\xe4\xb8\xba false\xef\xbc\x8c\xe5\xb9\xb6\xe7\x94\xb1\xe9\xa1\xb9\xe7\x9b\xae\xe8\xbe\x93\xe5\x85\xa5\xe5\x9b\x9e\xe8\xb0\x83\xe8\xb0\x83\xe7\x94\xa8 TryInteract\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbd\xbf\xe7\x94\xa8\xe5\x85\xb6\xe4\xbb\x96\xe8\xbe\x93\xe5\x85\xa5\xe7\xb3\xbb\xe7\xbb\x9f\xe6\x97\xb6\xe8\xae\xbe\xe4\xb8\xba false\xef\xbc\x8c\xe5\xb9\xb6\xe7\x94\xb1\xe9\xa1\xb9\xe7\x9b\xae\xe8\xbe\x93\xe5\x85\xa5\xe5\x9b\x9e\xe8\xb0\x83\xe8\xb0\x83\xe7\x94\xa8 TryInteract\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDebugTrace_MetaData[] = {
		{ "Category", "Interaction|Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe7\xbb\x98\xe5\x88\xb6\xe6\x9c\xac\xe5\xb8\xa7\xe5\x87\x86\xe5\xbf\x83\xe5\xb0\x84\xe7\xba\xbf\xef\xbc\x8c\xe7\xbb\xbf\xe8\x89\xb2\xe4\xbb\xa3\xe8\xa1\xa8\xe9\x94\x81\xe5\xae\x9a\xe4\xba\xa4\xe4\xba\x92\xe7\x89\xa9\xef\xbc\x8c\xe7\xba\xa2\xe8\x89\xb2\xe4\xbb\xa3\xe8\xa1\xa8\xe6\x9c\xaa\xe9\x94\x81\xe5\xae\x9a\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionInteractorComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe7\xbb\x98\xe5\x88\xb6\xe6\x9c\xac\xe5\xb8\xa7\xe5\x87\x86\xe5\xbf\x83\xe5\xb0\x84\xe7\xba\xbf\xef\xbc\x8c\xe7\xbb\xbf\xe8\x89\xb2\xe4\xbb\xa3\xe8\xa1\xa8\xe9\x94\x81\xe5\xae\x9a\xe4\xba\xa4\xe4\xba\x92\xe7\x89\xa9\xef\xbc\x8c\xe7\xba\xa2\xe8\x89\xb2\xe4\xbb\xa3\xe8\xa1\xa8\xe6\x9c\xaa\xe9\x94\x81\xe5\xae\x9a\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionTraceRadius;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bUseRawEKey_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRawEKey;
	static void NewProp_bDebugTrace_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugTrace;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionInteractorComponent_GetFocusedInteraction, "GetFocusedInteraction" }, // 68598070
		{ &Z_Construct_UFunction_UInteractionInteractorComponent_TryInteract, "TryInteract" }, // 2073514589
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionInteractorComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_InteractionDistance = { "InteractionDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionInteractorComponent, InteractionDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionDistance_MetaData), NewProp_InteractionDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_InteractionTraceRadius = { "InteractionTraceRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionInteractorComponent, InteractionTraceRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionTraceRadius_MetaData), NewProp_InteractionTraceRadius_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionInteractorComponent, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraceChannel_MetaData), NewProp_TraceChannel_MetaData) }; // 756624936
void Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_bUseRawEKey_SetBit(void* Obj)
{
	((UInteractionInteractorComponent*)Obj)->bUseRawEKey = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_bUseRawEKey = { "bUseRawEKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractionInteractorComponent), &Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_bUseRawEKey_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRawEKey_MetaData), NewProp_bUseRawEKey_MetaData) };
void Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_bDebugTrace_SetBit(void* Obj)
{
	((UInteractionInteractorComponent*)Obj)->bDebugTrace = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_bDebugTrace = { "bDebugTrace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractionInteractorComponent), &Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_bDebugTrace_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDebugTrace_MetaData), NewProp_bDebugTrace_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionInteractorComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_InteractionDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_InteractionTraceRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_bUseRawEKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionInteractorComponent_Statics::NewProp_bDebugTrace,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInteractorComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionInteractorComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInteractorComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionInteractorComponent_Statics::ClassParams = {
	&UInteractionInteractorComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionInteractorComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInteractorComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionInteractorComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionInteractorComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionInteractorComponent()
{
	if (!Z_Registration_Info_UClass_UInteractionInteractorComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionInteractorComponent.OuterSingleton, Z_Construct_UClass_UInteractionInteractorComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionInteractorComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionInteractorComponent);
UInteractionInteractorComponent::~UInteractionInteractorComponent() {}
// ********** End Class UInteractionInteractorComponent ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionInteractorComponent_h__Script_InteractionPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionInteractorComponent, UInteractionInteractorComponent::StaticClass, TEXT("UInteractionInteractorComponent"), &Z_Registration_Info_UClass_UInteractionInteractorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionInteractorComponent), 1138024177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionInteractorComponent_h__Script_InteractionPlugin_1933441562(TEXT("/Script/InteractionPlugin"),
	Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionInteractorComponent_h__Script_InteractionPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionInteractorComponent_h__Script_InteractionPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
