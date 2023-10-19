#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x268 - 0x250)
// WidgetBlueprintGeneratedClass AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C
class UAthenaPlayersLeftWidget_C : public UAthenaPlayersLeftBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x250(0x8)(Transient, DuplicateTransient)
	class UImage*                                PlayersImage;                                      // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        PlayersLeftText;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaPlayersLeftWidget_C* GetDefaultObj();

	void SetPlayersLeftText(class FText& PlayersText);
	void ExecuteUbergraph_AthenaPlayersLeftWidget(int32 EntryPoint, class FText K2Node_Event_PlayersText);
};

}


