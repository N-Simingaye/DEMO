#include "Game.h"

void Game::initVariables(){

	this->endGame = false;
}

void Game::initWindow(){
	this->videoMode = sf::VideoMode(800,600);
	this->window = new sf::RenderWindow(this ->videoMode,"Murder Mystery",sf::Style::Close|sf::Style::Titlebar);
	this->window->setFramerateLimit(60);
}

//constructors and Destructors 
Game::Game() 
{
	this->initVariables();
	this->initWindow();

}

Game::~Game() 
{
	delete this->window;
}

//Functions 
const bool Game:: running() const
{
	return this->window->isOpen();
}

void Game::pollEvents() 
{
	while (this ->window->pollEvent(this->sfmlEvent)) 
	{
		switch (this->sfmlEvent.type) 
		{
		case sf::Event::Closed:
			this->window->close();
			break;

		case sf::Event::KeyPressed:
			if (this->sfmlEvent.key.code == sf::Keyboard::Escape)
				this->window->close();
			break;
		}
	
	}
}
void Game::update() 
{
	this->pollEvents();
	this->player.update(this->window);

}
void Game::render() 
{ 
	this->window->clear();

	//Render stuff
	this->player.render(this ->window);

	this->window->display();
}