#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x480 - 0x358)
// WidgetBlueprintGeneratedClass AutorunLockZone.AutorunLockZone_C
class UAutorunLockZone_C : public UFortAutorunLockZone
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x358(0x8)(Transient, DuplicateTransient)
	class UImage*                                Image_80;                                          // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        Target_Opacity;                                    // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3452[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           RunLockHighlight;                                  // 0x370(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           RunLockNormal;                                     // 0x3F8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAutorunLockZone_C* GetDefaultObj();

	void OnInZoneChanged(bool bNewIsInZone);
	void ExecuteUbergraph_AutorunLockZone(int32 EntryPoint, bool K2Node_Event_bNewIsInZone);
};

}


