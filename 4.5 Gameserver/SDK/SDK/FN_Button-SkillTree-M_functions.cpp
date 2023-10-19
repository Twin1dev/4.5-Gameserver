#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Button-SkillTree-M.Button-SkillTree-M_C
// (None)

class UClass* UButtonMinusSkillTreeMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button-SkillTree-M_C");

	return Clss;
}


// Button-SkillTree-M_C Button-SkillTree-M.Default__Button-SkillTree-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonMinusSkillTreeMinusM_C* UButtonMinusSkillTreeMinusM_C::GetDefaultObj()
{
	static class UButtonMinusSkillTreeMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonMinusSkillTreeMinusM_C*>(UButtonMinusSkillTreeMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


