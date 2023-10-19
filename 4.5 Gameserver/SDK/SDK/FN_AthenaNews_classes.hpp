#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x260 - 0x258)
// WidgetBlueprintGeneratedClass AthenaNews.AthenaNews_C
class UAthenaNews_C : public UFortAthenaNewsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UAthenaNews_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_AthenaNews(int32 EntryPoint);
};

}


