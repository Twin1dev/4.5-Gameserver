#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass AthenaTeamCountSlot.AthenaTeamCountSlot_C
class UAthenaTeamCountSlot_C : public UCommonUserWidget
{
public:
	class URichTextBlock*                        TeamCount;                                         // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        TeamName;                                          // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaTeamCountSlot_C* GetDefaultObj();

	void SetTeamSlotData(const struct FAthenaTeamCountSlotData& TeamSlotData, float DrawOpacity);
};

}


