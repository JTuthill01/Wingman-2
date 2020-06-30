#include "pch.hpp"
#include "Core.hpp"

Core::Core() : DeltaTime(0.F), Window(nullptr)
{
	Window = new sf::RenderWindow(sf::VideoMode(1920, 1080), "Wingman 2");
}

Core::~Core()
{
	delete Window;
}

void Core::Run()
{
	while (Window->isOpen())
	{
		Update(DeltaTime);

		Render(*Window);

		DeltaTimeClock();
	}
}

void Core::Update(float& DeltaTime)
{
	ProcessInput();
}

void Core::Render(sf::RenderWindow& Target)
{
	Target.clear();


	Target.display();
}

void Core::DeltaTimeClock()
{
	DeltaTime = DeltaClock.restart().asSeconds();
}

void Core::ProcessInput()
{
	sf::Event e;

	while (Window->pollEvent(e))
	{
		if (e.type == sf::Event::Closed)
		{
			Window->close();
		}
	}
}
