#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Button_CycleWeapon.Button_CycleWeapon_C
// (None)

class UClass* UButton_CycleWeapon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button_CycleWeapon_C");

	return Clss;
}


// Button_CycleWeapon_C Button_CycleWeapon.Default__Button_CycleWeapon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButton_CycleWeapon_C* UButton_CycleWeapon_C::GetDefaultObj()
{
	static class UButton_CycleWeapon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButton_CycleWeapon_C*>(UButton_CycleWeapon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Button_CycleWeapon.Button_CycleWeapon_C.OnClicked
// (Event, Public, BlueprintEvent)
// Parameters:

void UButton_CycleWeapon_C::OnClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_CycleWeapon_C", "OnClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Button_CycleWeapon.Button_CycleWeapon_C.ExecuteUbergraph_Button_CycleWeapon
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UButton_CycleWeapon_C::ExecuteUbergraph_Button_CycleWeapon(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Button_CycleWeapon_C", "ExecuteUbergraph_Button_CycleWeapon");

	Params::UButton_CycleWeapon_C_ExecuteUbergraph_Button_CycleWeapon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


