#include "GUI.h"

GUI::GUI()
{

	initialWindowWidth = 1000;
	initialWindowHeight = 768;
	windowTitle = "GUI Testing";

	listOfButtons;
	listOfTextBoxes;

}

GUI::~GUI()
{

}

void Button1Function()
{
	std::cout << "Button Function" << std::endl;
}

void GUI::Launch()
{
	sf::ContextSettings settings;
	settings.antialiasingLevel = 8;
	sf::RenderWindow window(sf::VideoMode(initialWindowWidth, initialWindowHeight), "SFML shapes", sf::Style::Default, settings);
	//window(sf::VideoMode(initialWindowWidth, initialWindowHeight), "SFML shapes", sf::Style::Default, settings);
	sf::RenderWindow* windowPtr(&window);

	pushWindowPtrToButtons(windowPtr);
	bool setToHandCursor = true;
	bool setToArrowCursor = false;
	bool mouseClickFlag = false;
	bool mouseReleaseFlag = false;
	bool triggered = false;

	auto b1funct = Button1Function;

	StarShape star;
	star.setRadius(sf::Vector2f(50, 25));
	star.setFillColor(sf::Color(0, 255, 0));
	star.setPosition(450, 200);
	star.setOutlineColor(sf::Color(0, 0, 0));
	star.setOutlineThickness(5);

	TextBox textBox;

	textBox.setSize(sf::Vector2f(350, 30));
	textBox.setPosition(250, 350);
	textBox.setWindow(windowPtr);
	listOfTextBoxes.push_back(&textBox);

	sf::Cursor handCursor;
	handCursor.loadFromSystem(sf::Cursor::Hand);
	sf::Cursor arrowCursor;
	arrowCursor.loadFromSystem(sf::Cursor::Arrow);

	sf::Event e;
	
	while (window.isOpen())
	{
		
		window.clear(sf::Color(240, 240, 240));
		setToArrowCursor = true;
		setToHandCursor = false;
		


		while (window.pollEvent(e))
		{
			if (e.type == sf::Event::KeyPressed)
			{
				std::string textToAdd = textBox.getPressedKey(e);
				textBox.addTextToString(textToAdd);
			}

			mouseClickFlag = false;

			if (e.type == sf::Event::Closed)
			{
				window.close();
			}
			if (e.type == sf::Event::Resized)
			{
				window.setView(sf::View(sf::FloatRect(0, 0, e.size.width, e.size.height)));

			}
			if (e.type == sf::Event::MouseButtonPressed)
			{
				mouseClickFlag = true;
				
			}
			if (e.type == sf::Event::MouseButtonReleased)
			{
				mouseClickFlag = false;
				mouseReleaseFlag = true;
				triggered = false;
			}

		}

		for (TextBox* textBox : listOfTextBoxes)
		{
			if (textBox->checkIfMouseHover())
			{
				textBox->Highlight();
				if (mouseClickFlag)
				{
					textBox->onClick();
				}
			}
			else
			{
				textBox->NoHighlight();
			}

			textBox->Draw();

		}


		for (Button* button : listOfButtons)
		{
			if (button->checkIfMouseHover())
			{
				button->Highlight();
				setToHandCursor = true;
				setToArrowCursor = false;

				if (mouseClickFlag)
				{
					if (!triggered)
					{
						button->onClick();
						triggered = true;
					}
				}

				else
				{
					button->setSelected(false);
				}

			}
			else
			{
				button->NoHighlight();
			}

			button->Draw();
		}

		if (setToHandCursor)
		{
			window.setMouseCursor(handCursor);
		}
		if (setToArrowCursor)
		{
			window.setMouseCursor(arrowCursor);
		}

		window.draw(star);
		//textBox.Draw();
		window.display();

	}

}

void GUI::addButton(Button* button)
{
	listOfButtons.push_back(button);
	//button->setWindow()
}

void GUI::pushWindowPtrToButtons(sf::RenderWindow* windowPtr)
{
	for (Button* button : listOfButtons)
	{
		button->setWindow(windowPtr);
	}
}

		