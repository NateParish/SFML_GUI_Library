#pragma once
#include <iostream>
#include "SFML/graphics.hpp"
#include "Button.h"
#include "StarShape.h"
#include "TextBox.h"

class GUI
{

private:

	float initialWindowWidth;
	float initialWindowHeight;
	std::string windowTitle;
	std::vector<Button*> listOfButtons;
	std::vector<TextBox*> listOfTextBoxes;
	//sf::RenderWindow window;
	//sf::RenderWindow* windowPtr;



public:

	GUI();
	~GUI();
	void Launch();
	void addButton(Button* button);
	void pushWindowPtrToButtons(sf::RenderWindow* windowPtr);

};

