#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BPI_StormShieldinterface.BPI_StormShieldInterface_C
class IBPI_StormShieldInterface_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IBPI_StormShieldInterface_C* GetDefaultObj();

	void GetOutpostReadyState(bool* ReadyToExpand, bool* ReadyToInstallAmplifier);
	void CanLeaveOutpost(bool* AllowedToLeave);
};

}


