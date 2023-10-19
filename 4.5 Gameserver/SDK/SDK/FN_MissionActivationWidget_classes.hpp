#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x158 (0x498 - 0x340)
// WidgetBlueprintGeneratedClass MissionActivationWidget.MissionActivationWidget_C
class UMissionActivationWidget_C : public UFortMissionActivationWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(Transient, DuplicateTransient)
	class UWidgetAnimation*                      HideIncreaseDifficultyPanel;                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideStartObjectivePanel;                           // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      HideHintBox;                                       // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenDetailsPanel;                                  // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenIncreaseDifficultyPanel;                       // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenStartObjectivePanel;                           // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     BackButton;                                        // 0x378(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BluGloRequirement;                                 // 0x380(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         BottomBar;                                         // 0x388(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_1;                                 // 0x390(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              DetailsPanelSizeBox;                               // 0x398(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Hint;                                              // 0x3A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          HintWrapper;                                       // 0x3A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_4;                                   // 0x3B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        IncreaseDifficultyButton;                          // 0x3B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              IncreaseDifficultySizeBox;                         // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      LockoutTimeRemainingText;                          // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionDifficultyIncreasePanel_C*     MissionDifficultyIncreasePanel;                    // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         MissionLockoutBorder;                              // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionStartObjectivePanel_C*         MissionStartObjectivePanel;                        // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMissionVotingDetailsPanel_C*          MissionVotingDetailsPanel;                         // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ObjectiveReadyTimer;                               // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      QuestName;                                         // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              RootOverlay;                                       // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        StartObjectiveButton;                              // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              StartObjectiveSizeBox;                             // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TimerMinusGlow;                                    // 0x418(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortMissionActivationWidgetState PreviousState;                                     // 0x420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B5F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  StartObjectiveHintText;                            // 0x428(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  IncreaseDifficultyHintText;                        // 0x440(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          ReadyTimer;                                        // 0x458(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                 ReadyUpObjectiveHandle;                            // 0x460(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class EFortMissionActivationWidgetState NextStateToSet;                                    // 0x480(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B60[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        AnimsPlayed;                                       // 0x484(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortVoteType                     CurrentVote;                                       // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3B61[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          LockoutTimer;                                      // 0x490(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UMissionActivationWidget_C* GetDefaultObj();

	void HandleIncreaseDifficultyLockoutFinished();
	void HandleMissionActivationLockoutFinished();
	void HandleAnimFinished(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UpdateButton(class UCommonButton* Button, bool bEnabled, bool bLockedOut, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue1);
	void UpdateLockoutTimeRemaining(float LocalLockoutTimeRemaining, class AFortGameStateZone* FortGameState, float CallFunc_GetTimeRemainingToEndFailedVoteLockout_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, bool CallFunc_IsGameplayVoteLocked_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess);
	void StartNextState(enum class EFortMissionActivationWidgetState LocalNextState);
	void UnbindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9);
	void BindEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate9);
	void UpdateObjectiveReadyTime(class FText Temp_text_Variable, bool CallFunc_IsValid_ReturnValue, class AFortMission* CallFunc_GetPrimaryMission_ReturnValue, bool Temp_bool_Variable, class AFortObjectiveBase* CallFunc_GetObjectiveByHandle_ReturnValue, class AGenericObjective_ReadyUp_C* K2Node_DynamicCast_AsGeneric_Objective_Ready_Up, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetMissionTimerTimeRemaining_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class FText CallFunc_TimeSecondsToText_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class FText K2Node_Select_Default);
	void FocusOnAvailablePanelButton(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void SetBluGloRequirementHint(int32 BluGloRequirement, class FText Temp_text_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default);
	void TogglePanelButtonInteractability(bool IsEnabled, class AFortGameStateZone* FortGameStateZone, bool CallFunc_IsGameplayVoteLocked_ReturnValue, bool CallFunc_IsGameplayVoteLocked_ReturnValue1, bool CallFunc_IsGameplayVoteLocked_ReturnValue2, bool CallFunc_IsGameplayVoteLocked_ReturnValue3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void BndEvt__DeclineButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_72_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_94_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_233_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_246_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Destruct();
	void OnActivated();
	void BndEvt__StartObjectiveButton_K2Node_ComponentBoundEvent_52_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__IncreaseDifficultyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void PreConstruct(bool IsDesignTime);
	void HandleOnRecepientVoted();
	void OnStateUpdated(enum class EFortMissionActivationWidgetState ActiveState, enum class EFortMissionActivationWidgetState PreviousState);
	void HandleVoteLockoutOccured();
	void ExecuteUbergraph_MissionActivationWidget(int32 EntryPoint, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue2, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue3, bool K2Node_SwitchEnum1_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button6, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button5, class UCommonButton* K2Node_ComponentBoundEvent_Button4, class UCommonButton* K2Node_ComponentBoundEvent_Button3, class UCommonButton* K2Node_ComponentBoundEvent_Button2, class UCommonButton* K2Node_ComponentBoundEvent_Button1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, enum class EFortMissionActivationWidgetState CallFunc_GetCurrentState_ReturnValue, bool K2Node_SwitchEnum2_CmpSuccess, int32 CallFunc_GetStartObjectiveBluGloRequirement_ReturnValue, int32 CallFunc_GetIncreaseDifficultyBluGloRequirement_ReturnValue, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue1, class AFortMission* CallFunc_GetPrimaryMission_ReturnValue, enum class EFortMissionActivationWidgetState K2Node_Event_ActiveState, enum class EFortMissionActivationWidgetState K2Node_Event_PreviousState, class FText CallFunc_GetMissionName_ReturnValue, bool K2Node_SwitchEnum3_CmpSuccess, class UFortMissionInfo* CallFunc_GetPrimaryMissionInfo_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_IsInteractionEnabled_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue1);
};

}


