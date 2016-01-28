#include "Stone.h"

Stone::Stone()
{
	this->x = 0.0f;
	this->y = 0.0f;
	this->stoneSprite.setColor(sf::Color(255, 0, 0, 1));
	this->stoneSprite.setPosition(x, y);
}
Stone::~Stone()
{

}

float Stone::getX() const
{
	return this->x;
}
float Stone::getY() const
{
	return this->y;
}

void Stone::initiate(float x, float y, sf::Texture texture)
{
	this->x = x;
	this->y = y;
	this->stoneSprite.setTexture(texture);
	this->stoneSprite.setPosition(x, y);
}

void Stone::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	target.draw(this->stoneSprite, states);
}