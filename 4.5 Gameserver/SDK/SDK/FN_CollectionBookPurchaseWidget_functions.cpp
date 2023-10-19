#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C
// (None)

class UClass* UCollectionBookPurchaseWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookPurchaseWidget_C");

	return Clss;
}


// CollectionBookPurchaseWidget_C CollectionBookPurchaseWidget.Default__CollectionBookPurchaseWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookPurchaseWidget_C* UCollectionBookPurchaseWidget_C::GetDefaultObj()
{
	static class UCollectionBookPurchaseWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookPurchaseWidget_C*>(UCollectionBookPurchaseWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPurchaseWidget_C::Close(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPurchaseWidget_C", "Close");

	Params::UCollectionBookPurchaseWidget_C_Close_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.SetItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortCollectionBookSlotData SlotData                                                         (BlueprintVisible, BlueprintReadOnly, Parm)

void UCollectionBookPurchaseWidget_C::SetItem(class UFortItem* Item, const struct FFortCollectionBookSlotData& SlotData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPurchaseWidget_C", "SetItem");

	Params::UCollectionBookPurchaseWidget_C_SetItem_Params Parms{};

	Parms.Item = Item;
	Parms.SlotData = SlotData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPurchaseWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPurchaseWidget_C", "BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	Params::UCollectionBookPurchaseWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCollectionBookPurchaseWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPurchaseWidget_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollectionBookPurchaseWidget.CollectionBookPurchaseWidget_C.ExecuteUbergraph_CollectionBookPurchaseWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookPurchaseWidget_C::ExecuteUbergraph_CollectionBookPurchaseWidget(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPurchaseWidget_C", "ExecuteUbergraph_CollectionBookPurchaseWidget");

	Params::UCollectionBookPurchaseWidget_C_ExecuteUbergraph_CollectionBookPurchaseWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


