#include "TextBox.h"

TextBox::TextBox()
{

	radius = 5;

	rect;
	rect.setSize(sf::Vector2f(getWidth(), getHeight()));
	rect.setRadius(radius);
	rect.setPosition(getX(), getY());
	rect.setFillColor(getBGColor());
	rect.setOutlineThickness(getOutlineThickness());
	rect.setOutlineColor(getOutlineColor());

	shadowRect;
	shadowRect.setSize(sf::Vector2f(getWidth() + getShadowThicknessLeft() + getShadowThicknessRight(), getHeight() + getShadowThicknessTop() + getShadowThicknessBottom()));
	shadowRect.setRadius(radius);
	shadowRect.setPosition(getX(), getY());
	shadowRect.setFillColor(getShadowColor());
	shadowRect.setOutlineThickness(getShadowOutlineThickness());
	shadowRect.setOutlineColor(getShadowOutlineColor());


	window;
	textString1 = "Text";
	textPadX = 15;
	textPadY = 2;
	textColor = sf::Color(50, 50, 50);
	textHighlightColor = sf::Color(25, 25, 25);


	font.loadFromFile("C:/Windows/Fonts/arial.ttf");
	text.setString(textString1);
	text.setFont(font);
	text.setFillColor(textColor);
	text.setCharacterSize(20);
	text.setPosition(getX() + textPadX, getY() + textPadY);

}

TextBox::~TextBox()
{

}
