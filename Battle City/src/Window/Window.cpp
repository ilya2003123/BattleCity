#include "Window.h"

Window::Window(const std::string& title, const int width, const int height) noexcept :
	m_window(sf::VideoMode(width, height), title, sf::Style::Default),
	m_width(width),
	m_height(height),
	m_isOpen(true),
	m_shape(100.f),
	m_fps(60)
{
	m_window.setFramerateLimit(m_fps);

	m_shape.setFillColor(sf::Color::Green);

	//test
	m_textureHolder.setSupportedFormats(".png.jpg.bmp", "[|.:,]");
	m_textureHolder.loadAssets("data", [](auto& item, auto& path) {
		item.loadFromFile(path.string());
	});

}

bool Window::isOpen() const
{
	return m_isOpen;
}

void Window::draw()
{
	m_window.clear();

	m_window.draw(m_shape);

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
