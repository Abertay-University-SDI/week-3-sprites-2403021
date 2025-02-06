#include "Enemy.h"

Enemy::Enemy()
{

}

Enemy::~Enemy()
{

}

int Enemy::getDirection()
{
	return direction;
}

void Enemy::setDirection(int newDirection)
{
	direction = newDirection;
}

void Enemy::update(float dt, int direction)
{
	if (getPosition().y == window->getSize().y) 
	{
		setDirection(-1);
	}
	if (getPosition().y == 0) 
	{
		setDirection(1);
	}
	setPosition(getPosition().x, getPosition().y + (1 * direction));
}