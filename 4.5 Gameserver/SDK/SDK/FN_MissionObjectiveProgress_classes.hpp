#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x221 - 0x210)
// WidgetBlueprintGeneratedClass MissionObjectiveProgress.MissionObjectiveProgress_C
class UMissionObjectiveProgress_C : public UCommonUserWidget
{
public:
	class UProgressBar*                          ObjectiveProgressBar;                              // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ProgressBarText;                                   // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bConfigureAsHUD;                                   // 0x220(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UMissionObjectiveProgress_C* GetDefaultObj();

	void GetHeightEstimate(float* Height, float HeightEstimate, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue1, class FText CallFunc_GetText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue);
	void Update(class AFortObjectiveBase* Objective, int32 BarIndex, const struct FLinearColor& CallFunc_BlueprintGetProgressBarColor_ReturnValue, float CallFunc_BlueprintGetProgressBarPercentage_ReturnValue, class FText CallFunc_BlueprintGetProgressBarText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_TextIsEmpty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
};

}


