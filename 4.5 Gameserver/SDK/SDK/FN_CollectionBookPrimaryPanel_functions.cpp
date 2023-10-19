#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C
// (None)

class UClass* UCollectionBookPrimaryPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CollectionBookPrimaryPanel_C");

	return Clss;
}


// CollectionBookPrimaryPanel_C CollectionBookPrimaryPanel.Default__CollectionBookPrimaryPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCollectionBookPrimaryPanel_C* UCollectionBookPrimaryPanel_C::GetDefaultObj()
{
	static class UCollectionBookPrimaryPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCollectionBookPrimaryPanel_C*>(UCollectionBookPrimaryPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.OnSummonInfoPanelExecuted
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPrimaryPanel_C::OnSummonInfoPanelExecuted(bool* bPassThrough)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "OnSummonInfoPanelExecuted");

	Params::UCollectionBookPrimaryPanel_C_OnSummonInfoPanelExecuted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.HandleDisplayInfoBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCollectionBookPrimaryPanel_C::HandleDisplayInfoBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "HandleDisplayInfoBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CollectionBookPrimaryPanel.CollectionBookPrimaryPanel_C.ExecuteUbergraph_CollectionBookPrimaryPanel
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUIManagerWidget_NUI*    CallFunc_GetUIManagerWidget_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetCachedWidget_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHelpWidget_C*               K2Node_DynamicCast_AsHelp_Widget                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCollectionBookPrimaryPanel_C::ExecuteUbergraph_CollectionBookPrimaryPanel(int32 EntryPoint, class UFortUIManagerWidget_NUI* CallFunc_GetUIManagerWidget_ReturnValue, class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class UHelpWidget_C* K2Node_DynamicCast_AsHelp_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CollectionBookPrimaryPanel_C", "ExecuteUbergraph_CollectionBookPrimaryPanel");

	Params::UCollectionBookPrimaryPanel_C_ExecuteUbergraph_CollectionBookPrimaryPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUIManagerWidget_ReturnValue = CallFunc_GetUIManagerWidget_ReturnValue;
	Parms.CallFunc_GetCachedWidget_ReturnValue = CallFunc_GetCachedWidget_ReturnValue;
	Parms.K2Node_DynamicCast_AsHelp_Widget = K2Node_DynamicCast_AsHelp_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


