#include "Window.h"
#include "../Vagif/Tank/Tank.h"

Window::Window(const std::string& title, const int width, const int height) noexcept :
	m_window(sf::VideoMode(width, height), title, sf::Style::Default),
	m_width(width),
	m_height(height),
	m_isOpen(true),
	m_fps(60),
	m_tank(0, 0, 50, 50)
{
	m_window.setFramerateLimit(m_fps);
}

bool Window::isOpen() const
{
	return m_isOpen;
}

void Window::draw()
{
	m_tank.tankControl();
	m_tank.update(/*time*/);

	m_window.clear();

	m_window.draw(m_tank);

	m_window.display();
}

void Window::update()
{
	sf::Event event;
	while (m_window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
			m_window.close();
	}
}
