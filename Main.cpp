#include <iostream>
#include <string>
#include "SFML/graphics.hpp"
#include "RoundedRectangleShape.h"
#include "RoundedRectangleConstructed.h"
#include "EllipseShape.h"
#include "Button.h"
#include "GUI.h"
//#include <SFML/glad/glad.h>
//#include <GLFW/glfw3.h>


int main()
{
	int FPS(60);

	//sf::RectangleShape testRectangle;
	RoundedRectangleConstructed rect;

	bool setToHandCursor = true;
	bool setToArrowCursor = false;

	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;

	sf::Cursor handCursor;
	handCursor.loadFromSystem(sf::Cursor::Hand);
	sf::Cursor arrowCursor;
	arrowCursor.loadFromSystem(sf::Cursor::Arrow);


	int initialWindowWidth = 1000;
	int initialWindowHeight = 768;
	std::string windowTitle = "GUI Testing";

	Button testButton;


	GUI testGUI; 
	testGUI.addButton(&testButton);
	//testButton.setWidth(150);
	//testButton.setHeight(80);
	//testButton.SetTextPad(10, 0);
	testButton.SetPosition(250, 250);
	//testButton.SetTextPad(30, 0);
	//testButton.SetTextPosition(25, 10);
	testGUI.Launch();



}


