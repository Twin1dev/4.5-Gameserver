#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C
// (None)

class UClass* UBTTask_AlwaysSuccess_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AlwaysSuccess_C");

	return Clss;
}


// BTTask_AlwaysSuccess_C BTTask_AlwaysSuccess.Default__BTTask_AlwaysSuccess_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_AlwaysSuccess_C* UBTTask_AlwaysSuccess_C::GetDefaultObj()
{
	static class UBTTask_AlwaysSuccess_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AlwaysSuccess_C*>(UBTTask_AlwaysSuccess_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_AlwaysSuccess_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_AlwaysSuccess_C", "ReceiveExecute");

	Params::UBTTask_AlwaysSuccess_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_AlwaysSuccess.BTTask_AlwaysSuccess_C.ExecuteUbergraph_BTTask_AlwaysSuccess
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_AlwaysSuccess_C::ExecuteUbergraph_BTTask_AlwaysSuccess(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_AlwaysSuccess_C", "ExecuteUbergraph_BTTask_AlwaysSuccess");

	Params::UBTTask_AlwaysSuccess_C_ExecuteUbergraph_BTTask_AlwaysSuccess_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


