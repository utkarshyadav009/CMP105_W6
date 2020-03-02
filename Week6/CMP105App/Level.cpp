#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	t.loadFromFile("gfx/Beach_Ball.png");
	g.setInput(input);
	g.setTexture(&t);
	g.setSize(sf::Vector2f(100, 100));
	g.setPosition(100, 100);
	g.setVelocity(500.0, 500.0);
	t1.loadFromFile("gfx/Beach_Ball.png");
	m.setInput(input);
	m.setTexture(&t1);
	m.setSize(sf::Vector2f(100, 100));
	m.setPosition(100, 100);
	m.setVelocity(500.0, 500.0);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::Space))
	{
		isfalling = true;
	} 
	
	if (input->isMouseLDown())
	{
		g.setPosition(input->getMouseX(), input->getMouseY());
		isfalling = true;
	}

	if (input->isKeyDown(sf::Keyboard::F))
	{
		ismoving = true;
	}
}

// Update game objects
void Level::update(float dt)
{
	
	if(isfalling)
		g.update(dt);
	while(m.getPosition!=input->getMouseX)
		m.update(dt);

}

// Render level
void Level::render()
{
	beginDraw();
	window->draw(g);
	window->draw(m);
	endDraw();
}

// Begins rendering to the back buffer. Background colour set to light blue.
void Level::beginDraw()
{
	window->clear(sf::Color(0, 0, 0));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}