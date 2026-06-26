// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeInteractionTypes() {}

// ********** Begin Cross Module References ********************************************************
INTERACTIONPLUGIN_API UEnum* Z_Construct_UEnum_InteractionPlugin_EInteractionAction();
UPackage* Z_Construct_UPackage__Script_InteractionPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EInteractionAction ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInteractionAction;
static UEnum* EInteractionAction_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EInteractionAction.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EInteractionAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractionPlugin_EInteractionAction, (UObject*)Z_Construct_UPackage__Script_InteractionPlugin(), TEXT("EInteractionAction"));
	}
	return Z_Registration_Info_UEnum_EInteractionAction.OuterSingleton;
}
template<> INTERACTIONPLUGIN_NON_ATTRIBUTED_API UEnum* StaticEnum<EInteractionAction>()
{
	return EInteractionAction_StaticEnum();
}
struct Z_Construct_UEnum_InteractionPlugin_EInteractionAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UInteractionComponent \xe5\x86\x85\xe7\xbd\xae\xe7\x9a\x84\xe7\xa4\xba\xe4\xbe\x8b\xe4\xba\xa4\xe4\xba\x92\xe8\xa1\x8c\xe4\xb8\xba\xef\xbc\x8c\xe5\x8f\xaf\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe7\x9b\xb4\xe6\x8e\xa5\xe9\x80\x89\xe6\x8b\xa9\xe3\x80\x82 */" },
#endif
		{ "ModuleRelativePath", "Public/InteractionTypes.h" },
		{ "PrintOneCharacter.Comment", "/** \xe4\xba\xa4\xe4\xba\x92\xe6\x88\x90\xe5\x8a\x9f\xe5\x90\x8e\xe5\x90\x91 Output Log \xe8\xbe\x93\xe5\x87\xba\xe4\xb8\x80\xe4\xb8\xaa\xe6\xb1\x89\xe5\xad\x97\xe2\x80\x9c \xe4\xb8\x80 \xe2\x80\x9d\xe3\x80\x82 */" },
		{ "PrintOneCharacter.DisplayName", "\xe6\x89\x93\xe5\x8d\xb0\xe4\xb8\x80\xe4\xb8\xaa\xe5\xad\x97" },
		{ "PrintOneCharacter.Name", "EInteractionAction::PrintOneCharacter" },
		{ "PrintOneCharacter.ToolTip", "\xe4\xba\xa4\xe4\xba\x92\xe6\x88\x90\xe5\x8a\x9f\xe5\x90\x8e\xe5\x90\x91 Output Log \xe8\xbe\x93\xe5\x87\xba\xe4\xb8\x80\xe4\xb8\xaa\xe6\xb1\x89\xe5\xad\x97\xe2\x80\x9c \xe4\xb8\x80 \xe2\x80\x9d\xe3\x80\x82" },
		{ "PrintTwoCharacters.Comment", "/** \xe4\xba\xa4\xe4\xba\x92\xe6\x88\x90\xe5\x8a\x9f\xe5\x90\x8e\xe5\x90\x91 Output Log \xe8\xbe\x93\xe5\x87\xba\xe4\xb8\xa4\xe4\xb8\xaa\xe6\xb1\x89\xe5\xad\x97\xe2\x80\x9c \xe4\xb8\xa4\xe4\xb8\xaa \xe2\x80\x9d\xe3\x80\x82 */" },
		{ "PrintTwoCharacters.DisplayName", "\xe6\x89\x93\xe5\x8d\xb0\xe4\xb8\xa4\xe4\xb8\xaa\xe5\xad\x97" },
		{ "PrintTwoCharacters.Name", "EInteractionAction::PrintTwoCharacters" },
		{ "PrintTwoCharacters.ToolTip", "\xe4\xba\xa4\xe4\xba\x92\xe6\x88\x90\xe5\x8a\x9f\xe5\x90\x8e\xe5\x90\x91 Output Log \xe8\xbe\x93\xe5\x87\xba\xe4\xb8\xa4\xe4\xb8\xaa\xe6\xb1\x89\xe5\xad\x97\xe2\x80\x9c \xe4\xb8\xa4\xe4\xb8\xaa \xe2\x80\x9d\xe3\x80\x82" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UInteractionComponent \xe5\x86\x85\xe7\xbd\xae\xe7\x9a\x84\xe7\xa4\xba\xe4\xbe\x8b\xe4\xba\xa4\xe4\xba\x92\xe8\xa1\x8c\xe4\xb8\xba\xef\xbc\x8c\xe5\x8f\xaf\xe5\x9c\xa8\xe7\xbc\x96\xe8\xbe\x91\xe5\x99\xa8\xe4\xb8\xad\xe7\x9b\xb4\xe6\x8e\xa5\xe9\x80\x89\xe6\x8b\xa9\xe3\x80\x82" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EInteractionAction::PrintOneCharacter", (int64)EInteractionAction::PrintOneCharacter },
		{ "EInteractionAction::PrintTwoCharacters", (int64)EInteractionAction::PrintTwoCharacters },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
}; // struct Z_Construct_UEnum_InteractionPlugin_EInteractionAction_Statics 
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractionPlugin_EInteractionAction_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InteractionPlugin,
	nullptr,
	"EInteractionAction",
	"EInteractionAction",
	Z_Construct_UEnum_InteractionPlugin_EInteractionAction_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionPlugin_EInteractionAction_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InteractionPlugin_EInteractionAction_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InteractionPlugin_EInteractionAction_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InteractionPlugin_EInteractionAction()
{
	if (!Z_Registration_Info_UEnum_EInteractionAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInteractionAction.InnerSingleton, Z_Construct_UEnum_InteractionPlugin_EInteractionAction_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EInteractionAction.InnerSingleton;
}
// ********** End Enum EInteractionAction **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionTypes_h__Script_InteractionPlugin_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EInteractionAction_StaticEnum, TEXT("EInteractionAction"), &Z_Registration_Info_UEnum_EInteractionAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3376082064U) },
	};
}; // Z_CompiledInDeferFile_FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionTypes_h__Script_InteractionPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionTypes_h__Script_InteractionPlugin_529448257{
	TEXT("/Script/InteractionPlugin"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionTypes_h__Script_InteractionPlugin_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Projects_ForVariousComponents_Plugins_InteractionPlugin_Source_InteractionPlugin_Public_InteractionTypes_h__Script_InteractionPlugin_Statics::EnumInfo),
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
