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
	/*this->stones = new Stone*[this->STONECAPACITY];
	for (int i = 0; i < this->STONECAPACITY; i++)
	{
		this->stones[i]->initiate()
	}*/
}
Board::~Board()
{
	delete[]this->logic;
	delete[]this->stones;
}

int Board::getLogic(int index) const
{
	return this->logic[index];
}

void Board::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	for (int i = 0; i < this->STONECAPACITY; i++)
	{
		stones[i].draw(target, states);
	}
}