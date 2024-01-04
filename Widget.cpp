#include "Widget.h"

Widget::Widget()
{
	x = 0;
	y = 0;
	width = 150;
	height = 50;
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