// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionPromptWidgetBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeInteractionPromptWidgetBase() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionPromptWidgetBase();
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionPromptWidgetBase_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_InteractionPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UInteractionPromptWidgetBase Function GetInteractionComponent ************
struct Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics
{
	struct InteractionPromptWidgetBase_eventGetInteractionComponent_Parms
	{
		UInteractionComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x94\xe5\x9b\x9e\xe5\x88\x9b\xe5\xbb\xba\xe8\xaf\xa5 Widget \xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe4\xbe\xbf\xe4\xba\x8e Widget Blueprint \xe8\xaf\xbb\xe5\x8f\x96\xe6\x89\xa9\xe5\xb1\x95\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e\xe5\x88\x9b\xe5\xbb\xba\xe8\xaf\xa5 Widget \xe7\x9a\x84\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe4\xbe\xbf\xe4\xba\x8e Widget Blueprint \xe8\xaf\xbb\xe5\x8f\x96\xe6\x89\xa9\xe5\xb1\x95\xe6\x95\xb0\xe6\x8d\xae\xe3\x80\x82" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionPromptWidgetBase_eventGetInteractionComponent_Parms, ReturnValue), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionPromptWidgetBase, nullptr, "GetInteractionComponent", Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::InteractionPromptWidgetBase_eventGetInteractionComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::InteractionPromptWidgetBase_eventGetInteractionComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionPromptWidgetBase::execGetInteractionComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UInteractionComponent**)Z_Param__Result=P_THIS->GetInteractionComponent();
	P_NATIVE_END;
}
// ********** End Class UInteractionPromptWidgetBase Function GetInteractionComponent **************

// ********** Begin Class UInteractionPromptWidgetBase Function GetPromptText **********************
struct Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics
{
	struct InteractionPromptWidgetBase_eventGetPromptText_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe8\xbf\x94\xe5\x9b\x9e\xe5\xbd\x93\xe5\x89\x8d\xe7\x94\xb1\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xe6\x8f\x90\xe4\xbe\x9b\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\xef\xbc\x8c\xe4\xbe\x9b Widget Blueprint \xe6\x9f\xa5\xe8\xaf\xa2\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe8\xbf\x94\xe5\x9b\x9e\xe5\xbd\x93\xe5\x89\x8d\xe7\x94\xb1\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xe6\x8f\x90\xe4\xbe\x9b\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\xef\xbc\x8c\xe4\xbe\x9b Widget Blueprint \xe6\x9f\xa5\xe8\xaf\xa2\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionPromptWidgetBase_eventGetPromptText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionPromptWidgetBase, nullptr, "GetPromptText", Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::InteractionPromptWidgetBase_eventGetPromptText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::InteractionPromptWidgetBase_eventGetPromptText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionPromptWidgetBase::execGetPromptText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetPromptText();
	P_NATIVE_END;
}
// ********** End Class UInteractionPromptWidgetBase Function GetPromptText ************************

// ********** Begin Class UInteractionPromptWidgetBase Function OnPromptTextChanged ****************
struct InteractionPromptWidgetBase_eventOnPromptTextChanged_Parms
{
	FText InPromptText;
};
static FName NAME_UInteractionPromptWidgetBase_OnPromptTextChanged = FName(TEXT("OnPromptTextChanged"));
void UInteractionPromptWidgetBase::OnPromptTextChanged(FText const& InPromptText)
{
	InteractionPromptWidgetBase_eventOnPromptTextChanged_Parms Parms;
	Parms.InPromptText=InPromptText;
	UFunction* Func = FindFunctionChecked(NAME_UInteractionPromptWidgetBase_OnPromptTextChanged);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8f\xaf\xe9\x80\x89 Blueprint \xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x9a\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\xe6\x9b\xb4\xe6\x96\xb0\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x8c\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe6\x92\xad\xe6\x94\xbe\xe5\x8a\xa8\xe7\x94\xbb\xe6\x88\x96\xe6\x9b\xb4\xe6\x96\xb0\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x8e\xa7\xe4\xbb\xb6\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe9\x80\x89 Blueprint \xe4\xba\x8b\xe4\xbb\xb6\xef\xbc\x9a\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\xe6\x9b\xb4\xe6\x96\xb0\xe5\x90\x8e\xe8\xa7\xa6\xe5\x8f\x91\xef\xbc\x8c\xe5\x8f\xaf\xe7\x94\xa8\xe4\xba\x8e\xe6\x92\xad\xe6\x94\xbe\xe5\x8a\xa8\xe7\x94\xbb\xe6\x88\x96\xe6\x9b\xb4\xe6\x96\xb0\xe8\x87\xaa\xe5\xae\x9a\xe4\xb9\x89\xe6\x8e\xa7\xe4\xbb\xb6\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPromptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InPromptText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::NewProp_InPromptText = { "InPromptText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionPromptWidgetBase_eventOnPromptTextChanged_Parms, InPromptText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPromptText_MetaData), NewProp_InPromptText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::NewProp_InPromptText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionPromptWidgetBase, nullptr, "OnPromptTextChanged", Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::PropPointers), sizeof(InteractionPromptWidgetBase_eventOnPromptTextChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(InteractionPromptWidgetBase_eventOnPromptTextChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UInteractionPromptWidgetBase Function OnPromptTextChanged ******************

// ********** Begin Class UInteractionPromptWidgetBase Function SetPromptText **********************
struct Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics
{
	struct InteractionPromptWidgetBase_eventSetPromptText_Parms
	{
		FText InPromptText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Interaction Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe4\xbf\x9d\xe5\xad\x98\xe6\x96\xb0\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\xe3\x80\x81\xe5\x90\x8c\xe6\xad\xa5\xe5\x8f\xaf\xe9\x80\x89\xe7\x9a\x84\xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x8c\xe5\xb9\xb6\xe9\x80\x9a\xe7\x9f\xa5 Blueprint \xe8\xbf\x9b\xe8\xa1\x8c\xe9\xa2\x9d\xe5\xa4\x96\xe8\xa7\x86\xe8\xa7\x89\xe6\x9b\xb4\xe6\x96\xb0\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe4\xbf\x9d\xe5\xad\x98\xe6\x96\xb0\xe7\x9a\x84\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\xe3\x80\x81\xe5\x90\x8c\xe6\xad\xa5\xe5\x8f\xaf\xe9\x80\x89\xe7\x9a\x84\xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x8c\xe5\xb9\xb6\xe9\x80\x9a\xe7\x9f\xa5 Blueprint \xe8\xbf\x9b\xe8\xa1\x8c\xe9\xa2\x9d\xe5\xa4\x96\xe8\xa7\x86\xe8\xa7\x89\xe6\x9b\xb4\xe6\x96\xb0\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InPromptText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_InPromptText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::NewProp_InPromptText = { "InPromptText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InteractionPromptWidgetBase_eventSetPromptText_Parms, InPromptText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InPromptText_MetaData), NewProp_InPromptText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::NewProp_InPromptText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UInteractionPromptWidgetBase, nullptr, "SetPromptText", Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::InteractionPromptWidgetBase_eventSetPromptText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::InteractionPromptWidgetBase_eventSetPromptText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInteractionPromptWidgetBase::execSetPromptText)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_InPromptText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPromptText(Z_Param_Out_InPromptText);
	P_NATIVE_END;
}
// ********** End Class UInteractionPromptWidgetBase Function SetPromptText ************************

// ********** Begin Class UInteractionPromptWidgetBase *********************************************
void UInteractionPromptWidgetBase::StaticRegisterNativesUInteractionPromptWidgetBase()
{
	UClass* Class = UInteractionPromptWidgetBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetInteractionComponent", &UInteractionPromptWidgetBase::execGetInteractionComponent },
		{ "GetPromptText", &UInteractionPromptWidgetBase::execGetPromptText },
		{ "SetPromptText", &UInteractionPromptWidgetBase::execSetPromptText },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UInteractionPromptWidgetBase;
UClass* UInteractionPromptWidgetBase::GetPrivateStaticClass()
{
	using TClass = UInteractionPromptWidgetBase;
	if (!Z_Registration_Info_UClass_UInteractionPromptWidgetBase.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("InteractionPromptWidgetBase"),
			Z_Registration_Info_UClass_UInteractionPromptWidgetBase.InnerSingleton,
			StaticRegisterNativesUInteractionPromptWidgetBase,
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
	return Z_Registration_Info_UClass_UInteractionPromptWidgetBase.InnerSingleton;
}
UClass* Z_Construct_UClass_UInteractionPromptWidgetBase_NoRegister()
{
	return UInteractionPromptWidgetBase::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UInteractionPromptWidgetBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x8a\xe6\x96\xb9\xe6\x8f\x90\xe7\xa4\xba Widget Blueprint \xe7\x9a\x84 C++ \xe5\x9f\xba\xe7\xb1\xbb\xe3\x80\x82\n * \xe7\xbb\xa7\xe6\x89\xbf\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84 Widget \xe5\x8f\xaf\xe8\x87\xaa\xe8\xa1\x8c\xe8\xae\xbe\xe8\xae\xa1\xe5\x9b\xbe\xe6\xa0\x87\xe5\x92\x8c\xe5\xb8\x83\xe5\xb1\x80\xef\xbc\x9b\xe8\x8b\xa5\xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\xba PromptTextBlock\xef\xbc\x8c""C++ \xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe5\xae\x83\xe3\x80\x82\n */" },
#endif
		{ "IncludePath", "InteractionPromptWidgetBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\x89\xa9\xe4\xbd\x93\xe4\xb8\x8a\xe6\x96\xb9\xe6\x8f\x90\xe7\xa4\xba Widget Blueprint \xe7\x9a\x84 C++ \xe5\x9f\xba\xe7\xb1\xbb\xe3\x80\x82\n\xe7\xbb\xa7\xe6\x89\xbf\xe6\xad\xa4\xe7\xb1\xbb\xe7\x9a\x84 Widget \xe5\x8f\xaf\xe8\x87\xaa\xe8\xa1\x8c\xe8\xae\xbe\xe8\xae\xa1\xe5\x9b\xbe\xe6\xa0\x87\xe5\x92\x8c\xe5\xb8\x83\xe5\xb1\x80\xef\xbc\x9b\xe8\x8b\xa5\xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\xba PromptTextBlock\xef\xbc\x8c""C++ \xe4\xbc\x9a\xe8\x87\xaa\xe5\x8a\xa8\xe6\x9b\xb4\xe6\x96\xb0\xe5\xae\x83\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextFontSize_MetaData[] = {
		{ "Category", "Interaction Prompt" },
		{ "ClampMax", "256" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\xbb\x98\xe8\xae\xa4\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe5\xad\x97\xe5\xad\x97\xe5\x8f\xb7\xef\xbc\x9b\xe4\xbc\x9a\xe4\xbf\x9d\xe7\x95\x99 Widget Blueprint \xe4\xb8\xad\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe5\xad\x97\xe4\xbd\x93\xe8\xb5\x84\xe6\xba\x90\xef\xbc\x8c\xe5\x8f\xaa\xe8\xa6\x86\xe7\x9b\x96\xe5\x85\xb6 Size\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe5\xad\x97\xe5\xad\x97\xe5\x8f\xb7\xef\xbc\x9b\xe4\xbc\x9a\xe4\xbf\x9d\xe7\x95\x99 Widget Blueprint \xe4\xb8\xad\xe9\x80\x89\xe6\x8b\xa9\xe7\x9a\x84\xe5\xad\x97\xe4\xbd\x93\xe8\xb5\x84\xe6\xba\x90\xef\xbc\x8c\xe5\x8f\xaa\xe8\xa6\x86\xe7\x9b\x96\xe5\x85\xb6 Size\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptIconSize_MetaData[] = {
		{ "Category", "Interaction Prompt" },
		{ "ClampMax", "512.0" },
		{ "ClampMin", "1.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe9\xbb\x98\xe8\xae\xa4\xe6\x96\xb9\xe5\xbd\xa2\xe5\x9b\xbe\xe6\xa0\x87\xe5\xb0\xba\xe5\xaf\xb8\xef\xbc\x8c\xe6\x8c\x89 1024\xc3\x97""1024 \xe6\xba\x90\xe5\x9b\xbe\xe4\xbb\xa5\xe7\xba\xa6 8.6% \xe6\xaf\x94\xe4\xbe\x8b\xe6\x98\xbe\xe7\xa4\xba\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe9\xbb\x98\xe8\xae\xa4\xe6\x96\xb9\xe5\xbd\xa2\xe5\x9b\xbe\xe6\xa0\x87\xe5\xb0\xba\xe5\xaf\xb8\xef\xbc\x8c\xe6\x8c\x89 1024\xc3\x97""1024 \xe6\xba\x90\xe5\x9b\xbe\xe4\xbb\xa5\xe7\xba\xa6 8.6% \xe6\xaf\x94\xe4\xbe\x8b\xe6\x98\xbe\xe7\xa4\xba\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptText_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbc\x93\xe5\xad\x98\xe6\x9c\x80\xe6\x96\xb0\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\xef\xbc\x8c\xe5\x8d\xb3\xe4\xbd\xbf Widget \xe6\xb2\xa1\xe6\x9c\x89\xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbe\x9b Blueprint \xe8\xaf\xbb\xe5\x8f\x96\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbc\x93\xe5\xad\x98\xe6\x9c\x80\xe6\x96\xb0\xe6\x8f\x90\xe7\xa4\xba\xe6\x96\x87\xe6\x9c\xac\xef\xbc\x8c\xe5\x8d\xb3\xe4\xbd\xbf Widget \xe6\xb2\xa1\xe6\x9c\x89\xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\xe4\xb9\x9f\xe5\x8f\xaf\xe4\xbe\x9b Blueprint \xe8\xaf\xbb\xe5\x8f\x96\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptTextBlock_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidgetOptional", "" },
		{ "Category", "Interaction Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8f\xaf\xe9\x80\x89\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x9b\xe5\x9c\xa8 Widget Blueprint \xe4\xb8\xad\xe5\xb0\x86 TextBlock \xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\xba PromptTextBlock \xe5\x8d\xb3\xe5\x8f\xaf\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe9\x80\x89\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe6\x96\x87\xe6\x9c\xac\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x9b\xe5\x9c\xa8 Widget Blueprint \xe4\xb8\xad\xe5\xb0\x86 TextBlock \xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\xba PromptTextBlock \xe5\x8d\xb3\xe5\x8f\xaf\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PromptIcon_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "BindWidgetOptional", "" },
		{ "Category", "Interaction Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe5\x8f\xaf\xe9\x80\x89\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x9b\xe5\x9c\xa8 Widget Blueprint \xe4\xb8\xad\xe5\xb0\x86 Image \xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\xba PromptIcon \xe5\x8d\xb3\xe5\x8f\xaf\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe5\x8f\xaf\xe9\x80\x89\xe8\x87\xaa\xe5\x8a\xa8\xe7\xbb\x91\xe5\xae\x9a\xe7\x9a\x84\xe5\x9b\xbe\xe6\xa0\x87\xe6\x8e\xa7\xe4\xbb\xb6\xef\xbc\x9b\xe5\x9c\xa8 Widget Blueprint \xe4\xb8\xad\xe5\xb0\x86 Image \xe5\x91\xbd\xe5\x90\x8d\xe4\xb8\xba PromptIcon \xe5\x8d\xb3\xe5\x8f\xaf\xe3\x80\x82" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InteractionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Interaction Prompt" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** \xe7\xbc\x93\xe5\xad\x98\xe6\x9d\xa5\xe6\xba\x90\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d Widget \xe6\x8c\x81\xe6\x9c\x89\xe8\xa3\xb8\xe6\x8c\x87\xe9\x92\x88\xe3\x80\x82 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionPromptWidgetBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe7\xbc\x93\xe5\xad\x98\xe6\x9d\xa5\xe6\xba\x90\xe4\xba\xa4\xe4\xba\x92\xe7\xbb\x84\xe4\xbb\xb6\xef\xbc\x8c\xe9\x81\xbf\xe5\x85\x8d Widget \xe6\x8c\x81\xe6\x9c\x89\xe8\xa3\xb8\xe6\x8c\x87\xe9\x92\x88\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PromptTextFontSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PromptIconSize;
	static const UECodeGen_Private::FTextPropertyParams NewProp_PromptText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptTextBlock;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PromptIcon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InteractionComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionPromptWidgetBase_GetInteractionComponent, "GetInteractionComponent" }, // 600914433
		{ &Z_Construct_UFunction_UInteractionPromptWidgetBase_GetPromptText, "GetPromptText" }, // 56985115
		{ &Z_Construct_UFunction_UInteractionPromptWidgetBase_OnPromptTextChanged, "OnPromptTextChanged" }, // 813944012
		{ &Z_Construct_UFunction_UInteractionPromptWidgetBase_SetPromptText, "SetPromptText" }, // 3341011787
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionPromptWidgetBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptTextFontSize = { "PromptTextFontSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionPromptWidgetBase, PromptTextFontSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextFontSize_MetaData), NewProp_PromptTextFontSize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptIconSize = { "PromptIconSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionPromptWidgetBase, PromptIconSize), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptIconSize_MetaData), NewProp_PromptIconSize_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptText = { "PromptText", nullptr, (EPropertyFlags)0x0040000000002014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionPromptWidgetBase, PromptText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptText_MetaData), NewProp_PromptText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptTextBlock = { "PromptTextBlock", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionPromptWidgetBase, PromptTextBlock), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptTextBlock_MetaData), NewProp_PromptTextBlock_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptIcon = { "PromptIcon", nullptr, (EPropertyFlags)0x014400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionPromptWidgetBase, PromptIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PromptIcon_MetaData), NewProp_PromptIcon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_InteractionComponent = { "InteractionComponent", nullptr, (EPropertyFlags)0x014400000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInteractionPromptWidgetBase, InteractionComponent), Z_Construct_UClass_UInteractionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InteractionComponent_MetaData), NewProp_InteractionComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptTextFontSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptIconSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptTextBlock,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_PromptIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::NewProp_InteractionComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_InteractionPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::ClassParams = {
	&UInteractionPromptWidgetBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::PropPointers),
	0,
	0x00B010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInteractionPromptWidgetBase()
{
	if (!Z_Registration_Info_UClass_UInteractionPromptWidgetBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractionPromptWidgetBase.OuterSingleton, Z_Construct_UClass_UInteractionPromptWidgetBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInteractionPromptWidgetBase.OuterSingleton;
}
UInteractionPromptWidgetBase::UInteractionPromptWidgetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionPromptWidgetBase);
UInteractionPromptWidgetBase::~UInteractionPromptWidgetBase() {}
// ********** End Class UInteractionPromptWidgetBase ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h__Script_InteractionPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInteractionPromptWidgetBase, UInteractionPromptWidgetBase::StaticClass, TEXT("UInteractionPromptWidgetBase"), &Z_Registration_Info_UClass_UInteractionPromptWidgetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractionPromptWidgetBase), 448104532U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h__Script_InteractionPlugin_4036846483(TEXT("/Script/InteractionPlugin"),
	Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h__Script_InteractionPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h__Script_InteractionPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
