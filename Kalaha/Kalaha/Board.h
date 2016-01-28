#ifndef BOARD_H
#define BOARD_H

#include <SFML/Graphics.hpp>

class Board /*: public sf::Drawable*/
{
public:
	Board();
	virtual ~Board();

	int getLogic(int index) const;

	/*virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0;*/

private:
	static const int CAPACITY = 14;
	int* logic;
};


#endif