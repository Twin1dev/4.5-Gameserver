#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C
// (None)

class UClass* UAthenaBroadcastScoreboardListView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBroadcastScoreboardListView_C");

	return Clss;
}


// AthenaBroadcastScoreboardListView_C AthenaBroadcastScoreboardListView.Default__AthenaBroadcastScoreboardListView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBroadcastScoreboardListView_C* UAthenaBroadcastScoreboardListView_C::GetDefaultObj()
{
	static class UAthenaBroadcastScoreboardListView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBroadcastScoreboardListView_C*>(UAthenaBroadcastScoreboardListView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaBroadcastScoreboardListView.AthenaBroadcastScoreboardListView_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaBroadcastScoreboardListView_C::ResetFocus(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaBroadcastScoreboardListView_C", "ResetFocus");

	Params::UAthenaBroadcastScoreboardListView_C_ResetFocus_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


