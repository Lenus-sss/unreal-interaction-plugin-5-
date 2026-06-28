// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionComponent.h"

#ifdef INTERACTIONPLUGIN_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define INTERACTIONPLUGIN_InteractionComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UInteractionComponent;
enum class EInteractionAction : uint8;

// ********** Begin Delegate FInteractionExecutedSignature *****************************************
#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_13_DELEGATE \
INTERACTIONPLUGIN_API void FInteractionExecutedSignature_DelegateWrapper(const FMulticastScriptDelegate& InteractionExecutedSignature, UInteractionComponent* InteractionComponent, AActor* Interactor, EInteractionAction Action);


// ********** End Delegate FInteractionExecutedSignature *******************************************

// ********** Begin Class UInteractionComponent ****************************************************
#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execExecuteInteraction); \
	DECLARE_FUNCTION(execCanInteract);


INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();

#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionPlugin"), Z_Construct_UClass_UInteractionComponent_NoRegister) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_22_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionComponent(UInteractionComponent&&) = delete; \
	UInteractionComponent(const UInteractionComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionComponent) \
	NO_API virtual ~UInteractionComponent();


#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_19_PROLOG
#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_22_INCLASS_NO_PURE_DECLS \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionComponent;

// ********** End Class UInteractionComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
