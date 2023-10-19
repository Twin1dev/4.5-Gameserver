#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3F8 - 0x3E8)
// WidgetBlueprintGeneratedClass AthenaCompass.AthenaCompass_C
class UAthenaCompass_C : public UAthenaCompassBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(Transient, DuplicateTransient)
	class UImage*                                CompassImage_DONOTADDMOREWIDGETS;                  // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaCompass_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_AthenaCompass(int32 EntryPoint, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}


