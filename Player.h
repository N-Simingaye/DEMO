#pragma once 
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <ctime>
class Player
{
private:
	sf::RectangleShape shape;
	float movementSpeed;

	void initVariables();
	void initShape();
public:
	Player(float x = 0.f,float y=0.f);

	virtual ~Player();
	void update(sf::RenderTarget* targe);
	void render(sf::RenderTarget* target);
	void updateInput();
};