#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PickupMessageItem.PickupMessageItem_C
// (None)

class UClass* UPickupMessageItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PickupMessageItem_C");

	return Clss;
}


// PickupMessageItem_C PickupMessageItem.Default__PickupMessageItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPickupMessageItem_C* UPickupMessageItem_C::GetDefaultObj()
{
	static class UPickupMessageItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPickupMessageItem_C*>(UPickupMessageItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PickupMessageItem.PickupMessageItem_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Picked_Up_Item                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// struct FSlateBrush                 CallFunc_GetItemSmallPreviewImageBrush_ReturnValue               (None)

void UPickupMessageItem_C::Setup(class UFortItem* Picked_Up_Item, class FText CallFunc_GetDisplayName_ReturnValue, const struct FSlateBrush& CallFunc_GetItemSmallPreviewImageBrush_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupMessageItem_C", "Setup");

	Params::UPickupMessageItem_C_Setup_Params Parms{};

	Parms.Picked_Up_Item = Picked_Up_Item;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetItemSmallPreviewImageBrush_ReturnValue = CallFunc_GetItemSmallPreviewImageBrush_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupMessageItem.PickupMessageItem_C.Refresh Count
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupMessageItem_C::Refresh_Count(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupMessageItem_C", "Refresh Count");

	Params::UPickupMessageItem_C_Refresh_Count_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupMessageItem.PickupMessageItem_C.OnStackSizeChanged
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              OldStackSize                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupMessageItem_C::OnStackSizeChanged(int32 OldStackSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupMessageItem_C", "OnStackSizeChanged");

	Params::UPickupMessageItem_C_OnStackSizeChanged_Params Parms{};

	Parms.OldStackSize = OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PickupMessageItem.PickupMessageItem_C.OnBeginRemove
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPickupMessageItem_C::OnBeginRemove()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupMessageItem_C", "OnBeginRemove");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PickupMessageItem.PickupMessageItem_C.OnReturnedToPool
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPickupMessageItem_C::OnReturnedToPool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupMessageItem_C", "OnReturnedToPool");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PickupMessageItem.PickupMessageItem_C.ExecuteUbergraph_PickupMessageItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OldStackSize                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickupMessageItem_C::ExecuteUbergraph_PickupMessageItem(int32 EntryPoint, int32 K2Node_Event_OldStackSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PickupMessageItem_C", "ExecuteUbergraph_PickupMessageItem");

	Params::UPickupMessageItem_C_ExecuteUbergraph_PickupMessageItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OldStackSize = K2Node_Event_OldStackSize;

	UObject::ProcessEvent(Func, &Parms);

}

}


