#include "Board.h"
#include "Enums.h"
#include <iostream>

using namespace std;

Board::Board()
{
	//I think i need these in the header file as to not let the get destroyed
	sf::Texture normalTile;
	sf::Texture goalTile;
	if (!normalTile.loadFromFile("../normalTile.png"))
	{
		cout << "Couldn't load normalTile.png" << endl;
	}
	if (!goalTile.loadFromFile("../goalTile.png"))
	{
		cout << "Couldn't load goalTile.png" << endl;
	}

	//Setting up the logic board and giving the sprites textures
	this->logic = new int[this->CAPACITY];
	for (int i = 0; i < this->CAPACITY; i++)
	{
		//If it's the south side goal
		if (i == 6)
		{
			this->tiles[i].setTexture(goalTile);
			this->tiles[i].setPosition(32.0f * i, 0);
			this->logic[i] = goal;
		}
		//If it's the north side goal
		else if (i == 13)
		{
			this->tiles[i].setTexture(goalTile);
			this->tiles[i].setPosition(32.0f * i, 0);
			this->logic[i] = goal;
		}
		//Else a normal tile
		else
		{
			this->tiles[i].setTexture(normalTile);
			if (i < 6)
			{
				this->tiles[i].setPosition(32.0f * i, 96);
			}
			else
			{
				this->tiles[i].setPosition(32.0f * (i - 6), 0);
			}
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
	//Deleting logic pointer
	delete[]this->logic;
	//Deleting every stone pointer before I destroy the pointer pointer to avoid memory leaks
	for (int i = 0; i < this->STONECAPACITY; i++)
	{
		delete this->stones[i];
	}
	delete[]this->stones;
}

int Board::getLogic(int index) const
{
	//Returning a tile
	return this->logic[index];
}

void Board::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
	for (int i = 0; i < this->STONECAPACITY; i++)
	{
		stones[i]->draw(target, states);
	}
}