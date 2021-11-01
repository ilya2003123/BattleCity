#pragma once

#include "AbstractWindow.h"
#include "../Resource/Loader/RecursiveDataLoader.h"

#pragma warning(push, 0)  
#include <string>
#include <SFML/Graphics.hpp>
#pragma warning(pop)

class Window : public AbstractWindow
{
public:
	Window() = default;

	Window(const std::string& title, const int width, const int height) noexcept;

	Window(const Window& other) = delete;
	Window(Window&& other) noexcept = default;
	Window& operator=(const Window& other) = delete;
	Window& operator=(Window&& other) noexcept = default;

	virtual ~Window() = default;
public:
	virtual void draw() override;
	virtual void update() override;

public:
	bool isOpen() const;

private:
	sf::RenderWindow m_window;
	std::string m_title;
	int m_width = 0;
	int m_height = 0;
	int m_fps = 0;
	sf::CircleShape m_shape;

	bool m_isOpen = false;

private:
	RecursiveDataLoader<sf::Texture> m_textureHolder;

};

