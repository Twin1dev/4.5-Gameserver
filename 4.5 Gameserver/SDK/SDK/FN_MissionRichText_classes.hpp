#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x241 - 0x210)
// WidgetBlueprintGeneratedClass MissionRichText.MissionRichText_C
class UMissionRichText_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UFortRichTextBlock*                    TextBlockHUD;                                      // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                    TextBlockNonHUD;                                   // 0x220(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  TextToDisplay;                                     // 0x228(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bConfigureAsHUD;                                   // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UMissionRichText_C* GetDefaultObj();

	void Update(class FText Text);
	void Construct();
	void ExecuteUbergraph_MissionRichText(int32 EntryPoint);
};

}


