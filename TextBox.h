#pragma once
#include "Widget.h"
#include "RoundedRectangleShape.h"
#include <iostream>
class TextBox : public Widget
{

private:

	float radius;

	sf::RenderWindow* window;
	RoundedRectangle rect;
	RoundedRectangle shadowRect;

	std::string textString1;

	sf::Font font;
	sf::Text text;
	sf::Color textColor;
	sf::Color textHighlightColor;

	int textPadX;
	int textPadY;

public:

	TextBox();
	~TextBox();
	bool CheckIfMouseHover();
	void Highlight();
	void NoHighlight();
	void Draw();
	void setWindow(sf::RenderWindow* windowPtr);
	void SetPosition(float posX, float posY);
	void SetTextPosition(float posX, float posY);
	void SetTextPad(float posX, float posY);
	void OnClick();
};