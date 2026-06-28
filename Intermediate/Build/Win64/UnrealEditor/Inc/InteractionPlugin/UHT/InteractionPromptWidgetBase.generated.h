// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionPromptWidgetBase.h"

#ifdef INTERACTIONPLUGIN_InteractionPromptWidgetBase_generated_h
#error "InteractionPromptWidgetBase.generated.h already included, missing '#pragma once' in InteractionPromptWidgetBase.h"
#endif
#define INTERACTIONPLUGIN_InteractionPromptWidgetBase_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class UInteractionComponent;

// ********** Begin Class UInteractionPromptWidgetBase *********************************************
#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetInteractionComponent); \
	DECLARE_FUNCTION(execGetPromptText); \
	DECLARE_FUNCTION(execSetPromptText);


#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_CALLBACK_WRAPPERS
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionPromptWidgetBase_NoRegister();

#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionPromptWidgetBase(); \
	friend struct Z_Construct_UClass_UInteractionPromptWidgetBase_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionPromptWidgetBase_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionPromptWidgetBase, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/InteractionPlugin"), Z_Construct_UClass_UInteractionPromptWidgetBase_NoRegister) \
	DECLARE_SERIALIZER(UInteractionPromptWidgetBase)


#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionPromptWidgetBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionPromptWidgetBase(UInteractionPromptWidgetBase&&) = delete; \
	UInteractionPromptWidgetBase(const UInteractionPromptWidgetBase&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionPromptWidgetBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionPromptWidgetBase); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionPromptWidgetBase) \
	NO_API virtual ~UInteractionPromptWidgetBase();


#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_15_PROLOG
#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_CALLBACK_WRAPPERS \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionPromptWidgetBase;

// ********** End Class UInteractionPromptWidgetBase ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionPromptWidgetBase_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
