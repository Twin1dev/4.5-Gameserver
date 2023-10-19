#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BTTask_AlwaysFail.BTTask_AlwaysFail_C
// (None)

class UClass* UBTTask_AlwaysFail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BTTask_AlwaysFail_C");

	return Clss;
}


// BTTask_AlwaysFail_C BTTask_AlwaysFail.Default__BTTask_AlwaysFail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBTTask_AlwaysFail_C* UBTTask_AlwaysFail_C::GetDefaultObj()
{
	static class UBTTask_AlwaysFail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBTTask_AlwaysFail_C*>(UBTTask_AlwaysFail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BTTask_AlwaysFail.BTTask_AlwaysFail_C.ReceiveExecute
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AActor*                      OwnerActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_AlwaysFail_C::ReceiveExecute(class AActor* OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_AlwaysFail_C", "ReceiveExecute");

	Params::UBTTask_AlwaysFail_C_ReceiveExecute_Params Parms{};

	Parms.OwnerActor = OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BTTask_AlwaysFail.BTTask_AlwaysFail_C.ExecuteUbergraph_BTTask_AlwaysFail
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_OwnerActor                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBTTask_AlwaysFail_C::ExecuteUbergraph_BTTask_AlwaysFail(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BTTask_AlwaysFail_C", "ExecuteUbergraph_BTTask_AlwaysFail");

	Params::UBTTask_AlwaysFail_C_ExecuteUbergraph_BTTask_AlwaysFail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OwnerActor = K2Node_Event_OwnerActor;

	UObject::ProcessEvent(Func, &Parms);

}

}


