#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x218 - 0x210)
// WidgetBlueprintGeneratedClass ActiveModifierItemHUD.ActiveModifierItemHUD_C
class UActiveModifierItemHUD_C : public UCommonUserWidget
{
public:
	class UImage*                                ImageModifier;                                     // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UActiveModifierItemHUD_C* GetDefaultObj();

	void AssignIcon(const struct FSlateBrush& InIconSlateBrush);
};

}


