#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C
// (Actor)

class UClass* AB_BGA_BotTurret_Parent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_BGA_BotTurret_Parent_C");

	return Clss;
}


// B_BGA_BotTurret_Parent_C B_BGA_BotTurret_Parent.Default__B_BGA_BotTurret_Parent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_BGA_BotTurret_Parent_C* AB_BGA_BotTurret_Parent_C::GetDefaultObj()
{
	static class AB_BGA_BotTurret_Parent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_BGA_BotTurret_Parent_C*>(AB_BGA_BotTurret_Parent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.OnRep_BotData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::OnRep_BotData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "OnRep_BotData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.LeftOrRightGunFired
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::LeftOrRightGunFired(int32 A)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "LeftOrRightGunFired");

	Params::AB_BGA_BotTurret_Parent_C_LeftOrRightGunFired_Params Parms{};

	Parms.A = A;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetGunSpawnRotFromSocket
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        SocketName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     InVect                                                           (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::SetGunSpawnRotFromSocket(class FName SocketName, const struct FVector& InVect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "SetGunSpawnRotFromSocket");

	Params::AB_BGA_BotTurret_Parent_C_SetGunSpawnRotFromSocket_Params Parms{};

	Parms.SocketName = SocketName;
	Parms.InVect = InVect;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.PassBotInfo
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              WarmupTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              BotDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              FireRate                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Radius                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              RadiusDefault                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ExplosionUpgrade                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_BGA_BotTurret_Parent_C::PassBotInfo(float WarmupTime, float BotDuration, float FireRate, float Radius, float RadiusDefault, bool ExplosionUpgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "PassBotInfo");

	Params::AB_BGA_BotTurret_Parent_C_PassBotInfo_Params Parms{};

	Parms.WarmupTime = WarmupTime;
	Parms.BotDuration = BotDuration;
	Parms.FireRate = FireRate;
	Parms.Radius = Radius;
	Parms.RadiusDefault = RadiusDefault;
	Parms.ExplosionUpgrade = ExplosionUpgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.SetTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortAIPawn*                 Target                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::SetTarget(class AFortAIPawn* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "SetTarget");

	Params::AB_BGA_BotTurret_Parent_C_SetTarget_Params Parms{};

	Parms.Target = Target;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.Ready
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::Ready()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "Ready");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.ExecuteUbergraph_B_BGA_BotTurret_Parent
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAIPawn*                 K2Node_CustomEvent_Target                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_WarmUpTime                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_BotDuration                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_FireRate                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Radius                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_RadiusDefault                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_ExplosionUpgrade                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFBotTurretData             K2Node_MakeStruct_FBotTurretData                                 (HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_BGA_BotTurret_Parent_C::ExecuteUbergraph_B_BGA_BotTurret_Parent(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, class AFortAIPawn* K2Node_CustomEvent_Target, float K2Node_CustomEvent_WarmUpTime, float K2Node_CustomEvent_BotDuration, float K2Node_CustomEvent_FireRate, float K2Node_CustomEvent_Radius, float K2Node_CustomEvent_RadiusDefault, bool K2Node_CustomEvent_ExplosionUpgrade, const struct FFBotTurretData& K2Node_MakeStruct_FBotTurretData, bool CallFunc_HasAuthority_ReturnValue1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "ExecuteUbergraph_B_BGA_BotTurret_Parent");

	Params::AB_BGA_BotTurret_Parent_C_ExecuteUbergraph_B_BGA_BotTurret_Parent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_Target = K2Node_CustomEvent_Target;
	Parms.K2Node_CustomEvent_WarmUpTime = K2Node_CustomEvent_WarmUpTime;
	Parms.K2Node_CustomEvent_BotDuration = K2Node_CustomEvent_BotDuration;
	Parms.K2Node_CustomEvent_FireRate = K2Node_CustomEvent_FireRate;
	Parms.K2Node_CustomEvent_Radius = K2Node_CustomEvent_Radius;
	Parms.K2Node_CustomEvent_RadiusDefault = K2Node_CustomEvent_RadiusDefault;
	Parms.K2Node_CustomEvent_ExplosionUpgrade = K2Node_CustomEvent_ExplosionUpgrade;
	Parms.K2Node_MakeStruct_FBotTurretData = K2Node_MakeStruct_FBotTurretData;
	Parms.CallFunc_HasAuthority_ReturnValue1 = CallFunc_HasAuthority_ReturnValue1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::BotExplode__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "BotExplode__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotExplosionWarning__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_BGA_BotTurret_Parent_C::BotExplosionWarning__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "BotExplosionWarning__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_BGA_BotTurret_Parent.B_BGA_BotTurret_Parent_C.BotFired__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Left                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_BGA_BotTurret_Parent_C::BotFired__DelegateSignature(int32 Left)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_BGA_BotTurret_Parent_C", "BotFired__DelegateSignature");

	Params::AB_BGA_BotTurret_Parent_C_BotFired__DelegateSignature_Params Parms{};

	Parms.Left = Left;

	UObject::ProcessEvent(Func, &Parms);

}

}


