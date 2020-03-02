#include "GravityBall.h"
GravityBall::GravityBall()
{	
	float scale = 200.f;
	gravity = sf::Vector2f(0, 9.8f) * scale;

}
void GravityBall::update(float dt)
{
	

		input->setKeyUp(sf::Keyboard::Space);
		sf::Vector2f pos = velocity * dt + 0.4f * gravity * dt * dt; //ut+ 1/2at^2
		velocity += gravity * dt;
		setPosition(getPosition() + pos);
		if (getPosition().y >= 500)
		{
			setPosition(getPosition().x, 500);
			velocity = (-velocity) / 1.2f;
		}
	
}