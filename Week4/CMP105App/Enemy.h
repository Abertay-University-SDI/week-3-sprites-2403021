#pragma once
#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

class Enemy :public GameObject {
public:
	Enemy();
	~Enemy();
	int direction = 1;
	void update(float dt, int direction);
	int getDirection();
	void setDirection(int);
};