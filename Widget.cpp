#include "Widget.h"

Widget::Widget()
{
	x = 0;
	y = 0;
	width = 150;
	height = 30;

	bgColor = sf::Color(230,230,230);
	highlightColor = sf::Color(50,250,250);
	selected = false;

	outlineThickness = 1;
	outlineColor = sf::Color(120,120,120);
	outlineHighlightColor = outlineColor;

	shadowColor = sf::Color(150, 150, 150, 35);
	shadowOutlineColor = shadowColor;
	shadowOutlineThickness = 0;
	shadowThicknessBottom = 3;
	shadowThicknessTop = 0;
	shadowThicknessLeft = 0;
	shadowThicknessRight = 0;
}

Widget::~Widget()
{

}

float Widget::getX()
{
	return x;
}

void Widget::setX(float newX)
{
	x = newX;
}

float Widget::getY()
{
	return y;
}

void Widget::setY(float newY)
{
	y = newY;
}

float Widget::getWidth()
{
	return width;
}

void Widget::setWidth(float newWidth)
{
	width = newWidth;
}

float Widget::getHeight()
{
	return height;
}

void Widget::setHeight(float newHeight)
{
	height = newHeight;
}

bool Widget::getSelected()
{
	return selected;
}

void Widget::setSelected(bool newSelected)
{
	selected = newSelected;
}

sf::Color Widget::getBGColor()
{
	return bgColor;
}

void Widget::setBGColor(sf::Color newColor)
{
	bgColor = newColor;
}

sf::Color Widget::getHighlightColor()
{
	return highlightColor;
}

void Widget::setHighlightColor(sf::Color newColor)
{
	highlightColor = newColor;
}

sf::Color Widget::getOutlineColor()
{
	return outlineColor;
}

void Widget::setOutlineColor(sf::Color newColor)
{
	outlineColor = newColor;
}

sf::Color Widget::getOutlineHighlightColor()
{
	return outlineHighlightColor;
}

void Widget::setOutlineHighlightColor(sf::Color newColor)
{
	outlineHighlightColor = newColor;
}

float Widget::getOutlineThickness()
{
	return outlineThickness;
}

void Widget::setOutlineThickness(float newThickness)
{
	outlineThickness = newThickness;
}

sf::Color Widget::getShadowColor()
{
	return shadowColor;
}

void Widget::setShadowColor(sf::Color newColor)
{
	shadowColor = newColor;
}

sf::Color Widget::getShadowOutlineColor()
{
	return shadowOutlineColor;
}

void Widget::setShadowOutlineColor(sf::Color newColor)
{
	shadowOutlineColor = newColor;
}
float Widget::getShadowOutlineThickness()
{
	return outlineThickness;
}

void Widget::setShadowOutlineThickness(float newThickness)
{
	outlineThickness = newThickness;
}

float Widget::getShadowThicknessBottom()
{
	return shadowThicknessBottom;
}

void Widget::setShadowThicknessBottom(float newThickness)
{
	shadowThicknessBottom = newThickness;
}

float Widget::getShadowThicknessTop()
{
	return shadowThicknessTop;
}

void Widget::setShadowThicknessTop(float newThickness)
{
	shadowThicknessTop = newThickness;
}

float Widget::getShadowThicknessLeft()
{
	return shadowThicknessLeft;
}

void Widget::setShadowThicknessLeft(float newThickness)
{
	shadowThicknessLeft = newThickness;
}

float Widget::getShadowThicknessRight()
{
	return shadowThicknessRight;
}

void Widget::setShadowThicknessRight(float newThickness)
{
	shadowThicknessRight = newThickness;
}

void Widget::moveWithMouse()
{
	std::cout << "and we're moving, and we're moving.. " << std::endl;
}




