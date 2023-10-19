#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-KeyBase-Center-M.Border-KeyBase-Center-M_C
// (None)

class UClass* UBorderMinusKeyBaseMinusCenterMinusM_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-KeyBase-Center-M_C");

	return Clss;
}


// Border-KeyBase-Center-M_C Border-KeyBase-Center-M.Default__Border-KeyBase-Center-M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusKeyBaseMinusCenterMinusM_C* UBorderMinusKeyBaseMinusCenterMinusM_C::GetDefaultObj()
{
	static class UBorderMinusKeyBaseMinusCenterMinusM_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusKeyBaseMinusCenterMinusM_C*>(UBorderMinusKeyBaseMinusCenterMinusM_C::StaticClass()->DefaultObject);

	return Default;
}

}


