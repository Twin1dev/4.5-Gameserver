#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xBB8 - 0xB80)
// BlueprintGeneratedClass DA_CarminePack.DA_CarminePack_C
class ADA_CarminePack_C : public AFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(Transient, DuplicateTransient)
	float                                        TimePressed;                                       // 0xB88(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PunchPicker;                                       // 0xB8C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasLandedAfterBeam;                                // 0xB90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 Carmine_Ability_Tags;                              // 0xB98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class ADA_CarminePack_C* GetDefaultObj();

	void UserConstructionScript();
	void BPPressTrigger(class AFortDecoHelper* FortDecoHelper);
	void BPPressSecondaryFire(class AFortDecoHelper* FortDecoHelper);
	void ReceiveBeginPlay();
	void Landed(struct FHitResult& Hit);
	void ExecuteUbergraph_DA_CarminePack(int32 EntryPoint, bool Temp_bool_Variable, class AFortDecoHelper* K2Node_Event_FortDecoHelper1, bool CallFunc_Not_PreBool_ReturnValue, class AFortDecoHelper* K2Node_Event_FortDecoHelper, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_IsFalling_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData1, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue2, bool Temp_bool_Variable1, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, class APawn* CallFunc_GetInstigator_ReturnValue3, const struct FHitResult& K2Node_CustomEvent_Hit, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn1, bool K2Node_DynamicCast_bSuccess2, class APawn* CallFunc_GetInstigator_ReturnValue4, bool CallFunc_BooleanAND_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface1, bool K2Node_DynamicCast_bSuccess3, class APawn* CallFunc_GetInstigator_ReturnValue5, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn2, bool K2Node_DynamicCast_bSuccess4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithSourceTags_ReturnValue, int32 CallFunc_RemoveActiveEffectsWithSourceTags_ReturnValue1, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue1);
};

}


