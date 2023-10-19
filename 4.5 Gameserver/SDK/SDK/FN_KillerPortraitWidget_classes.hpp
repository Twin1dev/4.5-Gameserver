#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x220 - 0x210)
// WidgetBlueprintGeneratedClass KillerPortraitWidget.KillerPortraitWidget_C
class UKillerPortraitWidget_C : public UCommonUserWidget
{
public:
	class UCommonTextBlock*                      KillerNameText;                                    // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                KillerPortrait;                                    // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKillerPortraitWidget_C* GetDefaultObj();

	void Init(struct FFortKillerVisualInfo& KillerVisualInfo, bool CallFunc_IsValid_ReturnValue);
};

}


