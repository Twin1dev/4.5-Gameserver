#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DefaultSkillNodeStyle.DefaultSkillNodeStyle_C
// (None)

class UClass* UDefaultSkillNodeStyle_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DefaultSkillNodeStyle_C");

	return Clss;
}


// DefaultSkillNodeStyle_C DefaultSkillNodeStyle.Default__DefaultSkillNodeStyle_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDefaultSkillNodeStyle_C* UDefaultSkillNodeStyle_C::GetDefaultObj()
{
	static class UDefaultSkillNodeStyle_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDefaultSkillNodeStyle_C*>(UDefaultSkillNodeStyle_C::StaticClass()->DefaultObject);

	return Default;
}

}


