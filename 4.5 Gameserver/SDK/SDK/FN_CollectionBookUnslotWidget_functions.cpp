#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookUnslotWidget.CollectionBookUnslotWidget_C
// (None)

class UClass* UCollectionBookUnslotWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookUnslotWidget_C");

	return Clss;
}


// CollectionBookUnslotWidget_C CollectionBookUnslotWidget.Default__CollectionBookUnslotWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookUnslotWidget_C* UCollectionBookUnslotWidget_C::GetDefaultObj()
{
	static class UCollectionBookUnslotWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookUnslotWidget_C*>(UCollectionBookUnslotWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.Close
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookUnslotWidget_C::Close(class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookUnslotWidget_C", "Close");

	Params::UCollectionBookUnslotWidget_C_Close_Params Parms{};

	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookUnslotWidget_C::Init(class UFortItem* Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookUnslotWidget_C", "Init");

	Params::UCollectionBookUnslotWidget_C_Init_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookUnslotWidget_C::BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookUnslotWidget_C", "BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature");

	Params::UCollectionBookUnslotWidget_C_BndEvt__ButtonClose_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UCollectionBookUnslotWidget_C::OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookUnslotWidget_C", "OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollectionBookUnslotWidget.CollectionBookUnslotWidget_C.ExecuteUbergraph_CollectionBookUnslotWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCollectionBookUnslotWidget_C::ExecuteUbergraph_CollectionBookUnslotWidget(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookUnslotWidget_C", "ExecuteUbergraph_CollectionBookUnslotWidget");

	Params::UCollectionBookUnslotWidget_C_ExecuteUbergraph_CollectionBookUnslotWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}


