#include "App.h"

App::App(const std::string& title, const int width, const int height) :
	m_window(title, width, height)
{
	std::cout << "Init app\n";
}

void App::run()
{
	while (m_window.isOpen())
	{
		m_window.update();
		m_window.draw();
	}
}
