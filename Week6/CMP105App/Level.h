#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/Input.h"
#include <string.h>
#include <iostream>
#include"GravityBall.h"
#include"MotionBall.h"

class Level{
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt);
	void update(float dt);
	void render();

private:
	// Default functions for rendering to the screen.
	void beginDraw();
	void endDraw();

	bool isfalling = false;
	bool ismoving = false;

	// Default variables for level class.
	sf::RenderWindow* window;
	Input* input;


	// More level variables
	GravityBall g;
	MotionBall m;
	sf::Texture t1;
	sf::Texture t;

};