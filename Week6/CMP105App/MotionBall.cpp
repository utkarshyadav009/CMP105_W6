#include "MotionBall.h"
MotionBall::MotionBall()
{
	speed = 50.f;
	acceleration = 50.f;
	target = sf::Vector2f(1000, 300);


}
void MotionBall::update(float dt)
{
	direction = target - getPosition();
	direction = Vector::normalise(direction);
	velocity += (direction * acceleration)*dt;
	setPosition(getPosition() + (velocity * dt));
	if (Vector::magnitude(target - getPosition()) < 10.f)
	{
		setPosition(target);
	}
}