#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProxyMap.ProxyMap_C
// (None)

class UClass* UProxyMap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxyMap_C");

	return Clss;
}


// ProxyMap_C ProxyMap.Default__ProxyMap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProxyMap_C* UProxyMap_C::GetDefaultObj()
{
	static class UProxyMap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxyMap_C*>(UProxyMap_C::StaticClass()->DefaultObject);

	return Default;
}

}


