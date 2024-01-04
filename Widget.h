#pragma once
#include "SFML/graphics.hpp"

class Widget
{
private:

	float x;
	float y;
	float width;
	float height;

public:

	Widget();
	~Widget();

	float getX();
	void setX(float newX);
	float getY();
	void setY(float newY);
	float getWidth();
	void setWidth(float newWidth);
	float getHeight();
	void setHeight(float newHeight);
};

