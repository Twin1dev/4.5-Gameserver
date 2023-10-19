#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaPlayerActionAlert.AthenaPlayerActionAlert_C
// (None)

class UClass* UAthenaPlayerActionAlert_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPlayerActionAlert_C");

	return Clss;
}


// AthenaPlayerActionAlert_C AthenaPlayerActionAlert.Default__AthenaPlayerActionAlert_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaPlayerActionAlert_C* UAthenaPlayerActionAlert_C::GetDefaultObj()
{
	static class UAthenaPlayerActionAlert_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPlayerActionAlert_C*>(UAthenaPlayerActionAlert_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerActionAlert_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayerActionAlert_C", "OnAnimationFinished");

	Params::UAthenaPlayerActionAlert_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.AlertPlayer
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// enum class EAthenaPlayerActionAlertAlert                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DetailText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayerActionAlert_C::AlertPlayer(enum class EAthenaPlayerActionAlert Alert, class FText& DetailText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayerActionAlert_C", "AlertPlayer");

	Params::UAthenaPlayerActionAlert_C_AlertPlayer_Params Parms{};

	Parms.Alert = Alert;
	Parms.DetailText = DetailText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayerActionAlert.AthenaPlayerActionAlert_C.ExecuteUbergraph_AthenaPlayerActionAlert
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaPlayerActionAlertTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EAthenaPlayerActionAlertK2Node_Event_Alert                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_DetailText                                          (ConstParm)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaPlayerActionAlert_C::ExecuteUbergraph_AthenaPlayerActionAlert(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable1, int32 Temp_int_Variable2, class UWidgetAnimation* K2Node_Event_Animation, enum class EAthenaPlayerActionAlert Temp_byte_Variable, enum class EAthenaPlayerActionAlert K2Node_Event_Alert, class FText K2Node_Event_DetailText, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayerActionAlert_C", "ExecuteUbergraph_AthenaPlayerActionAlert");

	Params::UAthenaPlayerActionAlert_C_ExecuteUbergraph_AthenaPlayerActionAlert_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable1 = Temp_int_Variable1;
	Parms.Temp_int_Variable2 = Temp_int_Variable2;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Event_Alert = K2Node_Event_Alert;
	Parms.K2Node_Event_DetailText = K2Node_Event_DetailText;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


