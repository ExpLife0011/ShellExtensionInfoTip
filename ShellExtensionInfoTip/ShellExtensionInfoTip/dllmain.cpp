// dllmain.cpp : Definiert den Einstiegspunkt für die DLL-Anwendung.

#include <Windows.h>
#include <string>

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
	MessageBox(NULL, std::to_wstring(ul_reason_for_call).c_str(), L"DllMain", MB_OK);
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

