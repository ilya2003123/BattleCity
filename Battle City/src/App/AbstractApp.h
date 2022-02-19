#pragma once

class AbstractApp
{
public:
	AbstractApp() = default;
	AbstractApp(const AbstractApp& other) = delete;
	AbstractApp(AbstractApp&& other) noexcept = default;
	AbstractApp& operator=(const AbstractApp & other) = delete;
	AbstractApp& operator=(AbstractApp && other) noexcept = default;
	virtual void run() = 0;
	virtual ~AbstractApp() = default;
};

