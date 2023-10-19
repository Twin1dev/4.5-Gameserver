#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xBB8 - 0xBB0)
// BlueprintGeneratedClass B_MissileBattery_Homing_Placement.B_MissileBattery_Homing_Placement_C
class AB_MissileBattery_Homing_Placement_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_MissileBattery_Homing_Placement_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_B_MissileBattery_Homing_Placement(int32 EntryPoint);
};

}


