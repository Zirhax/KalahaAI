#include "Board.h"
#include "Enums.h"

Board::Board()
{
	this->logic = new int[this->CAPACITY];
	for (int i = 0; i < this->CAPACITY; i++)
	{
		if (i == 6)
		{
			this->logic[i] = goal;
		}
		else if (i == 13)
		{
			this->logic[i] = goal;
		}
		else
		{
			this->logic[i] = normal;
		}
	}
}
Board::~Board()
{
	delete[]this->logic;
}

int Board::getLogic(int index) const
{
	return this->logic[index];
}

//void Board::draw(sf::RenderTarget &target, sf::RenderStates states) const
//{
//
//}