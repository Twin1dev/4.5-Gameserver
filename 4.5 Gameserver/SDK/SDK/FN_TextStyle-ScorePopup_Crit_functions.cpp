#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-ScorePopup_Crit.TextStyle-ScorePopup_Crit_C
// (None)

class UClass* UTextStyleMinusScorePopup_Crit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-ScorePopup_Crit_C");

	return Clss;
}


// TextStyle-ScorePopup_Crit_C TextStyle-ScorePopup_Crit.Default__TextStyle-ScorePopup_Crit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusScorePopup_Crit_C* UTextStyleMinusScorePopup_Crit_C::GetDefaultObj()
{
	static class UTextStyleMinusScorePopup_Crit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusScorePopup_Crit_C*>(UTextStyleMinusScorePopup_Crit_C::StaticClass()->DefaultObject);

	return Default;
}

}


