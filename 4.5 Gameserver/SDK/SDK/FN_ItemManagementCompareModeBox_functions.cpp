#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemManagementCompareModeBox.ItemManagementCompareModeBox_C
// (None)

class UClass* UItemManagementCompareModeBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemManagementCompareModeBox_C");

	return Clss;
}


// ItemManagementCompareModeBox_C ItemManagementCompareModeBox.Default__ItemManagementCompareModeBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemManagementCompareModeBox_C* UItemManagementCompareModeBox_C::GetDefaultObj()
{
	static class UItemManagementCompareModeBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemManagementCompareModeBox_C*>(UItemManagementCompareModeBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleBack
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Passthrough                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemManagementCompareModeBox_C::HandleBack(bool* Passthrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementCompareModeBox_C", "HandleBack");

	Params::UItemManagementCompareModeBox_C_HandleBack_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Passthrough != nullptr)
		*Passthrough = Parms.Passthrough;

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.UpdateFocusedItems
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementCompareModeBox_C::UpdateFocusedItems(bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementCompareModeBox_C", "UpdateFocusedItems");

	Params::UItemManagementCompareModeBox_C_UpdateFocusedItems_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToDetailSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::HandleDifferentItemToDetailSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementCompareModeBox_C", "HandleDifferentItemToDetailSetBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.HandleDifferentItemToCompareSetBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::HandleDifferentItemToCompareSetBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementCompareModeBox_C", "HandleDifferentItemToCompareSetBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementCompareModeBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementCompareModeBox_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UItemManagementCompareModeBox_C::OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementCompareModeBox_C", "OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemManagementCompareModeBox.ItemManagementCompareModeBox_C.ExecuteUbergraph_ItemManagementCompareModeBox
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDataTableRowHandle         K2Node_MakeStruct_DataTableRowHandle                             (NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemManagementCompareModeBox_C::ExecuteUbergraph_ItemManagementCompareModeBox(int32 EntryPoint, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemManagementCompareModeBox_C", "ExecuteUbergraph_ItemManagementCompareModeBox");

	Params::UItemManagementCompareModeBox_C_ExecuteUbergraph_ItemManagementCompareModeBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_DataTableRowHandle = K2Node_MakeStruct_DataTableRowHandle;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue1 = CallFunc_GetUINavigationManager_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}

}


