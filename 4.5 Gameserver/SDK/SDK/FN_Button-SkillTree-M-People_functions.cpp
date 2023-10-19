#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Button-SkillTree-M-People.Button-SkillTree-M-People_C
// (None)

class UClass* UButtonMinusSkillTreeMinusMMinusPeople_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button-SkillTree-M-People_C");

	return Clss;
}


// Button-SkillTree-M-People_C Button-SkillTree-M-People.Default__Button-SkillTree-M-People_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonMinusSkillTreeMinusMMinusPeople_C* UButtonMinusSkillTreeMinusMMinusPeople_C::GetDefaultObj()
{
	static class UButtonMinusSkillTreeMinusMMinusPeople_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonMinusSkillTreeMinusMMinusPeople_C*>(UButtonMinusSkillTreeMinusMMinusPeople_C::StaticClass()->DefaultObject);

	return Default;
}

}


