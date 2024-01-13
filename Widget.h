#pragma once
#include <iostream>
#include "SFML/graphics.hpp"


class Widget
{
private:

	float x;
	float y;
	float width;
	float height;

	sf::RenderWindow* window;

	bool selected;

	sf::Color bgColor;
	sf::Color highlightColor;

	float outlineThickness;
	sf::Color outlineColor;
	sf::Color outlineHighlightColor;

	sf::Color shadowColor;
	sf::Color shadowOutlineColor;
	float shadowOutlineThickness;
	float shadowThicknessBottom;
	float shadowThicknessTop;
	float shadowThicknessLeft;
	float shadowThicknessRight;

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
	bool getSelected();
	void setSelected(bool newSelected);
	sf::RenderWindow* getWindow();
	void setWindow(sf::RenderWindow* windowPtr);
	sf::Color getBGColor();
	void setBGColor(sf::Color newColor);
	sf::Color getHighlightColor();
	void setHighlightColor(sf::Color newColor);
	sf::Color getOutlineColor();
	void setOutlineColor(sf::Color newColor);
	sf::Color getOutlineHighlightColor();
	void setOutlineHighlightColor(sf::Color newColor);
	float getOutlineThickness();
	void setOutlineThickness(float newThickness);
	sf::Color getShadowColor();
	void setShadowColor(sf::Color newColor);
	sf::Color getShadowOutlineColor();
	void setShadowOutlineColor(sf::Color newColor);
	float getShadowOutlineThickness();
	void setShadowOutlineThickness(float newThickness);
	float getShadowThicknessBottom();
	void setShadowThicknessBottom(float newThickness);
	float getShadowThicknessTop();
	void setShadowThicknessTop(float newThickness);
	float getShadowThicknessLeft();
	void setShadowThicknessLeft(float newThickness);
	float getShadowThicknessRight();
	void setShadowThicknessRight(float newThickness);
	void moveWithMouse();
	bool checkIfMouseHover();
};

