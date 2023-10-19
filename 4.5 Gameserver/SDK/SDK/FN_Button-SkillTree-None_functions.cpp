#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Button-SkillTree-None.Button-SkillTree-None_C
// (None)

class UClass* UButtonMinusSkillTreeMinusNone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button-SkillTree-None_C");

	return Clss;
}


// Button-SkillTree-None_C Button-SkillTree-None.Default__Button-SkillTree-None_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonMinusSkillTreeMinusNone_C* UButtonMinusSkillTreeMinusNone_C::GetDefaultObj()
{
	static class UButtonMinusSkillTreeMinusNone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonMinusSkillTreeMinusNone_C*>(UButtonMinusSkillTreeMinusNone_C::StaticClass()->DefaultObject);

	return Default;
}

}


