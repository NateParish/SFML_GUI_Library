#pragma once
#include <iostream>
#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Graphics/CircleShape.hpp"
#include "SFML/Graphics/RenderWindow.hpp"


class RoundedRectangleConstructed : public sf::RectangleShape
{

private:

	float cornerRadius;
	int circlePointCount;
	bool updateFlag;

	sf::RectangleShape wideRectangle;
	sf::RectangleShape tallRectangle;
	sf::CircleShape circleTopLeft;
	sf::CircleShape circleTopRight;
	sf::CircleShape circleBottomLeft;
	sf::CircleShape circleBottomRight;

	void update();

public:

	RoundedRectangleConstructed();
	~RoundedRectangleConstructed();

	void setCornerRadius(float radius);
	float getCornerRadius();
	void setPointCount(int pointCount);
	int getPointCount();
	void draw(sf::RenderWindow* window);

};