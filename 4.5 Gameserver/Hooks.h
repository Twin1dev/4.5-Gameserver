#pragma once

// File is used for hooks that really dont have a category
namespace Hooks {

	static __int64 (*DispatchRequest)(__int64 a1, __int64* a2, int a3);

	static __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
	{
		*(int*)(__int64(a2) + 0x60) = a3;

		return DispatchRequest(a1, a2, 3);
	}

	static bool RetTrueHook() { return true; };

	static void CollectGarbage() { return; }

	std::vector<int> AddrToNull;

	void NullFunctions() 
	{
		for (auto& address : AddrToNull)
		{
			auto ToNull = BaseAddress() + address;

			DWORD dwProt;
			VirtualProtect((PVOID)ToNull, 1, PAGE_EXECUTE_READWRITE, &dwProt);

			*(uint8_t*)ToNull = 0xC3;

			DWORD dwTemp;
			VirtualProtect((PVOID)ToNull, 1, dwProt, &dwTemp);

			std::cout << "Nulled " << std::to_string((uintptr_t)address) << "\n";
		}
	}

	void Init()
	{
		AddrToNull.push_back(0xfb23f0);
		AddrToNull.push_back(0xc96ca0);
		AddrToNull.push_back(0xaec460);
	}
}
