#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x248 - 0x208)
// WidgetBlueprintGeneratedClass SimpleMaterialProgressBar.SimpleMaterialProgressBar_C
class USimpleMaterialProgressBar_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x208(0x8)(Transient, DuplicateTransient)
	class UImage*                                Bar;                                               // 0x210(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FLinearColor                          ColorA;                                            // 0x218(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorB;                                            // 0x228(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ColorBackground;                                   // 0x238(0x10)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USimpleMaterialProgressBar_C* GetDefaultObj();

	void SetColorB(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetColorA(const struct FLinearColor& Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void SetProgress(float Value, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_SimpleMaterialProgressBar(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime);
};

}


