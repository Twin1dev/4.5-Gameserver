#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C
// (Actor)

class UClass* AB_Dev_Test_Pickaxe_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Dev_Test_Pickaxe_C");

	return Clss;
}


// B_Dev_Test_Pickaxe_C B_Dev_Test_Pickaxe.Default__B_Dev_Test_Pickaxe_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Dev_Test_Pickaxe_C* AB_Dev_Test_Pickaxe_C::GetDefaultObj()
{
	static class AB_Dev_Test_Pickaxe_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Dev_Test_Pickaxe_C*>(AB_Dev_Test_Pickaxe_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Dev_Test_Pickaxe_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Dev_Test_Pickaxe_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.K2_OnProgressiveCosmeticWatchedStatChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Dev_Test_Pickaxe_C::K2_OnProgressiveCosmeticWatchedStatChanged(class FName StatName, int32 NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Dev_Test_Pickaxe_C", "K2_OnProgressiveCosmeticWatchedStatChanged");

	Params::AB_Dev_Test_Pickaxe_C_K2_OnProgressiveCosmeticWatchedStatChanged_Params Parms{};

	Parms.StatName = StatName;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Dev_Test_Pickaxe.B_Dev_Test_Pickaxe_C.ExecuteUbergraph_B_Dev_Test_Pickaxe
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_Event_StatName                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewValue                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Dev_Test_Pickaxe_C::ExecuteUbergraph_B_Dev_Test_Pickaxe(int32 EntryPoint, class FName K2Node_Event_StatName, int32 K2Node_Event_NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Dev_Test_Pickaxe_C", "ExecuteUbergraph_B_Dev_Test_Pickaxe");

	Params::AB_Dev_Test_Pickaxe_C_ExecuteUbergraph_B_Dev_Test_Pickaxe_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_StatName = K2Node_Event_StatName;
	Parms.K2Node_Event_NewValue = K2Node_Event_NewValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


