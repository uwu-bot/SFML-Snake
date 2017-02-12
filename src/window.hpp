#pragma once
#include "SFML/System.hpp"
#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"
#include "eventmanager.hpp"
#include <string>

class Window {
public:
	Window();
	Window(const std::string& l_title, const sf::Vector2u& l_size);
	~Window();

	void BeginDraw(); // Clear the window
	void EndDraw(); // Display the window

	void Update();

	bool IsDone();
	bool IsFullscreen();
	sf::Vector2u GetWindowSize();

	bool IsFocused();
	EventManager* GetEventManager();
	void ToggleFullscreen(EventDetails* l_details);
	void Close(EventDetails* l_details = nullptr);

	void Draw(sf::Drawable& l_drawable);

	sf::RenderWindow& GetRenderWindow();

private:
	void Setup(const std::string& l_title, const sf::Vector2u& l_size);
	void Destroy();
	void Create();

	sf::RenderWindow m_window;
	sf::Vector2u m_windowSize;
	std::string m_windowTitle;
	EventManager* m_eventManager;
	bool m_isDone;
	bool m_isFocused;
	bool m_isFullscreen;
};
