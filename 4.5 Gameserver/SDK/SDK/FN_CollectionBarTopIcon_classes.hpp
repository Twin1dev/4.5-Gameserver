#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x2A8 - 0x210)
// WidgetBlueprintGeneratedClass CollectionBarTopIcon.CollectionBarTopIcon_C
class UCollectionBarTopIcon_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x210(0x8)(Transient, DuplicateTransient)
	class UImage*                                Icon;                                              // 0x218(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSlateBrush                           IconBrush;                                         // 0x220(0x88)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UCollectionBarTopIcon_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_CollectionBarTopIcon(int32 EntryPoint);
};

}


