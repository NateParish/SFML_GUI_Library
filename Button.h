#pragma once
#include "RoundedRectangleShape.h"
#include "Widget.h"
#include <iostream>
#include <string>

class Button : public Widget
{

private:

	float radius;

	/*sf::Color bgColor;
	sf::Color highlightColor;

	int outlineThickness;
	sf::Color outlineColor;
	sf::Color outlineHighlightColor;

	sf::Color shadowColor;
	sf::Color shadowOutlineColor;
	float shadowOutlineThickness;
	float shadowThicknessBottom;
	float shadowThicknessTop;
	float shadowThicknessLeft;
	float shadowThicknessRight;*/


	

	//bool highlightFlag;
	sf::RenderWindow* window;
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

