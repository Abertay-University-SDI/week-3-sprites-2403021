#pragma once
#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>

class Cursor :public GameObject {
public:
	Cursor();
	~Cursor();
	void update(float dt);
};

