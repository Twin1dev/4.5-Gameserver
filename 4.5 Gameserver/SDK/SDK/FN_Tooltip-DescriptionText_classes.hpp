#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x230 - 0x208)
// WidgetBlueprintGeneratedClass Tooltip-DescriptionText.Tooltip-DescriptionText_C
class UTooltipMinusDescriptionText_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UTextBlock*                            TextItemDescription;                               // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  DescriptionText;                                   // 0x218(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UTooltipMinusDescriptionText_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_TooltipMinusDescriptionText(int32 EntryPoint);
};

}


