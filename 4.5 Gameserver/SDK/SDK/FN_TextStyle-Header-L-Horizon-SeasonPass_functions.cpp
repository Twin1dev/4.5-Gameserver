#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-L-Horizon-SeasonPass.TextStyle-Header-L-Horizon-SeasonPass_C
// (None)

class UClass* UTextStyleMinusHeaderMinusLMinusHorizonMinusSeasonPass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-L-Horizon-SeasonPass_C");

	return Clss;
}


// TextStyle-Header-L-Horizon-SeasonPass_C TextStyle-Header-L-Horizon-SeasonPass.Default__TextStyle-Header-L-Horizon-SeasonPass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusLMinusHorizonMinusSeasonPass_C* UTextStyleMinusHeaderMinusLMinusHorizonMinusSeasonPass_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusLMinusHorizonMinusSeasonPass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusLMinusHorizonMinusSeasonPass_C*>(UTextStyleMinusHeaderMinusLMinusHorizonMinusSeasonPass_C::StaticClass()->DefaultObject);

	return Default;
}

}


