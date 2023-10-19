#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Button_EmoteMenu.Button_EmoteMenu_C
// (None)

class UClass* UButton_EmoteMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button_EmoteMenu_C");

	return Clss;
}


// Button_EmoteMenu_C Button_EmoteMenu.Default__Button_EmoteMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButton_EmoteMenu_C* UButton_EmoteMenu_C::GetDefaultObj()
{
	static class UButton_EmoteMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButton_EmoteMenu_C*>(UButton_EmoteMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Button_EmoteMenu.Button_EmoteMenu_C.OnClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UButton_EmoteMenu_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_EmoteMenu_C", "OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Button_EmoteMenu.Button_EmoteMenu_C.ExecuteUbergraph_Button_EmoteMenu
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_EmoteMenu_C::ExecuteUbergraph_Button_EmoteMenu(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_EmoteMenu_C", "ExecuteUbergraph_Button_EmoteMenu");

	Params::UButton_EmoteMenu_C_ExecuteUbergraph_Button_EmoteMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


