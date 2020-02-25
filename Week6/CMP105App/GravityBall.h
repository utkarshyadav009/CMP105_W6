#pragma once
#include "Framework/GameObject.h"
#include"Framework/Vector.h"


class GravityBall :
	public GameObject
{	


	sf::Vector2f gravity;
	sf::Vector2f velocity;
 
public:
	GravityBall();
	float scale;
	void update(float dt) ;
	


};

