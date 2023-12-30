#include <iostream>
#include <string>
#include "SFML/graphics.hpp"
#include "RoundedRectangle.h"

int main()
{
	int FPS(60);

	sf::RectangleShape testRectangle;
	RoundedRectangle rect;

	

	rect.setFillColor(sf::Color(100, 48, 180));
	rect.setSize(sf::Vector2f(250, 150));
	rect.setPosition(sf::Vector2f(200, 100));
	rect.setCornerRadius(40);
	rect.setPointCount(50);


	int initialWindowWidth = 1024;
	int initialWindowHeight = 768;
	std::string windowTitle = "GUI Testing";
	sf::RenderWindow window(sf::VideoMode(initialWindowWidth, initialWindowHeight), windowTitle);
	sf::RenderWindow* windowPtr(&window);


	sf::Event e;

	while (window.isOpen())
	{

		window.clear(sf::Color(240, 240, 240));



		while (window.pollEvent(e))
		{
			if (e.type == sf::Event::Closed)
			{
				window.close();
			}
			if (e.type == sf::Event::Resized)
			{
				window.setView(sf::View(sf::FloatRect(0, 0, e.size.width, e.size.height)));
					
			}

		}



		rect.draw(windowPtr);
		//window.draw(rect);
		window.display();

	}

}


