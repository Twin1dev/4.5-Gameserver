#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x900 - 0x888)
// WidgetBlueprintGeneratedClass NodeBackground.NodeBackground_C
class UNodeBackground_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x888(0x8)(Transient, DuplicateTransient)
	enum class ESkillTreeGroups                  Group;                                             // 0x890(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4CCC[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSkillTreeGroupColors                 GroupColors;                                       // 0x894(0x54)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         Horizontal;                                        // 0x8E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4CCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                VerticalStyle;                                     // 0x8F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                HorizontalStyle;                                   // 0x8F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNodeBackground_C* GetDefaultObj();

	void SetBackgroundColor(enum class ESkillTreeGroups Groups, enum class ESkillTreeGroups Temp_byte_Variable, class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void ExecuteUbergraph_NodeBackground(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


