#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LobbyPlayerPadBottom.LobbyPlayerPadBottom_C
// (None)

class UClass* ULobbyPlayerPadBottom_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyPlayerPadBottom_C");

	return Clss;
}


// LobbyPlayerPadBottom_C LobbyPlayerPadBottom.Default__LobbyPlayerPadBottom_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobbyPlayerPadBottom_C* ULobbyPlayerPadBottom_C::GetDefaultObj()
{
	static class ULobbyPlayerPadBottom_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyPlayerPadBottom_C*>(ULobbyPlayerPadBottom_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.UpdateHotfixableBonusEventTitle
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetOverrideBonusEventXpTitleText_ReturnValue            (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadBottom_C::UpdateHotfixableBonusEventTitle(class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class FText CallFunc_GetOverrideBonusEventXpTitleText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "UpdateHotfixableBonusEventTitle");

	Params::ULobbyPlayerPadBottom_C_UpdateHotfixableBonusEventTitle_Params Parms{};

	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetOverrideBonusEventXpTitleText_ReturnValue = CallFunc_GetOverrideBonusEventXpTitleText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.GetBonusXPValue
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonalEventManager*   CallFunc_GetSeasonalEventManager_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEventsState      CallFunc_GetEventState_ReturnValue                               (ConstParm)
// int32                              CallFunc_GetBRXPBonusPoints_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 ULobbyPlayerPadBottom_C::GetBonusXPValue(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortSeasonalEventManager* CallFunc_GetSeasonalEventManager_ReturnValue, const struct FFortClientEventsState& CallFunc_GetEventState_ReturnValue, int32 CallFunc_GetBRXPBonusPoints_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "GetBonusXPValue");

	Params::ULobbyPlayerPadBottom_C_GetBonusXPValue_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSeasonalEventManager_ReturnValue = CallFunc_GetSeasonalEventManager_ReturnValue;
	Parms.CallFunc_GetEventState_ReturnValue = CallFunc_GetEventState_ReturnValue;
	Parms.CallFunc_GetBRXPBonusPoints_ReturnValue = CallFunc_GetBRXPBonusPoints_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.UpdateIsFriendAndLocal
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsTeamMemberFriend_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidNetID_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayersUniqueID_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadBottom_C::UpdateIsFriendAndLocal(class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortPartyContext* CallFunc_GetContext_ReturnValue1, bool CallFunc_IsTeamMemberFriend_ReturnValue, bool CallFunc_IsValidNetID_ReturnValue, bool CallFunc_IsLocalPlayersUniqueID_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "UpdateIsFriendAndLocal");

	Params::ULobbyPlayerPadBottom_C_UpdateIsFriendAndLocal_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue1 = CallFunc_GetContext_ReturnValue1;
	Parms.CallFunc_IsTeamMemberFriend_ReturnValue = CallFunc_IsTeamMemberFriend_ReturnValue;
	Parms.CallFunc_IsValidNetID_ReturnValue = CallFunc_IsValidNetID_ReturnValue;
	Parms.CallFunc_IsLocalPlayersUniqueID_ReturnValue = CallFunc_IsLocalPlayersUniqueID_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.GetBattlePassInfo
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              BattlePassSelfXpBoost                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              BattlePassFriendXpBoost                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasBattlePass                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULobbyPlayerPadBottom_C::GetBattlePassInfo(int32* BattlePassSelfXpBoost, int32* BattlePassFriendXpBoost, bool* HasBattlePass, bool CallFunc_NotEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "GetBattlePassInfo");

	Params::ULobbyPlayerPadBottom_C_GetBattlePassInfo_Params Parms{};

	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (BattlePassSelfXpBoost != nullptr)
		*BattlePassSelfXpBoost = Parms.BattlePassSelfXpBoost;

	if (BattlePassFriendXpBoost != nullptr)
		*BattlePassFriendXpBoost = Parms.BattlePassFriendXpBoost;

	if (HasBattlePass != nullptr)
		*HasBattlePass = Parms.HasBattlePass;

}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              BonusXPValue                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattlePassInfo_HasBattlePass                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue1                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBonusXPValue_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBattlePassInfo_HasBattlePass1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData1                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable5                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// bool                               Temp_bool_Variable2                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select2_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData2                            (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array1                                          (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue1                                     (None)

void ULobbyPlayerPadBottom_C::Refresh(int32 BonusXPValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable2, enum class ESlateVisibility Temp_byte_Variable3, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable4, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost, int32 CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost, bool CallFunc_GetBattlePassInfo_HasBattlePass, bool CallFunc_Greater_IntInt_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select1_Default, int32 CallFunc_GetBonusXPValue_ReturnValue, int32 CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost1, int32 CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost1, bool CallFunc_GetBattlePassInfo_HasBattlePass1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable5, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable2, enum class ESlateVisibility K2Node_Select2_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array1, class FText CallFunc_Format_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "Refresh");

	Params::ULobbyPlayerPadBottom_C_Refresh_Params Parms{};

	Parms.BonusXPValue = BonusXPValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable2 = Temp_byte_Variable2;
	Parms.Temp_byte_Variable3 = Temp_byte_Variable3;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable4 = Temp_byte_Variable4;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost = CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost;
	Parms.CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost = CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost;
	Parms.CallFunc_GetBattlePassInfo_HasBattlePass = CallFunc_GetBattlePassInfo_HasBattlePass;
	Parms.CallFunc_Greater_IntInt_ReturnValue1 = CallFunc_Greater_IntInt_ReturnValue1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;
	Parms.CallFunc_GetBonusXPValue_ReturnValue = CallFunc_GetBonusXPValue_ReturnValue;
	Parms.CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost1 = CallFunc_GetBattlePassInfo_BattlePassSelfXpBoost1;
	Parms.CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost1 = CallFunc_GetBattlePassInfo_BattlePassFriendXpBoost1;
	Parms.CallFunc_GetBattlePassInfo_HasBattlePass1 = CallFunc_GetBattlePassInfo_HasBattlePass1;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData1 = K2Node_MakeStruct_FormatArgumentData1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable5 = Temp_byte_Variable5;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable2 = Temp_bool_Variable2;
	Parms.K2Node_Select2_Default = K2Node_Select2_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData2 = K2Node_MakeStruct_FormatArgumentData2;
	Parms.K2Node_MakeArray_Array1 = K2Node_MakeArray_Array1;
	Parms.CallFunc_Format_ReturnValue1 = CallFunc_Format_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Set Team Member Info
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         New_Team_Member_Info                                             (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void ULobbyPlayerPadBottom_C::Set_Team_Member_Info(const struct FFortTeamMemberInfo& New_Team_Member_Info)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "Set Team Member Info");

	Params::ULobbyPlayerPadBottom_C_Set_Team_Member_Info_Params Parms{};

	Parms.New_Team_Member_Info = New_Team_Member_Info;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadBottom_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULobbyPlayerPadBottom_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPlayerPadBottom.LobbyPlayerPadBottom_C.ExecuteUbergraph_LobbyPlayerPadBottom
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerPadBottom_C::ExecuteUbergraph_LobbyPlayerPadBottom(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerPadBottom_C", "ExecuteUbergraph_LobbyPlayerPadBottom");

	Params::ULobbyPlayerPadBottom_C_ExecuteUbergraph_LobbyPlayerPadBottom_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue1 = CallFunc_GetRuntimeOptions_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


