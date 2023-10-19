#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSpectatorScoreboardListView.AthenaSpectatorScoreboardListView_C
// (None)

class UClass* UAthenaSpectatorScoreboardListView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSpectatorScoreboardListView_C");

	return Clss;
}


// AthenaSpectatorScoreboardListView_C AthenaSpectatorScoreboardListView.Default__AthenaSpectatorScoreboardListView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSpectatorScoreboardListView_C* UAthenaSpectatorScoreboardListView_C::GetDefaultObj()
{
	static class UAthenaSpectatorScoreboardListView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSpectatorScoreboardListView_C*>(UAthenaSpectatorScoreboardListView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSpectatorScoreboardListView.AthenaSpectatorScoreboardListView_C.ResetFocus
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSpectatorScoreboardListView_C::ResetFocus(class UCommonInputContext* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorScoreboardListView_C", "ResetFocus");

	Params::UAthenaSpectatorScoreboardListView_C_ResetFocus_Params Parms{};

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


