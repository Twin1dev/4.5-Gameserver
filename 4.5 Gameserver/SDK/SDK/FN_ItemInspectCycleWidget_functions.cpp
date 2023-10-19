#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemInspectCycleWidget.ItemInspectCycleWidget_C
// (None)

class UClass* UItemInspectCycleWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemInspectCycleWidget_C");

	return Clss;
}


// ItemInspectCycleWidget_C ItemInspectCycleWidget.Default__ItemInspectCycleWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemInspectCycleWidget_C* UItemInspectCycleWidget_C::GetDefaultObj()
{
	static class UItemInspectCycleWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemInspectCycleWidget_C*>(UItemInspectCycleWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectCycleWidget_C::BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectCycleWidget_C", "BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectCycleWidget_C_BndEvt__LeftButton_K2Node_ComponentBoundEvent_135_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectCycleWidget_C::BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectCycleWidget_C", "BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature");

	Params::UItemInspectCycleWidget_C_BndEvt__RightButton_K2Node_ComponentBoundEvent_152_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.OnItemCycled
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   OldItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   NewItem                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OffsetFromPreviousItem                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectCycleWidget_C::OnItemCycled(class UFortItem* OldItem, class UFortItem* NewItem, int32 OffsetFromPreviousItem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectCycleWidget_C", "OnItemCycled");

	Params::UItemInspectCycleWidget_C_OnItemCycled_Params Parms{};

	Parms.OldItem = OldItem;
	Parms.NewItem = NewItem;
	Parms.OffsetFromPreviousItem = OffsetFromPreviousItem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemInspectCycleWidget.ItemInspectCycleWidget_C.ExecuteUbergraph_ItemInspectCycleWidget
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputContext*         CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   K2Node_Event_OldItem                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_NewItem                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_OffsetFromPreviousItem                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button1                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemInspectCycleWidget_C::ExecuteUbergraph_ItemInspectCycleWidget(int32 EntryPoint, class UCommonInputContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UFortItem* K2Node_Event_OldItem, class UFortItem* K2Node_Event_NewItem, int32 K2Node_Event_OffsetFromPreviousItem, bool CallFunc_Less_IntInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemInspectCycleWidget_C", "ExecuteUbergraph_ItemInspectCycleWidget");

	Params::UItemInspectCycleWidget_C_ExecuteUbergraph_ItemInspectCycleWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Event_OldItem = K2Node_Event_OldItem;
	Parms.K2Node_Event_NewItem = K2Node_Event_NewItem;
	Parms.K2Node_Event_OffsetFromPreviousItem = K2Node_Event_OffsetFromPreviousItem;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button1 = K2Node_ComponentBoundEvent_Button1;

	UObject::ProcessEvent(Func, &Parms);

}

}


