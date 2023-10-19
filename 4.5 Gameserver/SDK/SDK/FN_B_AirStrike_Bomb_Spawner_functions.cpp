#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C
// (Actor)

class UClass* AB_AirStrike_Bomb_Spawner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_AirStrike_Bomb_Spawner_C");

	return Clss;
}


// B_AirStrike_Bomb_Spawner_C B_AirStrike_Bomb_Spawner.Default__B_AirStrike_Bomb_Spawner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_AirStrike_Bomb_Spawner_C* AB_AirStrike_Bomb_Spawner_C::GetDefaultObj()
{
	static class AB_AirStrike_Bomb_Spawner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_AirStrike_Bomb_Spawner_C*>(AB_AirStrike_Bomb_Spawner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_AirStrike_Bomb_Spawner_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_AirStrike_Bomb_Spawner_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.InitBombSpawn
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InFortPlayerPawn                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             InSpawnLocations                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// struct FFortGameplayEffectContainerSpecInEffectOnExplode                                                (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FTransform                  InBombInitTransform                                              (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)

void AB_AirStrike_Bomb_Spawner_C::InitBombSpawn(class AFortPlayerPawn* InFortPlayerPawn, TArray<struct FVector>& InSpawnLocations, const struct FFortGameplayEffectContainerSpec& InEffectOnExplode, const struct FTransform& InBombInitTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_AirStrike_Bomb_Spawner_C", "InitBombSpawn");

	Params::AB_AirStrike_Bomb_Spawner_C_InitBombSpawn_Params Parms{};

	Parms.InFortPlayerPawn = InFortPlayerPawn;
	Parms.InSpawnLocations = InSpawnLocations;
	Parms.InEffectOnExplode = InEffectOnExplode;
	Parms.InBombInitTransform = InBombInitTransform;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.BombSpawnLoop
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_AirStrike_Bomb_Spawner_C::BombSpawnLoop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_AirStrike_Bomb_Spawner_C", "BombSpawnLoop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_AirStrike_Bomb_Spawner.B_AirStrike_Bomb_Spawner_C.ExecuteUbergraph_B_AirStrike_Bomb_Spawner
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Array_Get_Item                                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_CustomEvent_InFortPlayerPawn                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FVector>             K2Node_CustomEvent_InSpawnLocations                              (ConstParm, ZeroConstructor, ReferenceParm)
// struct FFortGameplayEffectContainerSpecK2Node_CustomEvent_InEffectOnExplode                             (None)
// struct FTransform                  K2Node_CustomEvent_InBombInitTransform                           (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_TransformLocation_ReturnValue                           (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         CallFunc_SpawnProjectile_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor)

void AB_AirStrike_Bomb_Spawner_C::ExecuteUbergraph_B_AirStrike_Bomb_Spawner(int32 EntryPoint, const struct FVector& CallFunc_Array_Get_Item, class AFortPlayerPawn* K2Node_CustomEvent_InFortPlayerPawn, TArray<struct FVector>& K2Node_CustomEvent_InSpawnLocations, const struct FFortGameplayEffectContainerSpec& K2Node_CustomEvent_InEffectOnExplode, const struct FTransform& K2Node_CustomEvent_InBombInitTransform, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_AirStrike_Bomb_Spawner_C", "ExecuteUbergraph_B_AirStrike_Bomb_Spawner");

	Params::AB_AirStrike_Bomb_Spawner_C_ExecuteUbergraph_B_AirStrike_Bomb_Spawner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_CustomEvent_InFortPlayerPawn = K2Node_CustomEvent_InFortPlayerPawn;
	Parms.K2Node_CustomEvent_InSpawnLocations = K2Node_CustomEvent_InSpawnLocations;
	Parms.K2Node_CustomEvent_InEffectOnExplode = K2Node_CustomEvent_InEffectOnExplode;
	Parms.K2Node_CustomEvent_InBombInitTransform = K2Node_CustomEvent_InBombInitTransform;
	Parms.CallFunc_TransformLocation_ReturnValue = CallFunc_TransformLocation_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SpawnProjectile_ReturnValue = CallFunc_SpawnProjectile_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


