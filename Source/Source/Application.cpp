#include <Application.hpp>

namespace DCEdit
{
	Application::Application( ) :
		m_WindowHandle( nullptr ),
		m_DeviceContext( 0 )
	{
	}

	Application::~Application( )
	{
		this->Cleanup( );
	}

	INT Application::Initialise( )
	{
		return APP_OK;
	}

	INT Application::Execute( )
	{
		return APP_OK;
	}

	void Application::Cleanup( )
	{
	}
}


