#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookSectionPanel.CollectionBookSectionPanel_C
// (None)

class UClass* UCollectionBookSectionPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookSectionPanel_C");

	return Clss;
}


// CollectionBookSectionPanel_C CollectionBookSectionPanel.Default__CollectionBookSectionPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookSectionPanel_C* UCollectionBookSectionPanel_C::GetDefaultObj()
{
	static class UCollectionBookSectionPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookSectionPanel_C*>(UCollectionBookSectionPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnUnslotItemConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCollectionBookUnslotWidget_C*K2Node_DynamicCast_AsCollection_Book_Unslot_Widget               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionPanel_C::OnUnslotItemConfirm(class UFortItem* Item, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UCollectionBookUnslotWidget_C* K2Node_DynamicCast_AsCollection_Book_Unslot_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnUnslotItemConfirm");

	Params::UCollectionBookSectionPanel_C_OnUnslotItemConfirm_Params Parms{};

	Parms.Item = Item;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCollection_Book_Unslot_Widget = K2Node_DynamicCast_AsCollection_Book_Unslot_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnResearchItemConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ResearchItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortCollectionBookSlotData SlotData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// class UFortUIManagerWidget_NUI*    UIManager                                                        (Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCollectionBookPurchaseWidget_C*K2Node_DynamicCast_AsCollection_Book_Purchase_Widget             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionPanel_C::OnResearchItemConfirm(class UFortItem* ResearchItem, const struct FFortCollectionBookSlotData& SlotData, class UFortUIManagerWidget_NUI* UIManager, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UCollectionBookPurchaseWidget_C* K2Node_DynamicCast_AsCollection_Book_Purchase_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnResearchItemConfirm");

	Params::UCollectionBookSectionPanel_C_OnResearchItemConfirm_Params Parms{};

	Parms.ResearchItem = ResearchItem;
	Parms.SlotData = SlotData;
	Parms.UIManager = UIManager;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsCollection_Book_Purchase_Widget = K2Node_DynamicCast_AsCollection_Book_Purchase_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnInspectItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               AllowItemModifications                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsTemporaryItem                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionPanel_C::OnInspectItem(class UFortItem* Item, bool AllowItemModifications, bool IsTemporaryItem, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnInspectItem");

	Params::UCollectionBookSectionPanel_C_OnInspectItem_Params Parms{};

	Parms.Item = Item;
	Parms.AllowItemModifications = AllowItemModifications;
	Parms.IsTemporaryItem = IsTemporaryItem;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSlotItemConfirm
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToSlot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TryCommitSelectedItem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookSectionPanel_C::OnSlotItemConfirm(class UFortItem* ItemToSlot, bool CallFunc_TryCommitSelectedItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnSlotItemConfirm");

	Params::UCollectionBookSectionPanel_C_OnSlotItemConfirm_Params Parms{};

	Parms.ItemToSlot = ItemToSlot;
	Parms.CallFunc_TryCommitSelectedItem_ReturnValue = CallFunc_TryCommitSelectedItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ShowItemDetail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   SelectedItem                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::ShowItemDetail(class UFortItem* SelectedItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "ShowItemDetail");

	Params::UCollectionBookSectionPanel_C_ShowItemDetail_Params Parms{};

	Parms.SelectedItem = SelectedItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBookSectionPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnSectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortCollectionBookSection*  Section                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookSectionPanel_C::OnSectionChanged(class UFortCollectionBookSection* Section)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnSectionChanged");

	Params::UCollectionBookSectionPanel_C_OnSectionChanged_Params Parms{};

	Parms.Section = Section;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCollectionBookSectionPanel_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCollectionBookSectionPanel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollectionBookSectionPanel.CollectionBookSectionPanel_C.ExecuteUbergraph_CollectionBookSectionPanel
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate1                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate2                            (ZeroConstructor, NoDestructor)
// class UFortCollectionBookSection*  K2Node_Event_Section                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate3                            (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate4                            (ZeroConstructor, NoDestructor)

void UCollectionBookSectionPanel_C::ExecuteUbergraph_CollectionBookSectionPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate2, class UFortCollectionBookSection* K2Node_Event_Section, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookSectionPanel_C", "ExecuteUbergraph_CollectionBookSectionPanel");

	Params::UCollectionBookSectionPanel_C_ExecuteUbergraph_CollectionBookSectionPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate1 = K2Node_CreateDelegate_OutputDelegate1;
	Parms.K2Node_CreateDelegate_OutputDelegate2 = K2Node_CreateDelegate_OutputDelegate2;
	Parms.K2Node_Event_Section = K2Node_Event_Section;
	Parms.K2Node_CreateDelegate_OutputDelegate3 = K2Node_CreateDelegate_OutputDelegate3;
	Parms.K2Node_CreateDelegate_OutputDelegate4 = K2Node_CreateDelegate_OutputDelegate4;

	UObject::ProcessEvent(Func, &Parms);

}

}


