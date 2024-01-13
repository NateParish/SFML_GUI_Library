#pragma once
#include "RoundedRectangleShape.h"
#include "Widget.h"
#include <iostream>
#include <string>

class Button : public Widget
{

private:

	//float width;
	//float height;
	float radius;


	
	RoundedRectangle rect;
	RoundedRectangle shadowRect;

	std::string labelText;
	sf::Font labelFont;
	sf::Text buttonLabel;
	sf::Color textColor;
	sf::Color textHighlightColor;

	int textPadX;
	int textPadY;

public:

	Button();
	~Button();
	void Highlight();
	void NoHighlight();
	void Draw();
	//void setWindow(sf::RenderWindow* windowPtr);
	//float getWidth();
	//void setWidth(float newWidth);
	//float getHeight();
	//void setHeight(float newHeight);
	sf::Vector2f getSize();
	void setSize(sf::Vector2f newSize);
	void SetPosition(float posX, float posY);
	void SetTextPosition(float posX, float posY);
	void SetTextPad(float posX, float posY);
	void onClick();

};

