#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Smasher_Death.Smasher_Death_C
// (None)

class UClass* ISmasher_Death_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Smasher_Death_C");

	return Clss;
}


// Smasher_Death_C Smasher_Death.Default__Smasher_Death_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ISmasher_Death_C* ISmasher_Death_C::GetDefaultObj()
{
	static class ISmasher_Death_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ISmasher_Death_C*>(ISmasher_Death_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Smasher_Death.Smasher_Death_C.Trigger_Death_Effect
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ISmasher_Death_C::Trigger_Death_Effect()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Smasher_Death_C", "Trigger_Death_Effect");



	UObject::ProcessEvent(Func, nullptr);

}

}


