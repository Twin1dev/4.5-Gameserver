#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPI_StormShieldinterface.BPI_StormShieldInterface_C
// (None)

class UClass* IBPI_StormShieldInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPI_StormShieldInterface_C");

	return Clss;
}


// BPI_StormShieldInterface_C BPI_StormShieldinterface.Default__BPI_StormShieldInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IBPI_StormShieldInterface_C* IBPI_StormShieldInterface_C::GetDefaultObj()
{
	static class IBPI_StormShieldInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IBPI_StormShieldInterface_C*>(IBPI_StormShieldInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.GetOutpostReadyState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReadyToExpand                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               ReadyToInstallAmplifier                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormShieldInterface_C::GetOutpostReadyState(bool* ReadyToExpand, bool* ReadyToInstallAmplifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormShieldInterface_C", "GetOutpostReadyState");

	Params::IBPI_StormShieldInterface_C_GetOutpostReadyState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ReadyToExpand != nullptr)
		*ReadyToExpand = Parms.ReadyToExpand;

	if (ReadyToInstallAmplifier != nullptr)
		*ReadyToInstallAmplifier = Parms.ReadyToInstallAmplifier;

}


// Function BPI_StormShieldinterface.BPI_StormShieldInterface_C.CanLeaveOutpost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AllowedToLeave                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void IBPI_StormShieldInterface_C::CanLeaveOutpost(bool* AllowedToLeave)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPI_StormShieldInterface_C", "CanLeaveOutpost");

	Params::IBPI_StormShieldInterface_C_CanLeaveOutpost_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AllowedToLeave != nullptr)
		*AllowedToLeave = Parms.AllowedToLeave;

}

}


