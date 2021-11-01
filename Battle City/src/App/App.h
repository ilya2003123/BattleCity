#pragma once

#include "AbstractApp.h"
#include "../Window/Window.h"

#pragma warning(push, 0)  
#include <string>
#include <iostream>
#pragma warning(pop)

class App : public AbstractApp
{
public:
	App() = delete;

	App(const std::string& title, const int width, const int height);
	
	App(const App& other) = delete;
	App(App&& other) noexcept = default;
	App& operator=(const App& other) = delete;
	App& operator=(App&& other) noexcept = default;

	virtual void run() override;

	virtual ~App() = default;
private:
	Window m_window;
};

