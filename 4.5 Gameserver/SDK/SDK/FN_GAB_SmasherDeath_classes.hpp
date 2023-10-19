#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xAA8 - 0xAA0)
// BlueprintGeneratedClass GAB_SmasherDeath.GAB_SmasherDeath_C
class UGAB_SmasherDeath_C : public UGAB_GenericDeath_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA0(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGAB_SmasherDeath_C* GetDefaultObj();

	void ExecuteUbergraph_GAB_SmasherDeath(int32 EntryPoint);
};

}


