#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Carmine_Jump_Dive_Flare.GCN_Carmine_Jump_Dive_Flare_C
// (None)

class UClass* UGCN_Carmine_Jump_Dive_Flare_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Carmine_Jump_Dive_Flare_C");

	return Clss;
}


// GCN_Carmine_Jump_Dive_Flare_C GCN_Carmine_Jump_Dive_Flare.Default__GCN_Carmine_Jump_Dive_Flare_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Carmine_Jump_Dive_Flare_C* UGCN_Carmine_Jump_Dive_Flare_C::GetDefaultObj()
{
	static class UGCN_Carmine_Jump_Dive_Flare_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Carmine_Jump_Dive_Flare_C*>(UGCN_Carmine_Jump_Dive_Flare_C::StaticClass()->DefaultObject);

	return Default;
}

}


