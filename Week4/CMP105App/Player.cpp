#include "Player.h"

Player::Player()
{
	
}

Player::~Player()
{

}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W) == true) {
		setPosition(getPosition().x, getPosition().y - 1);
	}

	if (input->isKeyDown(sf::Keyboard::A) == true) {
		setPosition(getPosition().x -1, getPosition().y);
	}

	if (input->isKeyDown(sf::Keyboard::S) == true) {
		setPosition(getPosition().x, getPosition().y + 1);
	}

	if (input->isKeyDown(sf::Keyboard::D) == true) {
		setPosition(getPosition().x + 1, getPosition().y);
	}
}