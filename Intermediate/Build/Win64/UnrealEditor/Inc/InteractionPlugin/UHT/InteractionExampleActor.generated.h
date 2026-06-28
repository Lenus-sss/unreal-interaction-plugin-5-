// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Examples/InteractionExampleActor.h"

#ifdef INTERACTIONPLUGIN_InteractionExampleActor_generated_h
#error "InteractionExampleActor.generated.h already included, missing '#pragma once' in InteractionExampleActor.h"
#endif
#define INTERACTIONPLUGIN_InteractionExampleActor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AInteractionExampleActor *************************************************
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_AInteractionExampleActor_NoRegister();

#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionExampleActor(); \
	friend struct Z_Construct_UClass_AInteractionExampleActor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_AInteractionExampleActor_NoRegister(); \
public: \
	DECLARE_CLASS2(AInteractionExampleActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionPlugin"), Z_Construct_UClass_AInteractionExampleActor_NoRegister) \
	DECLARE_SERIALIZER(AInteractionExampleActor)


#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AInteractionExampleActor(AInteractionExampleActor&&) = delete; \
	AInteractionExampleActor(const AInteractionExampleActor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionExampleActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionExampleActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionExampleActor) \
	NO_API virtual ~AInteractionExampleActor();


#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h_14_PROLOG
#define FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h_17_INCLASS_NO_PURE_DECLS \
	FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AInteractionExampleActor;

// ********** End Class AInteractionExampleActor ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_Examples_InteractionExampleActor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
