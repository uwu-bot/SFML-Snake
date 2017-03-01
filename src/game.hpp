#pragma once
#include "world.hpp"
#include "snake.hpp"
#include "textbox.hpp"
#include "window.hpp"
<<<<<<< HEAD
#include "eventmanager.hpp"
=======
>>>>>>> 38a3345e3df3eae21f8dedd73b22ea99ed0dc7a6

class Game
{
public:
	Game();
	~Game();

	void HandleInput();
	void Update();
	void Render();
	Window* GetWindow();

	sf::Vector2i m_increment;

	sf::Time GetElapsed();
	void RestartClock();
<<<<<<< HEAD
	void MoveSprite(EventDetails* l_details);
=======
>>>>>>> 38a3345e3df3eae21f8dedd73b22ea99ed0dc7a6

private:
	Window m_window;

	World m_world;
	Snake m_snake;
	Textbox m_textbox;

	sf::Clock m_clock;
	sf::Time m_elapsed;
};
