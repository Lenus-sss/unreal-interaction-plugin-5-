// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionComponent();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionPromptWidgetBase_NoRegister();
INTERACTIONPLUGIN_API UEnum* Z_Construct_UEnum_InteractionPlugin_EInteractionAction();
INTERACTIONPLUGIN_API UFunction* Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetSpace();
UPackage* Z_Construct_UPackage__Script_InteractionPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FInteractionExecutedSignature *****************************************
struct Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics
{
	struct _Script_InteractionPlugin_eventInteractionExecutedSignature_Parms
	{
		UInteractionComponent* InteractionComponent;
		AActor* Interactor;
		EInteractionAction Action;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x88\x90\xe5\x8a\x9f\xe6\x89\xa7\xe8\xa1\x8c\xe4\xba\xa4\xe4\xba\x92\xe5\x90\x8e\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x8c\xe6\x90\xba\xe5\xb8\xa6\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x81\xe6\x89\xa7\xe8\xa1\x8c\xe8\x80\x85\xe5\x92\x8c\xe5\xae\x9e\xe9\x99\x85\xe4\xba\xa4\xe4\xba\x92\xe7\xb1\xbb\xe5\x9e\x8b\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x90\xe5\x8a\x9f\xe6\x89\xa7\xe8\xa1\x8c\xe4\xba\xa4\xe4\xba\x92\xe5\x90\x8e\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x8c\xe6\x90\xba\xe5\xb8\xa6\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x81\xe6\x89\xa7\xe8\xa1\x8c\xe8\x80\x85\xe5\x92\x8c\xe5\xae\x9e\xe9\x99\x85\xe4\xba\xa4\xe4\xba\x92\xe7\xb1\xbb\xe5\x9e\x8b\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionPlugin_eventInteractionExecutedSignature_Parms, InteractionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionPlugin_eventInteractionExecutedSignature_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_InteractionPlugin_eventInteractionExecutedSignature_Parms, Action), Z_Construct_UEnum_InteractionPlugin_EInteractionAction, METADATA_PARAMS(0, nullptr) }; // 292216677
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::NewProp_InteractionComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::NewProp_Interactor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::NewProp_Action_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::NewProp_Action,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_InteractionPlugin, nullptr, "InteractionExecutedSignature__DelegateSignature", Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::_Script_InteractionPlugin_eventInteractionExecutedSignature_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::_Script_InteractionPlugin_eventInteractionExecutedSignature_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FInteractionExecutedSignature_DelegateWrapper(const FMulticastScriptDelegate& InteractionExecutedSignature, UInteractionComponent* InteractionComponent, AActor* Interactor, EInteractionAction Action)
{
	struct _Script_InteractionPlugin_eventInteractionExecutedSignature_Parms
	{
		UInteractionComponent* InteractionComponent;
		AActor* Interactor;
		EInteractionAction Action;
	};
	_Script_InteractionPlugin_eventInteractionExecutedSignature_Parms Parms;
	Parms.InteractionComponent=InteractionComponent;
	Parms.Interactor=Interactor;
	Parms.Action=Action;
	InteractionExecutedSignature.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FInteractionExecutedSignature *******************************************

// ********** Begin Class UInteractionComponent Function CanInteract *******************************
struct Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics
{
	struct InteractionComponent_eventCanInteract_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x88\xa4\xe6\x96\xad\xe7\xbb\x84\xe4\xbb\xb6\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x81\xe8\xae\xb8\xe8\xa2\xab\xe9\x94\x81\xe5\xae\x9a\xe5\x92\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x88\xa4\xe6\x96\xad\xe7\xbb\x84\xe4\xbb\xb6\xe5\xbd\x93\xe5\x89\x8d\xe6\x98\xaf\xe5\x90\xa6\xe5\x85\x81\xe8\xae\xb8\xe8\xa2\xab\xe9\x94\x81\xe5\xae\x9a\xe5\x92\x8c\xe6\x89\xa7\xe8\xa1\x8c\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InteractionComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InteractionComponent_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "CanInteract", Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::InteractionComponent_eventCanInteract_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::InteractionComponent_eventCanInteract_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionComponent_CanInteract()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionComponent::execCanInteract)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanInteract();
	P_NATIVE_END;
}
// ********** End Class UInteractionComponent Function CanInteract *********************************

// ********** Begin Class UInteractionComponent Function ExecuteInteraction ************************
struct Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics
{
	struct InteractionComponent_eventExecuteInteraction_Parms
	{
		AActor* Interactor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x89\xa7\xe8\xa1\x8c\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x8c\xe5\xb9\xb6\xe5\x9c\xa8\xe6\x88\x90\xe5\x8a\x9f\xe5\x90\x8e\xe5\xb9\xbf\xe6\x92\xad\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x89\xa7\xe8\xa1\x8c\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\xb1\xbb\xe5\x9e\x8b\xef\xbc\x8c\xe5\xb9\xb6\xe5\x9c\xa8\xe6\x88\x90\xe5\x8a\x9f\xe5\x90\x8e\xe5\xb9\xbf\xe6\x92\xad\xe4\xba\x8b\xe4\xbb\xb6\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interactor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::NewProp_Interactor = { "Interactor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionComponent_eventExecuteInteraction_Parms, Interactor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::NewProp_Interactor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "ExecuteInteraction", Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::InteractionComponent_eventExecuteInteraction_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::InteractionComponent_eventExecuteInteraction_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionComponent::execExecuteInteraction)
{
	P_GET_OBJECT(AActor,Z_Param_Interactor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteInteraction(Z_Param_Interactor);
	P_NATIVE_END;
}
// ********** End Class UInteractionComponent Function ExecuteInteraction **************************

// ********** Begin Class UInteractionComponent ****************************************************
void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
{
	UClass* Class = UInteractionComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanInteract", &UInteractionComponent::execCanInteract },
		{ "ExecuteInteraction", &UInteractionComponent::execExecuteInteraction },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractionComponent;
UClass* UInteractionComponent::GetPrivateStaticClass()
{
	using TClass = UInteractionComponent;
	if (!Z_Registration_Info_UClass_UInteractionComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractionComponent"),
			Z_Registration_Info_UClass_UInteractionComponent.InnerSingleton,
			StaticRegisterNativesUInteractionComponent,
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
	return Z_Registration_Info_UClass_UInteractionComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
{
	return UInteractionComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractionComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe6\x8c\x82\xe8\xbd\xbd\xe5\x88\xb0\xe5\x8f\xaf\xe4\xba\xa4\xe4\xba\x92\xe7\x89\xa9\xe5\x93\x81 Actor \xe7\x9a\x84\xe6\xa0\xb8\xe5\xbf\x83\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\n * \xe5\xae\x83\xe8\xb4\x9f\xe8\xb4\xa3\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x88\x9b\xe5\xbb\xba\xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x8a\xe6\x96\xb9\xe7\x9a\x84 WidgetComponent\xef\xbc\x8c\xe5\xb9\xb6\xe5\x9c\xa8\xe7\x8e\xa9\xe5\xae\xb6\xe7\xa1\xae\xe8\xae\xa4\xe4\xba\xa4\xe4\xba\x92\xe6\x97\xb6\xe6\x89\xa7\xe8\xa1\x8c\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x8e\x9f\xe7\x94\x9f\xe8\xa1\x8c\xe4\xb8\xba\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "InteractionComponent.h" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x82\xe8\xbd\xbd\xe5\x88\xb0\xe5\x8f\xaf\xe4\xba\xa4\xe4\xba\x92\xe7\x89\xa9\xe5\x93\x81 Actor \xe7\x9a\x84\xe6\xa0\xb8\xe5\xbf\x83\xe7\xbb\x84\xe4\xbb\xb6\xe3\x80\x82\n\xe5\xae\x83\xe8\xb4\x9f\xe8\xb4\xa3\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x88\x9b\xe5\xbb\xba\xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x8a\xe6\x96\xb9\xe7\x9a\x84 WidgetComponent\xef\xbc\x8c\xe5\xb9\xb6\xe5\x9c\xa8\xe7\x8e\xa9\xe5\xae\xb6\xe7\xa1\xae\xe8\xae\xa4\xe4\xba\xa4\xe4\xba\x92\xe6\x97\xb6\xe6\x89\xa7\xe8\xa1\x8c\xe9\x85\x8d\xe7\xbd\xae\xe7\x9a\x84\xe5\x8e\x9f\xe7\x94\x9f\xe8\xa1\x8c\xe4\xb8\xba\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptText_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x8e\xa9\xe5\xae\xb6\xe5\x87\x86\xe5\xbf\x83\xe9\x94\x81\xe5\xae\x9a\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6\xe4\xbc\xa0\xe7\xbb\x99\xe6\x8f\x90\xe7\xa4\xba Widget Blueprint \xe7\x9a\x84\xe6\x96\x87\xe6\x9c\xac\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe5\x87\x86\xe5\xbf\x83\xe9\x94\x81\xe5\xae\x9a\xe6\xad\xa4\xe7\x89\xa9\xe5\x93\x81\xe6\x97\xb6\xe4\xbc\xa0\xe7\xbb\x99\xe6\x8f\x90\xe7\xa4\xba Widget Blueprint \xe7\x9a\x84\xe6\x96\x87\xe6\x9c\xac\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionAction_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x8e\xa9\xe5\xae\xb6\xe6\x8c\x89 E \xe5\x90\x8e\xe8\xa6\x81\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe5\x86\x85\xe7\xbd\xae\xe7\xa4\xba\xe4\xbe\x8b\xe8\xa1\x8c\xe4\xb8\xba\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x8e\xa9\xe5\xae\xb6\xe6\x8c\x89 E \xe5\x90\x8e\xe8\xa6\x81\xe6\x89\xa7\xe8\xa1\x8c\xe7\x9a\x84\xe5\x86\x85\xe7\xbd\xae\xe7\xa4\xba\xe4\xbe\x8b\xe8\xa1\x8c\xe4\xb8\xba\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanInteract_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x85\xb3\xe9\x97\xad\xe5\x90\x8e\xe8\xaf\xa5\xe7\x89\xa9\xe5\x93\x81\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xa2\xab\xe7\x8e\xa9\xe5\xae\xb6\xe7\xab\xaf\xe7\xbb\x84\xe4\xbb\xb6\xe9\x94\x81\xe5\xae\x9a\xe6\x88\x96\xe6\x89\xa7\xe8\xa1\x8c\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x85\xb3\xe9\x97\xad\xe5\x90\x8e\xe8\xaf\xa5\xe7\x89\xa9\xe5\x93\x81\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xa2\xab\xe7\x8e\xa9\xe5\xae\xb6\xe7\xab\xaf\xe7\xbb\x84\xe4\xbb\xb6\xe9\x94\x81\xe5\xae\x9a\xe6\x88\x96\xe6\x89\xa7\xe8\xa1\x8c\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInteractOnlyOnce_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe9\xa6\x96\xe6\xac\xa1\xe6\x88\x90\xe5\x8a\x9f\xe4\xba\xa4\xe4\xba\x92\xe4\xbc\x9a\xe6\xb0\xb8\xe4\xb9\x85\xe7\xa6\x81\xe7\x94\xa8\xe5\xbd\x93\xe5\x89\x8d\xe7\xbb\x84\xe4\xbb\xb6\xe5\xae\x9e\xe4\xbe\x8b\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe9\xa6\x96\xe6\xac\xa1\xe6\x88\x90\xe5\x8a\x9f\xe4\xba\xa4\xe4\xba\x92\xe4\xbc\x9a\xe6\xb0\xb8\xe4\xb9\x85\xe7\xa6\x81\xe7\x94\xa8\xe5\xbd\x93\xe5\x89\x8d\xe7\xbb\x84\xe4\xbb\xb6\xe5\xae\x9e\xe4\xbe\x8b\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidgetClass_MetaData[] = {
		{ "Category", "Interaction|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x8a\xe6\x96\xb9\xe6\x8f\x90\xe7\xa4\xba\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84 Widget Blueprint\xef\xbc\x8c\xe5\xbf\x85\xe9\xa1\xbb\xe7\xbb\xa7\xe6\x89\xbf UInteractionPromptWidgetBase\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x8a\xe6\x96\xb9\xe6\x8f\x90\xe7\xa4\xba\xe4\xbd\xbf\xe7\x94\xa8\xe7\x9a\x84 Widget Blueprint\xef\xbc\x8c\xe5\xbf\x85\xe9\xa1\xbb\xe7\xbb\xa7\xe6\x89\xbf UInteractionPromptWidgetBase\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptRelativeLocation_MetaData[] = {
		{ "Category", "Interaction|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x8f\x90\xe7\xa4\xba\xe7\x9b\xb8\xe5\xaf\xb9\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85\xe6\xa0\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe9\x80\x9a\xe5\xb8\xb8\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba\xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x8a\xe6\x96\xb9\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8f\x90\xe7\xa4\xba\xe7\x9b\xb8\xe5\xaf\xb9\xe6\x8b\xa5\xe6\x9c\x89\xe8\x80\x85\xe6\xa0\xb9\xe7\xbb\x84\xe4\xbb\xb6\xe7\x9a\x84\xe4\xbd\x8d\xe7\xbd\xae\xef\xbc\x8c\xe9\x80\x9a\xe5\xb8\xb8\xe8\xae\xbe\xe7\xbd\xae\xe4\xb8\xba\xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x8a\xe6\x96\xb9\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidgetSpace_MetaData[] = {
		{ "Category", "Interaction|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x8c\x87\xe5\xae\x9a\xe6\x8f\x90\xe7\xa4\xba Widget \xe4\xbd\xbf\xe7\x94\xa8 World \xe8\xbf\x98\xe6\x98\xaf Screen \xe7\xa9\xba\xe9\x97\xb4\xef\xbc\x9bScreen \xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xa2\xab\xe9\x97\xa8\xe6\x9d\xbf\xe6\xb7\xb1\xe5\xba\xa6\xe9\x81\xae\xe6\x8c\xa1\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x8c\x87\xe5\xae\x9a\xe6\x8f\x90\xe7\xa4\xba Widget \xe4\xbd\xbf\xe7\x94\xa8 World \xe8\xbf\x98\xe6\x98\xaf Screen \xe7\xa9\xba\xe9\x97\xb4\xef\xbc\x9bScreen \xe9\xbb\x98\xe8\xae\xa4\xe4\xb8\x8d\xe4\xbc\x9a\xe8\xa2\xab\xe9\x97\xa8\xe6\x9d\xbf\xe6\xb7\xb1\xe5\xba\xa6\xe9\x81\xae\xe6\x8c\xa1\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptDrawSize_MetaData[] = {
		{ "Category", "Interaction|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbd\x93\xe4\xb8\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9c\x9f\xe6\x9c\x9b\xe5\xb0\xba\xe5\xaf\xb8\xe6\x97\xb6\xef\xbc\x8cWidgetComponent \xe7\x9a\x84\xe6\xb8\xb2\xe6\x9f\x93\xe5\xb0\xba\xe5\xaf\xb8\xef\xbc\x9b\xe5\xb1\x8f\xe5\xb9\x95\xe6\x8f\x90\xe7\xa4\xba\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x87\xe5\xa4\xa7\xe7\x9a\x84\xe7\x94\xbb\xe5\xb8\x83\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbd\x93\xe4\xb8\x8d\xe4\xbd\xbf\xe7\x94\xa8\xe6\x9c\x9f\xe6\x9c\x9b\xe5\xb0\xba\xe5\xaf\xb8\xe6\x97\xb6\xef\xbc\x8cWidgetComponent \xe7\x9a\x84\xe6\xb8\xb2\xe6\x9f\x93\xe5\xb0\xba\xe5\xaf\xb8\xef\xbc\x9b\xe5\xb1\x8f\xe5\xb9\x95\xe6\x8f\x90\xe7\xa4\xba\xe4\xb8\x8d\xe9\x9c\x80\xe8\xa6\x81\xe8\xbf\x87\xe5\xa4\xa7\xe7\x9a\x84\xe7\x94\xbb\xe5\xb8\x83\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDrawAtDesiredSize_MetaData[] = {
		{ "Category", "Interaction|Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe6\x8c\x89 Widget \xe7\x9a\x84\xe6\x9c\x9f\xe6\x9c\x9b\xe5\xb0\xba\xe5\xaf\xb8\xe6\xb8\xb2\xe6\x9f\x93\xef\xbc\x8c\xe8\x80\x8c\xe9\x9d\x9e PromptDrawSize\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\xbc\x80\xe5\x90\xaf\xe5\x90\x8e\xe6\x8c\x89 Widget \xe7\x9a\x84\xe6\x9c\x9f\xe6\x9c\x9b\xe5\xb0\xba\xe5\xaf\xb8\xe6\xb8\xb2\xe6\x9f\x93\xef\xbc\x8c\xe8\x80\x8c\xe9\x9d\x9e PromptDrawSize\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWorldScale_MetaData[] = {
		{ "Category", "Interaction|Prompt" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** World \xe7\xa9\xba\xe9\x97\xb4\xe6\x8f\x90\xe7\xa4\xba\xe7\x9a\x84\xe6\x95\xb4\xe4\xbd\x93\xe7\xbc\xa9\xe6\x94\xbe\xef\xbc\x9b""0.1 \xe5\xaf\xb9\xe5\xba\x94 384\xc3\x97""128 px \xe7\x94\xbb\xe5\xb8\x83\xe7\xba\xa6 38.4\xc3\x97""12.8 cm\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "World \xe7\xa9\xba\xe9\x97\xb4\xe6\x8f\x90\xe7\xa4\xba\xe7\x9a\x84\xe6\x95\xb4\xe4\xbd\x93\xe7\xbc\xa9\xe6\x94\xbe\xef\xbc\x9b""0.1 \xe5\xaf\xb9\xe5\xba\x94 384\xc3\x97""128 px \xe7\x94\xbb\xe5\xb8\x83\xe7\xba\xa6 38.4\xc3\x97""12.8 cm\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInteractionExecuted_MetaData[] = {
		{ "Category", "Interaction" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe6\x88\x90\xe5\x8a\x9f\xe4\xba\xa4\xe4\xba\x92\xe5\x90\x8e\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x8c\xe9\xa1\xb9\xe7\x9b\xae\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84\xe5\x90\x8e\xe7\xbb\xad\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe6\x88\x90\xe5\x8a\x9f\xe4\xba\xa4\xe4\xba\x92\xe5\x90\x8e\xe5\xb9\xbf\xe6\x92\xad\xef\xbc\x8c\xe9\xa1\xb9\xe7\x9b\xae\xe5\x8f\xaf\xe7\xbb\x91\xe5\xae\x9a\xe8\x87\xaa\xe5\xb7\xb1\xe7\x9a\x84\xe5\x90\x8e\xe7\xbb\xad\xe9\x80\xbb\xe8\xbe\x91\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptWidgetComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x9b\xe4\xb8\x8d\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe8\xb5\x84\xe6\xba\x90\xef\xbc\x8c\xe4\xb9\x9f\xe4\xb8\x8d\xe5\x8f\x82\xe4\xb8\x8e\xe5\xa4\x8d\xe5\x88\xb6\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x90\xe8\xa1\x8c\xe6\x97\xb6\xe5\x88\x9b\xe5\xbb\xba\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x9b\xe4\xb8\x8d\xe4\xbf\x9d\xe5\xad\x98\xe5\x88\xb0\xe8\xb5\x84\xe6\xba\x90\xef\xbc\x8c\xe4\xb9\x9f\xe4\xb8\x8d\xe5\x8f\x82\xe4\xb8\x8e\xe5\xa4\x8d\xe5\x88\xb6\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_PromptText;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InteractionAction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InteractionAction;
	static void NewProp_bCanInteract_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanInteract;
	static void NewProp_bInteractOnlyOnce_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInteractOnlyOnce;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PromptWidgetClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PromptRelativeLocation;
	static const UECodeGen_Private::FBytePropertyParams NewProp_PromptWidgetSpace_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_PromptWidgetSpace;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PromptDrawSize;
	static void NewProp_bDrawAtDesiredSize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawAtDesiredSize;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PromptWorldScale;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInteractionExecuted;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptWidgetComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_CanInteract, "CanInteract" }, // 1124898898
		{ &Z_Construct_UFunction_UInteractionComponent_ExecuteInteraction, "ExecuteInteraction" }, // 353308226
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptText = { "PromptText", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, PromptText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptText_MetaData), NewProp_PromptText_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionAction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionAction = { "InteractionAction", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, InteractionAction), Z_Construct_UEnum_InteractionPlugin_EInteractionAction, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionAction_MetaData), NewProp_InteractionAction_MetaData) }; // 292216677
void Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bCanInteract_SetBit(void* Obj)
{
	((UInteractionComponent*)Obj)->bCanInteract = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bCanInteract = { "bCanInteract", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractionComponent), &Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bCanInteract_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanInteract_MetaData), NewProp_bCanInteract_MetaData) };
void Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bInteractOnlyOnce_SetBit(void* Obj)
{
	((UInteractionComponent*)Obj)->bInteractOnlyOnce = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bInteractOnlyOnce = { "bInteractOnlyOnce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractionComponent), &Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bInteractOnlyOnce_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInteractOnlyOnce_MetaData), NewProp_bInteractOnlyOnce_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWidgetClass = { "PromptWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, PromptWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInteractionPromptWidgetBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidgetClass_MetaData), NewProp_PromptWidgetClass_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptRelativeLocation = { "PromptRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, PromptRelativeLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptRelativeLocation_MetaData), NewProp_PromptRelativeLocation_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWidgetSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWidgetSpace = { "PromptWidgetSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, PromptWidgetSpace), Z_Construct_UEnum_UMG_EWidgetSpace, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidgetSpace_MetaData), NewProp_PromptWidgetSpace_MetaData) }; // 2733937823
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptDrawSize = { "PromptDrawSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, PromptDrawSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptDrawSize_MetaData), NewProp_PromptDrawSize_MetaData) };
void Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit(void* Obj)
{
	((UInteractionComponent*)Obj)->bDrawAtDesiredSize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDrawAtDesiredSize = { "bDrawAtDesiredSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UInteractionComponent), &Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDrawAtDesiredSize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDrawAtDesiredSize_MetaData), NewProp_bDrawAtDesiredSize_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWorldScale = { "PromptWorldScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, PromptWorldScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWorldScale_MetaData), NewProp_PromptWorldScale_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractionExecuted = { "OnInteractionExecuted", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, OnInteractionExecuted), Z_Construct_UDelegateFunction_InteractionPlugin_InteractionExecutedSignature__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInteractionExecuted_MetaData), NewProp_OnInteractionExecuted_MetaData) }; // 3859576688
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWidgetComponent = { "PromptWidgetComponent", nullptr, (EPropertyFlags)0x0144000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionComponent, PromptWidgetComponent), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptWidgetComponent_MetaData), NewProp_PromptWidgetComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionAction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractionAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bCanInteract,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bInteractOnlyOnce,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptRelativeLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWidgetSpace_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWidgetSpace,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptDrawSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bDrawAtDesiredSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWorldScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_OnInteractionExecuted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_PromptWidgetComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
	&UInteractionComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionComponent()
{
	if (!Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
UInteractionComponent::~UInteractionComponent() {}
// ********** End Class UInteractionComponent ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h__Script_InteractionPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionComponent, UInteractionComponent::StaticClass, TEXT("UInteractionComponent"), &Z_Registration_Info_UClass_UInteractionComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionComponent), 303696973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h__Script_InteractionPlugin_2920155259(TEXT("/Script/InteractionPlugin"),
	Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h__Script_InteractionPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h__Script_InteractionPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
