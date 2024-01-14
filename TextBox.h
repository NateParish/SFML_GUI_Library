#pragma once
#include "Widget.h"
#include "RoundedRectangleShape.h"
#include <iostream>
#include <string>

class TextBox : public Widget
{

private:

	float radius;
	bool selected;

	sf::RenderWindow* window;
	RoundedRectangle rect;
	RoundedRectangle shadowRect;

	sf::RectangleShape caret;
	bool renderCaret;
	float caretXOffset;


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
	//bool CheckIfMouseHover();
	void Highlight();
	void NoHighlight();
	void Draw();
	//void setWindow(sf::RenderWindow* windowPtr);
	sf::Vector2f getSize();
	void setSize(sf::Vector2f newSize);
	void setPosition(float posX, float posY);
	void SetTextPosition(float posX, float posY);
	void SetTextPad(float posX, float posY);
	void onClick();
	std::string getPressedKey(sf::Event e);
	void addTextToString(std::string text);
	void deleteLastCharacter();
	//void OnClick();
	sf::Vector2f characterHovered(sf::Vector2f mousePosition);
	void caretBlinkOn();
	void caretBlinkOff();
	void caretShiftRight();
};