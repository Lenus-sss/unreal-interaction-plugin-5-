// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InteractionTypes.h"

#ifdef INTERACTIONPLUGIN_InteractionTypes_generated_h
#error "InteractionTypes.generated.h already included, missing '#pragma once' in InteractionTypes.h"
#endif
#define INTERACTIONPLUGIN_InteractionTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PerduePapillon_Plugins_unreal_interaction_plugin_5__Source_InteractionPlugin_Public_InteractionTypes_h

// ********** Begin Enum EInteractionAction ********************************************************
#define FOREACH_ENUM_EINTERACTIONACTION(op) \
	op(EInteractionAction::PrintOneCharacter) \
	op(EInteractionAction::PrintTwoCharacters) 

enum class EInteractionAction : uint8;
template<> struct TIsUEnumClass<EInteractionAction> { enum { Value = true }; };
template<> INTERACTIONPLUGIN_API UEnum* StaticEnum<EInteractionAction>();
// ********** End Enum EInteractionAction **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
