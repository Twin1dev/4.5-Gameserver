#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x240 - 0x238)
// WidgetBlueprintGeneratedClass AthenaKillFeedItem.AthenaKillFeedItem_C
class UAthenaKillFeedItem_C : public UFortHUDElementWidget
{
public:
	class URichTextBlock*                        KillText;                                          // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaKillFeedItem_C* GetDefaultObj();

	void SetText(class FText Text);
};

}


