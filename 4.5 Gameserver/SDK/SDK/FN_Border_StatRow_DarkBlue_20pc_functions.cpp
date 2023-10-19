#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_StatRow_DarkBlue_20pc.Border_StatRow_DarkBlue_20pc_C
// (None)

class UClass* UBorder_StatRow_DarkBlue_20pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_StatRow_DarkBlue_20pc_C");

	return Clss;
}


// Border_StatRow_DarkBlue_20pc_C Border_StatRow_DarkBlue_20pc.Default__Border_StatRow_DarkBlue_20pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_StatRow_DarkBlue_20pc_C* UBorder_StatRow_DarkBlue_20pc_C::GetDefaultObj()
{
	static class UBorder_StatRow_DarkBlue_20pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_StatRow_DarkBlue_20pc_C*>(UBorder_StatRow_DarkBlue_20pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


