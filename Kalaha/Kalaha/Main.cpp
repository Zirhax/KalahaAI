#include <SFML/Graphics.hpp>
#include "Board.h"
#include <crtdbg.h>
#include <iostream>

using namespace std;

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);
	Board test;
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
		for (int i = 0; i < 14; i++)
		{
			cout << test.getLogic(i);
		}
		cout << endl << endl;

	}
	system("PAUSE");
	return 0;
}