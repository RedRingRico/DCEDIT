#include <windows.h>

WINAPI INT WinMain( HINSTANCE p_ThisInstance, HINSTANCE p_PrevInstance,
	LPSTR p_CommandLine, INT p_CmdLine )
{
	::MessageBoxA( NULL, "A", "B", MB_OK );

	return 0;
}

