#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaPickupMessageItem.AthenaPickupMessageItem_C
// (None)

class UClass* UAthenaPickupMessageItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPickupMessageItem_C");

	return Clss;
}


// AthenaPickupMessageItem_C AthenaPickupMessageItem.Default__AthenaPickupMessageItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaPickupMessageItem_C* UAthenaPickupMessageItem_C::GetDefaultObj()
{
	static class UAthenaPickupMessageItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPickupMessageItem_C*>(UAthenaPickupMessageItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Picked_Up_Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               (None)

void UAthenaPickupMessageItem_C::Setup(class UFortItem* Picked_Up_Item, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupMessageItem_C", "Setup");

	Params::UAthenaPickupMessageItem_C_Setup_Params Parms{};

	Parms.Picked_Up_Item = Picked_Up_Item;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.Refresh Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaPickupMessageItem_C::Refresh_Count()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupMessageItem_C", "Refresh Count");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldStackSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupMessageItem_C::OnStackSizeChanged(int32 OldStackSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupMessageItem_C", "OnStackSizeChanged");

	Params::UAthenaPickupMessageItem_C_OnStackSizeChanged_Params Parms{};

	Parms.OldStackSize = OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaPickupMessageItem_C::OnBeginRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupMessageItem_C", "OnBeginRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaPickupMessageItem.AthenaPickupMessageItem_C.ExecuteUbergraph_AthenaPickupMessageItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OldStackSize                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPickupMessageItem_C::ExecuteUbergraph_AthenaPickupMessageItem(int32 EntryPoint, int32 K2Node_Event_OldStackSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPickupMessageItem_C", "ExecuteUbergraph_AthenaPickupMessageItem");

	Params::UAthenaPickupMessageItem_C_ExecuteUbergraph_AthenaPickupMessageItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OldStackSize = K2Node_Event_OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}

}


