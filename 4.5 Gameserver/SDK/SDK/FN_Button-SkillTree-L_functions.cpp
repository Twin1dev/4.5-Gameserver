#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Button-SkillTree-L.Button-SkillTree-L_C
// (None)

class UClass* UButtonMinusSkillTreeMinusL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Button-SkillTree-L_C");

	return Clss;
}


// Button-SkillTree-L_C Button-SkillTree-L.Default__Button-SkillTree-L_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonMinusSkillTreeMinusL_C* UButtonMinusSkillTreeMinusL_C::GetDefaultObj()
{
	static class UButtonMinusSkillTreeMinusL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonMinusSkillTreeMinusL_C*>(UButtonMinusSkillTreeMinusL_C::StaticClass()->DefaultObject);

	return Default;
}

}


