#ifndef STONE_H
#define STONE_H

#include <SFML/Graphics.hpp>

class Stone : public sf::Drawable
{
private:
	float x;
	float y;

	sf::Sprite stoneSprite;


public:
	Stone();
	virtual ~Stone();

	float getX() const;
	float getY() const;

	void initiate(float x, float y, sf::Texture texture);

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0;
};

#endif