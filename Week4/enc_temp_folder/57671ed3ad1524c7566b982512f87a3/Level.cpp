#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	texture2.loadFromFile("gfx/Goomba.png");

	player.setInput(input);
	player.setTexture(&texture);
	player.setSize(sf::Vector2f(100, 100));
	player.setPosition(100, 100);

	enemy1.setWindow(window);
	enemy1.setTexture(&texture2);
	enemy1.setSize(sf::Vector2f(100, 100));
	enemy1.setPosition(300, 100);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}
	player.handleInput(1);
}

// Update game objects
void Level::update(float dt)
{
	enemy1.update(dt, enemy1.getDirection());
}
// Render level
void Level::render()
{
	beginDraw();

	window->draw(player);
	window->draw(enemy1);
	endDraw();
}
