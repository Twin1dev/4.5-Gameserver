#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x230 - 0x228)
// WidgetBlueprintGeneratedClass FullPartyBarAthena.FullPartyBarAthena_C
class UFullPartyBarAthena_C : public UAthenaPartyBar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UFullPartyBarAthena_C* GetDefaultObj();

	void Initialize();
	void Construct();
	void ExecuteUbergraph_FullPartyBarAthena(int32 EntryPoint);
};

}


