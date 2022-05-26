#include "assault.h"

using namespace assault;

void init::setup(HMODULE hModule)
{
	FILE* f;
	AllocConsole();
	freopen_s(&f, "CONOUT$", "w", stdout);
	init::setup_adress();
	init::print_logo();
	
	functions::god(globals::local_player);

	while (!GetAsyncKeyState(VK_END) & 1)
	{
		if (functions::checkgod(globals::local_player))
		{
			functions::god(globals::local_player);
			system("cls");
			init::print_logo();
		}

		functions::speed_hack(globals::local_player);
	}

	FreeConsole();
	fclose(f);

	FreeLibraryAndExitThread(hModule, 1);
}


BOOL APIENTRY DllMain(HMODULE hModule, DWORD dwReason, LPVOID lpReserved)
{

	if (dwReason == DLL_PROCESS_ATTACH)
	{
		DisableThreadLibraryCalls(hModule);
		CloseHandle(CreateThread(NULL, NULL, (LPTHREAD_START_ROUTINE)init::setup, hModule, NULL, NULL));
	}

	return TRUE;
}