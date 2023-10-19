#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-LowerTabM.Border-LowerTabM_C
// (None)

class UClass* UBorderMinusLowerTabM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-LowerTabM_C");

	return Clss;
}


// Border-LowerTabM_C Border-LowerTabM.Default__Border-LowerTabM_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusLowerTabM_C* UBorderMinusLowerTabM_C::GetDefaultObj()
{
	static class UBorderMinusLowerTabM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusLowerTabM_C*>(UBorderMinusLowerTabM_C::StaticClass()->DefaultObject);

	return Default;
}

}


