#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C
// (Actor)

class UClass* AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Melee_Impact_Pickaxe_Athena_DarkEagle_C");

	return Clss;
}


// B_Melee_Impact_Pickaxe_Athena_DarkEagle_C B_Melee_Impact_Pickaxe_Athena_DarkEagle.Default__B_Melee_Impact_Pickaxe_Athena_DarkEagle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C* AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::GetDefaultObj()
{
	static class AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C*>(AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Melee_Impact_Pickaxe_Athena_DarkEagle_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Melee_Impact_Pickaxe_Athena_DarkEagle_C", "OnPlayWeaponFireFX");

	Params::AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Melee_Impact_Pickaxe_Athena_DarkEagle_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Melee_Impact_Pickaxe_Athena_DarkEagle.B_Melee_Impact_Pickaxe_Athena_DarkEagle_C.ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C::ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, bool CallFunc_IsValid_ReturnValue1, float CallFunc_GetGameTimeInSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Melee_Impact_Pickaxe_Athena_DarkEagle_C", "ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle");

	Params::AB_Melee_Impact_Pickaxe_Athena_DarkEagle_C_ExecuteUbergraph_B_Melee_Impact_Pickaxe_Athena_DarkEagle_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


