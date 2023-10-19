#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x288 - 0x208)
// WidgetBlueprintGeneratedClass VoteUpdateNotificationWidget.VoteUpdateNotificationWidget_C
class UVoteUpdateNotificationWidget_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UHorizontalBox*                        BottomBox;                                         // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CountDownTimer;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      NoVoteCount;                                       // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TopBox;                                            // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     VoteAction;                                        // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        VoteCountBox;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      VoteType;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      YesVoteCount;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EFortVoteType                     CurrentVoteType;                                   // 0x260(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortGameStateZone*                    GameStateZone;                                     // 0x268(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          UpdateTimerHandle;                                 // 0x270(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	UMulticastDelegateProperty_                  OnToastFinished;                                   // 0x278(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UVoteUpdateNotificationWidget_C* GetDefaultObj();

	void UpdateTimer(float CallFunc_GetTimeRemainingToEndVote_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void UpdateVoteCounts(TArray<struct FVoter>& Voters, int32 No, int32 Yes, int32 Temp_int_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Variable1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FVoter& CallFunc_Array_Get_Item, class FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class FText CallFunc_Conv_IntToText_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue1, int32 CallFunc_Add_IntInt_ReturnValue2);
	void HandleVoteUpdated(enum class EFortVoteType VoteType, enum class EFortVoteStatus VoteStatus, int32 VoteResult, TArray<struct FVoter>& Voters, bool K2Node_SwitchEnum_CmpSuccess);
	void SetToast(class UFortUINotification* Toast, bool ShowAction, class UFortMissionVoteUINotification* MissionVoteToast, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue, enum class EFortVoteType Temp_byte_Variable1, class FText Temp_text_Variable, class FText Temp_text_Variable1, class FText Temp_text_Variable2, enum class ESlateVisibility Temp_byte_Variable2, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue1, bool CallFunc_RemoveChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue2, bool CallFunc_RemoveChild_ReturnValue1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue3, bool CallFunc_RemoveChild_ReturnValue2, TArray<struct FVoter>& CallFunc_GetCurrentVoters_Voters, bool CallFunc_GetCurrentVoters_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class FText K2Node_Select_Default, class AFortGameStateZone* K2Node_DynamicCast_AsFort_Game_State_Zone, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UFortMissionVoteUINotification* K2Node_DynamicCast_AsFort_Mission_Vote_UINotification, bool K2Node_DynamicCast_bSuccess1, enum class ESlateVisibility K2Node_Select1_Default);
	void Destruct();
	void ToastFinished();
	void Cleanup();
	void ExecuteUbergraph_VoteUpdateNotificationWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnToastFinished__DelegateSignature();
};

}


