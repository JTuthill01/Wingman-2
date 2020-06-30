#pragma once
class Core
{
public:

	Core();
	~Core();

	void Run();

private:
	void Update(float& DeltaTime);
	void Render(sf::RenderWindow& Target);
	void DeltaTimeClock();
	void ProcessInput();

	sf::RenderWindow* Window;
	sf::Clock DeltaClock;

	float DeltaTime;

};

