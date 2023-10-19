#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C
// (None)

class UClass* UTask_SetBlackboardBoolValues_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Task_SetBlackboardBoolValues_C");

	return Clss;
}


// Task_SetBlackboardBoolValues_C Task_SetBlackboardBoolValues.Default__Task_SetBlackboardBoolValues_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_SetBlackboardBoolValues_C* UTask_SetBlackboardBoolValues_C::GetDefaultObj()
{
	static class UTask_SetBlackboardBoolValues_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_SetBlackboardBoolValues_C*>(UTask_SetBlackboardBoolValues_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_SetBlackboardBoolValues_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_SetBlackboardBoolValues_C", "ReceiveExecute");

	Params::UTask_SetBlackboardBoolValues_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Task_SetBlackboardBoolValues.Task_SetBlackboardBoolValues_C.ExecuteUbergraph_Task_SetBlackboardBoolValues
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTask_SetBlackboardBoolValues_C::ExecuteUbergraph_Task_SetBlackboardBoolValues(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Task_SetBlackboardBoolValues_C", "ExecuteUbergraph_Task_SetBlackboardBoolValues");

	Params::UTask_SetBlackboardBoolValues_C_ExecuteUbergraph_Task_SetBlackboardBoolValues_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


