#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C
// (Actor)

class UClass* AAbilityDecoTool_SupplyDrop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AbilityDecoTool_SupplyDrop_C");

	return Clss;
}


// AbilityDecoTool_SupplyDrop_C AbilityDecoTool_SupplyDrop.Default__AbilityDecoTool_SupplyDrop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAbilityDecoTool_SupplyDrop_C* AAbilityDecoTool_SupplyDrop_C::GetDefaultObj()
{
	static class AAbilityDecoTool_SupplyDrop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAbilityDecoTool_SupplyDrop_C*>(AAbilityDecoTool_SupplyDrop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideMeshAndPlacement
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInHide                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_SupplyDrop_C::HideMeshAndPlacement(bool bInHide, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_BooleanAND_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_SupplyDrop_C", "HideMeshAndPlacement");

	Params::AAbilityDecoTool_SupplyDrop_C_HideMeshAndPlacement_Params Parms{};

	Parms.bInHide = bInHide;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_SupplyDrop_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_SupplyDrop_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.BPOnSetDecoObjectPreview
// (Event, Public, BlueprintEvent)
// Parameters:
// class AFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_SupplyDrop_C::BPOnSetDecoObjectPreview(class AFortDecoHelper* FortDecoHelper)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_SupplyDrop_C", "BPOnSetDecoObjectPreview");

	Params::AAbilityDecoTool_SupplyDrop_C_BPOnSetDecoObjectPreview_Params Parms{};

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.Show
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAbilityDecoTool_SupplyDrop_C::Show()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_SupplyDrop_C", "Show");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.HideFor
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InTime                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAbilityDecoTool_SupplyDrop_C::HideFor(float InTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_SupplyDrop_C", "HideFor");

	Params::AAbilityDecoTool_SupplyDrop_C_HideFor_Params Parms{};

	Parms.InTime = InTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AbilityDecoTool_SupplyDrop.AbilityDecoTool_SupplyDrop_C.ExecuteUbergraph_AbilityDecoTool_SupplyDrop
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// float                              K2Node_CustomEvent_InTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void AAbilityDecoTool_SupplyDrop_C::ExecuteUbergraph_AbilityDecoTool_SupplyDrop(int32 EntryPoint, class AFortDecoHelper* K2Node_Event_FortDecoHelper, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_CustomEvent_InTime, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AbilityDecoTool_SupplyDrop_C", "ExecuteUbergraph_AbilityDecoTool_SupplyDrop");

	Params::AAbilityDecoTool_SupplyDrop_C_ExecuteUbergraph_AbilityDecoTool_SupplyDrop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_InTime = K2Node_CustomEvent_InTime;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


