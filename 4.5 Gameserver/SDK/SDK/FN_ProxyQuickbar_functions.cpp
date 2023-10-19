#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ProxyQuickbar.ProxyQuickbar_C
// (None)

class UClass* UProxyQuickbar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ProxyQuickbar_C");

	return Clss;
}


// ProxyQuickbar_C ProxyQuickbar.Default__ProxyQuickbar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UProxyQuickbar_C* UProxyQuickbar_C::GetDefaultObj()
{
	static class UProxyQuickbar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UProxyQuickbar_C*>(UProxyQuickbar_C::StaticClass()->DefaultObject);

	return Default;
}

}


