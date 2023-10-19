#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x250 (0x460 - 0x210)
// WidgetBlueprintGeneratedClass LobbyPlayerPadBottom.LobbyPlayerPadBottom_C
class ULobbyPlayerPadBottom_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UImage*                                BattlePassBadge;                                   // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BattlePassBoostActiveIcon;                         // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BattlePassSelfXpGainLine;                          // 0x228(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      BonusXPEvent;                                      // 0x230(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HB_BattlePassXPPercentage;                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FFortTeamMemberInfo                   Team_Member_Info;                                  // 0x248(0x1F8)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Is_Local_Player;                                   // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Is_Friend;                                         // 0x441(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3149[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  BonusEventXpDisplayTitle;                          // 0x448(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class ULobbyPlayerPadBottom_C* GetDefaultObj();

	void UpdateHotfixableBonusEventTitle(class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class FText CallFunc_GetOverrideBonusEventXpTitleText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	int32 GetBonusXPValue(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortSeasonalEventManager* CallFunc_GetSeasonalEventManager_ReturnValue, const struct FFortClientEventsState& CallFunc_GetEventState_ReturnValue, int32 CallFunc_GetBRXPBonusPoints_ReturnValue);
	void UpdateIsFriendAndLocal(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsTeamMemberFriend_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue);
	void GetBattlePassInfo(int32* BattlePassSelfXpBoost, int32* BattlePassFriendXpBoost, bool* HasBattlePass, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Refresh(int32 BonusXPValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost, int32 CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost, bool CallFunc_GetBattlePassInfo_HasBattlePass, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, int32 CallFunc_GetBonusXPValue_ReturnValue, int32 CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost1, int32 CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost1, bool CallFunc_GetBattlePassInfo_HasBattlePass1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable5, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1);
	void Set_Team_Member_Info(const struct FFortTeamMemberInfo& New_Team_Member_Info);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_LobbyPlayerPadBottom(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue1);
};

}


