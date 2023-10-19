#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-ScorePopup.TextStyle-ScorePopup_C
// (None)

class UClass* UTextStyleMinusScorePopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-ScorePopup_C");

	return Clss;
}


// TextStyle-ScorePopup_C TextStyle-ScorePopup.Default__TextStyle-ScorePopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusScorePopup_C* UTextStyleMinusScorePopup_C::GetDefaultObj()
{
	static class UTextStyleMinusScorePopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusScorePopup_C*>(UTextStyleMinusScorePopup_C::StaticClass()->DefaultObject);

	return Default;
}

}


