#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	texture2.loadFromFile("gfx/Goomba.png");
	texture3.loadFromFile("gfx/Beach_Ball.png");
	texture4.loadFromFile("gfx/level1_1.png");

	level1.setTexture(&texture4);
	level1.setSize(sf::Vector2f(11038, 675));
	level1.setPosition(0, 0);

	player.setInput(input);
	player.setTexture(&texture);
	player.setSize(sf::Vector2f(50, 50));
	player.setPosition(100, 100);

	enemy1.setWindow(window);
	enemy1.setTexture(&texture2);
	enemy1.setSize(sf::Vector2f(50, 50));
	enemy1.setPosition(300, 100);

	enemy2.setWindow(window);
	enemy2.setTexture(&texture3);
	enemy2.setSize(sf::Vector2f(50, 50));
	enemy2.setPosition(600, 100);

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
	enemy2.update(dt, enemy2.getDirection());
}
// Render level
void Level::render()
{
	beginDraw();
	window->draw(level1);
	window->draw(player);
	window->draw(enemy1);
	window->draw(enemy2);
	endDraw();
}
