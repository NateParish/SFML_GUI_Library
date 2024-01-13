#include "Button.h"

Button::Button()
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
	shadowRect.setSize(sf::Vector2f(getWidth() + getShadowThicknessLeft() + getShadowThicknessRight(), getHeight() + getShadowThicknessTop() + getShadowThicknessBottom ()));
	shadowRect.setRadius(radius);
	shadowRect.setPosition(getX(), getY());
	shadowRect.setFillColor(getShadowColor());
	shadowRect.setOutlineThickness(getShadowOutlineThickness());
	shadowRect.setOutlineColor(getShadowOutlineColor());
		

	labelText = "Button Name";
	textPadX = 15;
	textPadY = 2;
	textColor = sf::Color(50, 50, 50);
	textHighlightColor = sf::Color(25, 25, 25);


	labelFont.loadFromFile("C:/Windows/Fonts/arial.ttf");
	buttonLabel.setString(labelText);
	buttonLabel.setFont(labelFont);
	buttonLabel.setFillColor(textColor);
	buttonLabel.setCharacterSize(20);
	buttonLabel.setPosition(getX() + textPadX, getY() + textPadY);

}

Button::~Button()
{

}

void Button::Highlight()
{
	rect.setFillColor(getHighlightColor());
	rect.setOutlineColor(getOutlineHighlightColor());
	buttonLabel.setFillColor(textHighlightColor);	
}

void Button::NoHighlight()
{
	rect.setFillColor(getBGColor());
	rect.setOutlineColor(getOutlineColor());
	buttonLabel.setFillColor(textColor);
}

void Button::Draw()
{
	getWindow()->draw(shadowRect);
	getWindow()->draw(rect);
	getWindow()->draw(buttonLabel);
}

//float Button::getWidth()
//{
//	return width;
//}

//float Button::getHeight()
//{
//	return height;
//}

sf::Vector2f Button::getSize()
{
	return sf::Vector2f(getWidth(), getHeight());
}

void Button::setSize(sf::Vector2f newSize)
{
	setWidth(newSize.x);
	setHeight(newSize.y);
	rect.setSize(sf::Vector2f(newSize.x, newSize.y));
	shadowRect.setSize(sf::Vector2f(newSize.x + getShadowThicknessLeft() + getShadowThicknessRight(), newSize.y + getShadowThicknessTop() + getShadowThicknessBottom()));
}

void Button::SetPosition(float posX, float posY)
{
	setX(posX);
	setY(posY);

	rect.setPosition(sf::Vector2f(getX(), getY()));
	buttonLabel.setPosition(sf::Vector2f(getX() + textPadX, getY() + textPadY));
	shadowRect.setPosition(sf::Vector2f(getX() - getShadowThicknessLeft(), getY() - getShadowThicknessTop()));
}

void Button::SetTextPosition(float posX, float posY)
{
	buttonLabel.setPosition(rect.getPosition().x + textPadX,rect.getPosition().y + textPadY);
}

void Button::SetTextPad(float xPad, float yPad)
{
	textPadX = xPad;
	textPadY = yPad;
	buttonLabel.setPosition(sf::Vector2f(getX() + textPadX, getY() + textPadY));
}

void Button::onClick()
{

	sf::Mouse mouse;
	int mousePosX = mouse.getPosition(*getWindow()).x;
	int mousePosY = mouse.getPosition(*getWindow()).y;
	std::cout << "CLICKED!" << getWidth() << " " << getHeight() << " " << mousePosX << " " << mousePosY << " " << getX() << " " << getY() <<  " " << getX() - mousePosX << " " << getY() - mousePosY << std::endl;
}