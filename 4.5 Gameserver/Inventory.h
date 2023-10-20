#pragma once

static void (*MarkArrayDirty)(FFastArraySerializer*) = decltype(MarkArrayDirty)(BaseAddress() + 0x340210);


inline EFortQuickBars FindQuickBarForItemDef(UFortItemDefinition* ItemDefinition)
{
	if (!ItemDefinition->IsA(UFortWeaponMeleeItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortEditToolItemDefinition::StaticClass()) &&
		!ItemDefinition->IsA(UFortBuildingItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortAmmoItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortResourceItemDefinition::StaticClass()) && !ItemDefinition->IsA(UFortTrapItemDefinition::StaticClass()))
		return EFortQuickBars::Primary;

	return EFortQuickBars::Secondary;
}

static UFortWorldItem* GiveItemToPC(AFortPlayerController* PC, UFortItemDefinition* ItemDef, int Count, int LoadedAmmo = 0)
{
	auto NewInstance = (UFortWorldItem*)ItemDef->CreateTemporaryItemInstanceBP(Count, 1);

	NewInstance->ItemEntry.Count = Count;
	NewInstance->ItemEntry.LoadedAmmo = LoadedAmmo;
	NewInstance->SetOwningControllerForTemporaryItem(PC);

	PC->WorldInventory->Inventory.ItemInstances.Add(NewInstance);
	auto& RepEntry = PC->WorldInventory->Inventory.ReplicatedEntries.Add(NewInstance->ItemEntry);
	RepEntry.LoadedAmmo = LoadedAmmo;

	return NewInstance;
}

static inline UFortItemDefinition* GetItemDefFromGuid(AFortPlayerController* PC, FGuid Guid)
{
	for (int i = 0; i < PC->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		if (PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemGuid == Guid)
			return PC->WorldInventory->Inventory.ItemInstances[i]->ItemEntry.ItemDefinition;
	}

	return nullptr;
}

static void Update(AFortPlayerController* PC)
{
	PC->HandleWorldInventoryLocalUpdate();

	PC->WorldInventory->HandleInventoryLocalUpdate();
	PC->WorldInventory->bRequiresLocalUpdate = true;
	PC->WorldInventory->ForceNetUpdate();

	MarkArrayDirty(&PC->WorldInventory->Inventory);
}