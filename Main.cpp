#include <iostream>
#include <string>
#include "SFML/graphics.hpp"
#include "RoundedRectangle.h"
#include "RoundedRectangleConstructed.h"
#include "EllipseShape.h"

int main()
{
	int FPS(60);

	//sf::RectangleShape testRectangle;
	RoundedRectangleConstructed rect;

	


	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	rect.setFillColor(sf::Color(100, 48, 180));
	rect.setSize(sf::Vector2f(400, 300));
	rect.setPosition(sf::Vector2f(200, 100));
	rect.setCornerRadius(10);
	rect.setPointCount(10);

	RoundedRectangle ellipse;
	ellipse.setFillColor(sf::Color(0, 0, 255));
	//ellipse.setPosition(sf::Vector2f(50, 50));
	ellipse.setRadius(sf::Vector2f(100, 100));
	ellipse.setSize(sf::Vector2f(500, 500));
	ellipse.setPosition(sf::Vector2f(50, 50));





	int initialWindowWidth = 1024;
	int initialWindowHeight = 768;
	std::string windowTitle = "GUI Testing";
	sf::RenderWindow window(sf::VideoMode(800, 600), "SFML shapes", sf::Style::Default, settings);
	//sf::RenderWindow window(sf::VideoMode(initialWindowWidth, initialWindowHeight), windowTitle);
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


		window.draw(ellipse);
		//rect.draw(windowPtr);
		//window.draw(rect);
		window.display();

	}

}


