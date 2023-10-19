#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x338 - 0x328)
// BlueprintGeneratedClass StoreCardReveal_Parent.StoreCardReveal_Parent_C
class AStoreCardReveal_Parent_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x328(0x8)(Transient, DuplicateTransient)
	class USceneComponent*                       PinataSceneRoot;                                   // 0x330(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AStoreCardReveal_Parent_C* GetDefaultObj();

	void UserConstructionScript();
	void InitiatePinata();
	void ExecuteUbergraph_StoreCardReveal_Parent(int32 EntryPoint);
};

}


