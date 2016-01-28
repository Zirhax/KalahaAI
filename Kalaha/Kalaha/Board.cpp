#include "Board.h"
#include "Enums.h"

Board::Board()
{
	this->logic = new int[this->CAPACITY];
	for (int i = 0; i < this->CAPACITY; i++)
	{
		if (i == 7)
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

