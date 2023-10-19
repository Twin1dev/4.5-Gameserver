#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// BlueprintGeneratedClass Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C
class UGen_Interact_UnregisterFocus_C : public UFortMissionEventParams
{
public:
	class AActor*                                ActorToUnregister;                                 // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGen_Interact_UnregisterFocus_C* GetDefaultObj();

	void BreakParams(class AActor** ActorToUnregisterRegister);
	void SetParams(class AActor* ActorToUnregister, class UGen_Interact_UnregisterFocus_C** ThisObject);
};

}


