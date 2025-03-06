#pragma once 
#include "Player.h" 
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <ctime>

class Game
{
private:
	sf::VideoMode videoMode;
	sf::RenderWindow* window;
	bool endGame; 
	//event listener
	sf::Event sfmlEvent; 
	Player player;

	void initVariables();
	void initWindow();
public:
	//constructurs and Destructors 
	Game();
	~Game(); 

	//Accessors
	
	//Modifiers
	
	//Functions
	const bool running()const;
	void pollEvents();

	

	void update();
	void render();
};