#include "RoundedRectangleConstructed.h"
#include <iostream>

RoundedRectangleConstructed::RoundedRectangleConstructed()
{
	cornerRadius = 0;
	//circlePointCount;
	updateFlag = true;
}

RoundedRectangleConstructed::~RoundedRectangleConstructed()
{

}

void RoundedRectangleConstructed::setCornerRadius(float radius)
{
	cornerRadius = radius;
}

float RoundedRectangleConstructed::getCornerRadius()
{
	return cornerRadius;
}

void RoundedRectangleConstructed::setPointCount(int pointCount)
{
	circlePointCount = pointCount;
}

int RoundedRectangleConstructed::getPointCount()
{
	return circlePointCount;
}

void RoundedRectangleConstructed::update()
{
	wideRectangle.setFillColor(getFillColor());
	wideRectangle.setSize(sf::Vector2f(getSize().x, getSize().y - 2 * getCornerRadius()));
	wideRectangle.setPosition(getPosition().x, getPosition().y + cornerRadius);

	tallRectangle.setFillColor(getFillColor());
	tallRectangle.setSize(sf::Vector2f(getSize().x - 2 * cornerRadius, getSize().y));
	tallRectangle.setPosition(sf::Vector2f(getPosition().x + cornerRadius, getPosition().y));

	circleTopLeft.setFillColor(getFillColor());
	circleTopLeft.setPointCount(circlePointCount);
	circleTopLeft.setRadius(cornerRadius);
	circleTopLeft.setPosition(getPosition().x, getPosition().y);

	circleTopRight.setFillColor(getFillColor());
	circleTopRight.setPointCount(circlePointCount);
	circleTopRight.setRadius(cornerRadius);
	circleTopRight.setPosition(getPosition().x + getSize().x - 2 * cornerRadius, getPosition().y);

	circleBottomLeft.setFillColor(getFillColor());
	circleBottomLeft.setPointCount(circlePointCount);
	circleBottomLeft.setRadius(cornerRadius);
	circleBottomLeft.setPosition(getPosition().x, getPosition().y + getSize().y - 2 * cornerRadius);

	circleBottomRight.setFillColor(getFillColor());
	circleBottomRight.setPointCount(circlePointCount);
	circleBottomRight.setRadius(cornerRadius);
	circleBottomRight.setPosition(getPosition().x + getSize().x - 2 * cornerRadius, getPosition().y + getSize().y - 2 * cornerRadius);

	std::cout << "UPDATED" << std::endl;
	updateFlag = false;
}

void RoundedRectangleConstructed::draw(sf::RenderWindow* window)
{
	if (updateFlag)
	{
		update();
	}

	window->draw(wideRectangle);
	window->draw(tallRectangle);
	window->draw(circleTopLeft);
	window->draw(circleTopRight);
	window->draw(circleBottomLeft);
	window->draw(circleBottomRight);

}
