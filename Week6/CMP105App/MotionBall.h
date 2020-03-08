#pragma once
#include "Framework/GameObject.h"
#include "Framework/Vector.h"
#include "Framework/Input.h"

class MotionBall :
	public GameObject
{
public:
	float speed;
	float acceleration;
	sf::Vector2f direction;
	sf::Vector2f velocity;
	sf::Vector2f target;
	 MotionBall();
	 Input* input;
	void update(float dt) override;


};

