// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionInteractorComponent.h"

#ifdef INTERACTIONPLUGIN_InteractionInteractorComponent_generated_h
#error "InteractionInteractorComponent.generated.h already included, missing '#pragma once' in InteractionInteractorComponent.h"
#endif
#define INTERACTIONPLUGIN_InteractionInteractorComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInteractionComponent;

// ********** Begin Class UInteractionInteractorComponent ******************************************
#define FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetFocusedInteraction); \
	DECLARE_FUNCTION(execTryInteract);


struct Z_Construct_UClass_UInteractionInteractorComponent_Statics;
INTERACTIONPLUGIN_API UClass* Z_Construct_UClass_UInteractionInteractorComponent_NoRegister();

#define FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionInteractorComponent(); \
	friend struct ::Z_Construct_UClass_UInteractionInteractorComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend INTERACTIONPLUGIN_API UClass* ::Z_Construct_UClass_UInteractionInteractorComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UInteractionInteractorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InteractionPlugin"), Z_Construct_UClass_UInteractionInteractorComponent_NoRegister) \
	DECLARE_SERIALIZER(UInteractionInteractorComponent)


#define FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h_17_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UInteractionInteractorComponent(UInteractionInteractorComponent&&) = delete; \
	UInteractionInteractorComponent(const UInteractionInteractorComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionInteractorComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionInteractorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionInteractorComponent) \
	NO_API virtual ~UInteractionInteractorComponent();


#define FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h_14_PROLOG
#define FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UInteractionInteractorComponent;

// ********** End Class UInteractionInteractorComponent ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionInteractorComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
