#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
// (Actor, PlayerController)

class UClass* AAthena_PlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerController_C");

	return Clss;
}


// Athena_PlayerController_C Athena_PlayerController.Default__Athena_PlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAthena_PlayerController_C* AAthena_PlayerController_C::GetDefaultObj()
{
	static class AAthena_PlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAthena_PlayerController_C*>(AAthena_PlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Athena_PlayerController.Athena_PlayerController_C.IsLocalPlayerFriendsWithSquadMember
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerState*            SquadMember                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo               (HasGetValueTypeHash)
// bool                               CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsTeamMemberFriend_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

bool AAthena_PlayerController_C::IsLocalPlayerFriendsWithSquadMember(class AFortPlayerState* SquadMember, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo, bool CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue, bool CallFunc_IsTeamMemberFriend_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "IsLocalPlayerFriendsWithSquadMember");

	Params::AAthena_PlayerController_C_IsLocalPlayerFriendsWithSquadMember_Params Parms{};

	Parms.SquadMember = SquadMember;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo = CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo;
	Parms.CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue = CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue;
	Parms.CallFunc_IsTeamMemberFriend_ReturnValue = CallFunc_IsTeamMemberFriend_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Athena_PlayerController.Athena_PlayerController_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_PlayerController.Athena_PlayerController_C.PlayWinEffects
// (Event, Public, BlueprintEvent)
// Parameters:
// class APawn*                       FinisherPawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   FinishingWeapon                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeathCause             DeathCause                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "PlayWinEffects");

	Params::AAthena_PlayerController_C_PlayWinEffects_Params Parms{};

	Parms.FinisherPawn = FinisherPawn;
	Parms.FinishingWeapon = FinishingWeapon;
	Parms.DeathCause = DeathCause;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAthena_PlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Athena_PlayerController.Athena_PlayerController_C.ExecuteUbergraph_Athena_PlayerController
// (HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocalPlayerController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAmbientControllerComponent_Athena_C*CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       K2Node_Event_FinisherPawn                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponItemDefinition*   K2Node_Event_FinishingWeapon                                     (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDeathCause             K2Node_Event_DeathCause                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAthena_PlayerController_C::ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocalPlayerController_ReturnValue, class UAmbientControllerComponent_Athena_C* CallFunc_AddComponent_ReturnValue, class APawn* K2Node_Event_FinisherPawn, class UFortWeaponItemDefinition* K2Node_Event_FinishingWeapon, enum class EDeathCause K2Node_Event_DeathCause)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Athena_PlayerController_C", "ExecuteUbergraph_Athena_PlayerController");

	Params::AAthena_PlayerController_C_ExecuteUbergraph_Athena_PlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_IsLocalPlayerController_ReturnValue = CallFunc_IsLocalPlayerController_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.K2Node_Event_FinisherPawn = K2Node_Event_FinisherPawn;
	Parms.K2Node_Event_FinishingWeapon = K2Node_Event_FinishingWeapon;
	Parms.K2Node_Event_DeathCause = K2Node_Event_DeathCause;

	UObject::ProcessEvent(Func, &Parms);

}

}


