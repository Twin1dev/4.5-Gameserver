#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class BlueprintContext.BlueprintContextBase
class UBlueprintContextBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UBlueprintContextBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class BlueprintContext.BlueprintContextLibrary
class UBlueprintContextLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBlueprintContextLibrary* GetDefaultObj();

	class UBlueprintContextBase* GetContext(class UObject* ContextObject, TSubclassOf<class UBlueprintContextBase> Class);
};

}


