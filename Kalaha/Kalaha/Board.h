#ifndef BOARD_H
#define BOARD_H

#include "Stone.h"

class Board : public sf::Drawable
{
private:
	static const int CAPACITY = 14;
	static const int STONECAPACITY = 72;
	int* logic;
	Stone** stones;

public:
	Board();
	virtual ~Board();

	int getLogic(int index) const;

	virtual void draw(sf::RenderTarget &target, sf::RenderStates states) const = 0;
};


#endif