#include "Button.h"

Button::Button()
{
	x = 300;
	y = 300;
	width = 150;
	height = 30;
	radius = 5;
	bgColor = sf::Color(220, 220, 220);
	highlightColor = sf::Color(235, 235, 235);
	outlineColor = sf::Color(200, 200, 200);
	outlineHighlightColor = sf::Color(200, 200, 200);
	outlineThickness = 1;
	
	shadowColor = sf::Color(150, 150, 150, 35);
	shadowOutlineColor = shadowColor;
	shadowOutlineThickness = outlineThickness;
	shadowThicknessBottom = 3;
	shadowThicknessTop = 0;
	shadowThicknessLeft = 0;
	shadowThicknessRight = 0;

	rect;
	rect.setSize(sf::Vector2f(width,height));
	rect.setRadius(radius);
	rect.setPosition(x, y);
	rect.setFillColor(bgColor);
	rect.setOutlineThickness(outlineThickness);
	rect.setOutlineColor(outlineColor);

	shadowRect;
	shadowRect.setSize(sf::Vector2f(width + shadowThicknessLeft + shadowThicknessRight, height + shadowThicknessTop + shadowThicknessBottom));
	shadowRect.setRadius(radius);
	shadowRect.setPosition(x, y);
	shadowRect.setFillColor(shadowColor);
	shadowRect.setOutlineThickness(shadowOutlineThickness);
	shadowRect.setOutlineColor(shadowOutlineColor);
		

	window;
	labelText = "Button Name";
	textPadX = 15;
	textPadY = 2;
	textColor = sf::Color(90, 90, 90);
	textHighlightColor = sf::Color(25, 25, 25);


	labelFont.loadFromFile("C:/Windows/Fonts/arial.ttf");
	buttonLabel.setString(labelText);
	buttonLabel.setFont(labelFont);
	buttonLabel.setFillColor(textColor);
	buttonLabel.setCharacterSize(20);
	buttonLabel.setPosition(x + textPadX, y + textPadY);

}

Button::~Button()
{

}

bool Button::CheckIfMouseHover()
{
	sf::Mouse mouse;
	int mousePosX = mouse.getPosition(*window).x;
	int mousePosY = mouse.getPosition(*window).y;

	
	bool mouseOverButton = false;


	if (mousePosX >= x)
	{
		if (mousePosX <= x + width)
		{
			if (mousePosY >= y)
			{
				if (mousePosY <= y + height)
				{
					mouseOverButton = true;
				}				
			}			
		}
	}

	return mouseOverButton;
}

void Button::Highlight()
{
	rect.setFillColor(highlightColor);
	rect.setOutlineColor(outlineHighlightColor);
	buttonLabel.setFillColor(textHighlightColor);	
}

void Button::NoHighlight()
{
	rect.setFillColor(bgColor);
	rect.setOutlineColor(outlineColor);
	buttonLabel.setFillColor(textColor);
}

void Button::Draw()
{
	window->draw(shadowRect);
	window->draw(rect);
	window->draw(buttonLabel);
}

void Button::setWindow(sf::RenderWindow* windowPtr)
{
	window = windowPtr;
}

void Button::SetPosition(float posX, float posY)
{
	x = posX;
	y = posY;

	rect.setPosition(sf::Vector2f(x, y));
	buttonLabel.setPosition(sf::Vector2f(x + textPadX, y + textPadY));
	shadowRect.setPosition(sf::Vector2f(x - shadowThicknessLeft, y - shadowThicknessTop));
}

void Button::SetTextPosition(float posX, float posY)
{
	buttonLabel.setPosition(rect.getPosition().x + textPadX,rect.getPosition().y + textPadY);
}

void Button::SetTextPad(float xPad, float yPad)
{
	textPadX = xPad;
	textPadY = yPad;
	buttonLabel.setPosition(sf::Vector2f(x + textPadX, y + textPadY));
}

void Button::OnClick()
{
	std::cout << "CLICKED!" << std::endl;
}