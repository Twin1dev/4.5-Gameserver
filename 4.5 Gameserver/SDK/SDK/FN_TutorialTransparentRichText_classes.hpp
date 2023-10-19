#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x238 - 0x210)
// WidgetBlueprintGeneratedClass TutorialTransparentRichText.TutorialTransparentRichText_C
class UTutorialTransparentRichText_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UFortRichTextBlock*                    FortRichTextBlock_0;                               // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text;                                              // 0x220(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UTutorialTransparentRichText_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_TutorialTransparentRichText(int32 EntryPoint);
};

}


