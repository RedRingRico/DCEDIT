#ifndef __DCEDIT_APPLICATION_HPP__
#define __DCEDIT_APPLICATION_HPP__

#include <windows.h>
#include <GL/gl.h>

namespace DCEdit
{
	const INT APP_OK = 0;
	const INT APP_ERROR = 1;
	const INT APP_FATALERROR = -1;

	class Application
	{
	public:
		Application( );
		~Application( );

		INT Initialise( );
		INT Execute( );

	private:
		void Cleanup( );

		HWND	m_WindowHandle;
		HDC		m_DeviceContext;
	};
}

#endif // __DCEDIT_APPLICATION_HPP__

