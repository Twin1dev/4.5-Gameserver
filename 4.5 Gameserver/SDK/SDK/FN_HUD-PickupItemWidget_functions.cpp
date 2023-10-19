#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD-PickupItemWidget.HUD-PickupItemWidget_C
// (None)

class UClass* UHUDMinusPickupItemWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD-PickupItemWidget_C");

	return Clss;
}


// HUD-PickupItemWidget_C HUD-PickupItemWidget.Default__HUD-PickupItemWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUDMinusPickupItemWidget_C* UHUDMinusPickupItemWidget_C::GetDefaultObj()
{
	static class UHUDMinusPickupItemWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUDMinusPickupItemWidget_C*>(UHUDMinusPickupItemWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.SetPickup
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                 NewPickup                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDMinusPickupItemWidget_C::SetPickup(class AFortPickup* NewPickup)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "SetPickup");

	Params::UHUDMinusPickupItemWidget_C_SetPickup_Params Parms{};

	Parms.NewPickup = NewPickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeInteractionFailureText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InteractErrorText                                                (Edit, BlueprintVisible)
// class UFortInventoryContext*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_ItemsCount                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_MaxItemsCount                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetBackpackItemCounts_OverflowItemsCount                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetEmptyText_ReturnValue                                (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetInteractErrorText_InteractErrorText                  (None)
// bool                               CallFunc_GetInteractErrorText_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUDMinusPickupItemWidget_C::InitializeInteractionFailureText(class FText InteractErrorText, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetBackpackItemCounts_ItemsCount, int32 CallFunc_GetBackpackItemCounts_MaxItemsCount, int32 CallFunc_GetBackpackItemCounts_OverflowItemsCount, bool CallFunc_GreaterEqual_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class FText CallFunc_GetInteractErrorText_InteractErrorText, bool CallFunc_GetInteractErrorText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "InitializeInteractionFailureText");

	Params::UHUDMinusPickupItemWidget_C_InitializeInteractionFailureText_Params Parms{};

	Parms.InteractErrorText = InteractErrorText;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetBackpackItemCounts_ItemsCount = CallFunc_GetBackpackItemCounts_ItemsCount;
	Parms.CallFunc_GetBackpackItemCounts_MaxItemsCount = CallFunc_GetBackpackItemCounts_MaxItemsCount;
	Parms.CallFunc_GetBackpackItemCounts_OverflowItemsCount = CallFunc_GetBackpackItemCounts_OverflowItemsCount;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetEmptyText_ReturnValue = CallFunc_GetEmptyText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetInteractErrorText_InteractErrorText = CallFunc_GetInteractErrorText_InteractErrorText;
	Parms.CallFunc_GetInteractErrorText_ReturnValue = CallFunc_GetInteractErrorText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.InitializeItemData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Select1_Default                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDMinusPickupItemWidget_C::InitializeItemData(bool Temp_bool_Variable, class UFortItem* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue1, class UFortItem* K2Node_Select1_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "InitializeItemData");

	Params::UHUDMinusPickupItemWidget_C_InitializeItemData_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable1 = Temp_bool_Variable1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable1 = Temp_byte_Variable1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.K2Node_Select1_Default = K2Node_Select1_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUDMinusPickupItemWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD-PickupItemWidget.HUD-PickupItemWidget_C.ExecuteUbergraph_HUD-PickupItemWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUDMinusPickupItemWidget_C::ExecuteUbergraph_HUDMinusPickupItemWidget(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD-PickupItemWidget_C", "ExecuteUbergraph_HUD-PickupItemWidget");

	Params::UHUDMinusPickupItemWidget_C_ExecuteUbergraph_HUDMinusPickupItemWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


