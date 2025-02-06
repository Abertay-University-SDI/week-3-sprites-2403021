#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include "Player.h"
#include "Cursor.h"
#include "Background.h"
#include "Enemy.h"
#include <string.h>
#include <iostream>



class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	// Level objects
	sf::Texture texture;
	Player player;
	sf::Texture texture2;
	Enemy enemy1;
	sf::Texture texture3;
	Enemy enemy2;
	sf::Texture texture4;
	Background level1;
	Cursor cursor;
	sf::Texture texture5;
};

