#pragma once

#define CREATEHOOK(Address, Hook, Og) \
MH_CreateHook((void*)(Address), Hook, (void**)(Og)); \
MH_EnableHook((void*)(Address));

static void VirtualHook(void** vft, int idx, void* newfunc, void** OG = nullptr)
{
	if (OG)
		*OG = vft[idx];

	DWORD dwProt;
	VirtualProtect(&vft[idx], 8, PAGE_EXECUTE_READWRITE, &dwProt);
	vft[idx] = newfunc;
	DWORD dwTemp;
	VirtualProtect(&vft[idx], 8, dwProt, &dwTemp);
}