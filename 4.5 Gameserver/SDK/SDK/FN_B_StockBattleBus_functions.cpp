#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_StockBattleBus.B_StockBattleBus_C
// (Actor)

class UClass* AB_StockBattleBus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_StockBattleBus_C");

	return Clss;
}


// B_StockBattleBus_C B_StockBattleBus.Default__B_StockBattleBus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_StockBattleBus_C* AB_StockBattleBus_C::GetDefaultObj()
{
	static class AB_StockBattleBus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_StockBattleBus_C*>(AB_StockBattleBus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_StockBattleBus.B_StockBattleBus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StockBattleBus_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "UserConstructionScript");

	Params::AB_StockBattleBus_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Bus_Music_Fader__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "Bus Music Fader__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Bus Music Fader__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Bus_Music_Fader__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "Bus Music Fader__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Light Flash Timeline__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Light_Flash_Timeline__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "Light Flash Timeline__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Light Flash Timeline__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Light_Flash_Timeline__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "Light Flash Timeline__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Light Flash Timeline__Loop__EventFunc
// (BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Light_Flash_Timeline__Loop__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "Light Flash Timeline__Loop__EventFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_StockBattleBus.B_StockBattleBus_C.Start Audio
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::Start_Audio()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "Start Audio");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_StockBattleBus.B_StockBattleBus_C.GrabAudioReferences
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::GrabAudioReferences()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "GrabAudioReferences");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StockBattleBus_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "ReceiveEndPlay");

	Params::AB_StockBattleBus_C_ReceiveEndPlay_Params Parms{};

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_StockBattleBus.B_StockBattleBus_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_StockBattleBus_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_StockBattleBus.B_StockBattleBus_C.ExecuteUbergraph_B_StockBattleBus
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetFlightLoopingSound_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  CallFunc_GetFlightLoopingMusic_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_StockBattleBus_C::ExecuteUbergraph_B_StockBattleBus(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, bool CallFunc_IsValid_ReturnValue2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue1, class USoundBase* CallFunc_GetFlightLoopingSound_ReturnValue, class USoundBase* CallFunc_GetFlightLoopingMusic_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, float CallFunc_Divide_FloatFloat_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_StockBattleBus_C", "ExecuteUbergraph_B_StockBattleBus");

	Params::AB_StockBattleBus_C_ExecuteUbergraph_B_StockBattleBus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue1 = CallFunc_IsValid_ReturnValue1;
	Parms.CallFunc_IsValid_ReturnValue2 = CallFunc_IsValid_ReturnValue2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue1 = CallFunc_SpawnSoundAttached_ReturnValue1;
	Parms.CallFunc_GetFlightLoopingSound_ReturnValue = CallFunc_GetFlightLoopingSound_ReturnValue;
	Parms.CallFunc_GetFlightLoopingMusic_ReturnValue = CallFunc_GetFlightLoopingMusic_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue1 = CallFunc_Divide_FloatFloat_ReturnValue1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


