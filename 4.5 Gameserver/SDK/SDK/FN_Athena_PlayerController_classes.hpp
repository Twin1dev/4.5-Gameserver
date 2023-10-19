#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2060 - 0x2050)
// BlueprintGeneratedClass Athena_PlayerController.Athena_PlayerController_C
class AAthena_PlayerController_C : public AFortPlayerControllerAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2050(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       ListenerOverride;                                  // 0x2058(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAthena_PlayerController_C* GetDefaultObj();

	bool IsLocalPlayerFriendsWithSquadMember(class AFortPlayerState* SquadMember, class UFortPartyContext* CallFunc_GetContext_ReturnValue, const struct FFortTeamMemberInfo& CallFunc_GetLocalTeamTeamMemberInfo_TeamMemberInfo, bool CallFunc_GetLocalTeamTeamMemberInfo_ReturnValue, bool CallFunc_IsTeamMemberFriend_ReturnValue);
	void UserConstructionScript();
	void PlayWinEffects(class APawn* FinisherPawn, class UFortWeaponItemDefinition* FinishingWeapon, enum class EDeathCause DeathCause);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Athena_PlayerController(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, bool CallFunc_IsLocalPlayerController_ReturnValue, class UAmbientControllerComponent_Athena_C* CallFunc_AddComponent_ReturnValue, class APawn* K2Node_Event_FinisherPawn, class UFortWeaponItemDefinition* K2Node_Event_FinishingWeapon, enum class EDeathCause K2Node_Event_DeathCause);
};

}


