#include "TextBox.h"

TextBox::TextBox()
{

	radius = 5;
	selected = false;

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
	textString1 = "";
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

void TextBox::Highlight()
{
	rect.setFillColor(getHighlightColor());
	rect.setOutlineColor(getOutlineHighlightColor());
	text.setFillColor(textHighlightColor);
}

void TextBox::NoHighlight()
{
	rect.setFillColor(getBGColor());
	rect.setOutlineColor(getOutlineColor());
	text.setFillColor(textColor);
}

void TextBox::Draw()
{
	getWindow()->draw(shadowRect);
	getWindow()->draw(rect);
	getWindow()->draw(text);
}

sf::Vector2f TextBox::getSize()
{
	return sf::Vector2f(getWidth(), getHeight());
}

void TextBox::setSize(sf::Vector2f newSize)
{
	setWidth(newSize.x);
	setHeight(newSize.y);
	rect.setSize(sf::Vector2f(newSize.x, newSize.y));
	shadowRect.setSize(sf::Vector2f(newSize.x + getShadowThicknessLeft() + getShadowThicknessRight(), newSize.y + getShadowThicknessTop() + getShadowThicknessBottom()));
}

void TextBox::setPosition(float posX, float posY)
{
	setX(posX);
	setY(posY);

	rect.setPosition(sf::Vector2f(getX(), getY()));
	text.setPosition(sf::Vector2f(getX() + textPadX, getY() + textPadY));
	shadowRect.setPosition(sf::Vector2f(getX() - getShadowThicknessLeft(), getY() - getShadowThicknessTop()));
}

void TextBox::SetTextPosition(float posX, float posY)
{
	text.setPosition(rect.getPosition().x + textPadX, rect.getPosition().y + textPadY);
}

void TextBox::SetTextPad(float xPad, float yPad)
{
	textPadX = xPad;
	textPadY = yPad;
	text.setPosition(sf::Vector2f(getX() + textPadX, getY() + textPadY));
}

void TextBox::onClick()
{
	selected = true;
	std::cout << "CLICKED!" << std::endl;
}

std::string TextBox::getPressedKey(sf::Event e)
{
	std::string output = "";
	bool capitalized = false;
	sf::Keyboard::Key keycode = e.key.code;

	if (e.key.shift)
	{
		capitalized = true;
	}


	if (keycode == sf::Keyboard::A)
	{
		if (capitalized)
		{
			output = "A";
		}
		else
		{
			output = "a";
		}
	}

	if (keycode == sf::Keyboard::B)
	{
		if (capitalized)
		{
			output = "B";
		}
		else
		{
			output = "b";
		}
	}
	if (keycode == sf::Keyboard::C)
	{
		if (capitalized)
		{
			output = "C";
		}
		else
		{
			output = "c";
		}
	}
	if (keycode == sf::Keyboard::D)
	{
		if (capitalized)
		{
			output = "D";
		}
		else
		{
			output = "d";
		}
	}
	if (keycode == sf::Keyboard::E)
	{
		if (capitalized)
		{
			output = "E";
		}
		else
		{
			output = "e";
		}
	}
	if (keycode == sf::Keyboard::F)
	{
		if (capitalized)
		{
			output = "F";
		}
		else
		{
			output = "f";
		}
	}
	if (keycode == sf::Keyboard::G)
	{
		if (capitalized)
		{
			output = "G";
		}
		else
		{
			output = "g";
		}
	}
	if (keycode == sf::Keyboard::H)
	{
		if (capitalized)
		{
			output = "H";
		}
		else
		{
			output = "h";
		}
	}
	if (keycode == sf::Keyboard::I)
	{
		if (capitalized)
		{
			output = "I";
		}
		else
		{
			output = "i";
		}
	}
	if (keycode == sf::Keyboard::J)
	{
		if (capitalized)
		{
			output = "J";
		}
		else
		{
			output = "j";
		}
	}
	if (keycode == sf::Keyboard::K)
	{
		if (capitalized)
		{
			output = "K";
		}
		else
		{
			output = "k";
		}
	}
	if (keycode == sf::Keyboard::L)
	{
		if (capitalized)
		{
			output = "L";
		}
		else
		{
			output = "l";
		}
	}
	if (keycode == sf::Keyboard::M)
	{
		if (capitalized)
		{
			output = "M";
		}
		else
		{
			output = "m";
		}
	}
	if (keycode == sf::Keyboard::N)
	{
		if (capitalized)
		{
			output = "N";
		}
		else
		{
			output = "n";
		}
	}
	if (keycode == sf::Keyboard::O)
	{
		if (capitalized)
		{
			output = "O";
		}
		else
		{
			output = "o";
		}
	}
	if (keycode == sf::Keyboard::P)
	{
		if (capitalized)
		{
			output = "P";
		}
		else
		{
			output = "p";
		}
	}
	if (keycode == sf::Keyboard::Q)
	{
		if (capitalized)
		{
			output = "Q";
		}
		else
		{
			output = "q";
		}
	}
	if (keycode == sf::Keyboard::R)
	{
		if (capitalized)
		{
			output = "R";
		}
		else
		{
			output = "r";
		}
	}
	if (keycode == sf::Keyboard::S)
	{
		if (capitalized)
		{
			output = "S";
		}
		else
		{
			output = "s";
		}
	}
	if (keycode == sf::Keyboard::T)
	{
		if (capitalized)
		{
			output = "T";
		}
		else
		{
			output = "t";
		}
	}
	if (keycode == sf::Keyboard::U)
	{
		if (capitalized)
		{
			output = "U";
		}
		else
		{
			output = "u";
		}
	}
	if (keycode == sf::Keyboard::V)
	{
		if (capitalized)
		{
			output = "V";
		}
		else
		{
			output = "v";
		}
	}
	if (keycode == sf::Keyboard::W)
	{
		if (capitalized)
		{
			output = "W";
		}
		else
		{
			output = "w";
		}
	}
	if (keycode == sf::Keyboard::X)
	{
		if (capitalized)
		{
			output = "X";
		}
		else
		{
			output = "x";
		}
	}
	if (keycode == sf::Keyboard::Y)
	{
		if (capitalized)
		{
			output = "Y";
		}
		else
		{
			output = "y";
		}
	}
	if (keycode == sf::Keyboard::Z)
	{
		if (capitalized)
		{
			output = "Z";
		}
		else
		{
			output = "z";
		}
	}
	if (keycode == sf::Keyboard::Num1)
	{
		if (capitalized)
		{
			output = "!";
		}
		else
		{
			output = "1";
		}
	}
	if (keycode == sf::Keyboard::Num2)
	{
		if (capitalized)
		{
			output = "@";
		}
		else
		{
			output = "2";
		}
	}
	if (keycode == sf::Keyboard::Num3)
	{
		if (capitalized)
		{
			output = "#";
		}
		else
		{
			output = "3";
		}
	}
	if (keycode == sf::Keyboard::Num4)
	{
		if (capitalized)
		{
			output = "$";
		}
		else
		{
			output = "4";
		}
	}
	if (keycode == sf::Keyboard::Num5)
	{
		if (capitalized)
		{
			output = "%";
		}
		else
		{
			output = "5";
		}
	}
	if (keycode == sf::Keyboard::Num6)
	{
		if (capitalized)
		{
			output = "^";
		}
		else
		{
			output = "6";
		}
	}
	if (keycode == sf::Keyboard::Num7)
	{
		if (capitalized)
		{
			output = "&";
		}
		else
		{
			output = "7";
		}
	}
	if (keycode == sf::Keyboard::Num8)
	{
		if (capitalized)
		{
			output = "*";
		}
		else
		{
			output = "8";
		}
	}
	if (keycode == sf::Keyboard::Num9)
	{
		if (capitalized)
		{
			output = "(";
		}
		else
		{
			output = "9";
		}
	}
	if (keycode == sf::Keyboard::Num0)
	{
		if (capitalized)
		{
			output = ")";
		}
		else
		{
			output = "0";
		}
	}
	if (keycode == sf::Keyboard::Space)
	{
		output = " ";
	}
	if (keycode == sf::Keyboard::Backspace)
	{
		deleteLastCharacter();
		output = "";
	}

	std::cout << output;
	return output;
}

void TextBox::addTextToString(std::string newText)
{
	textString1 = textString1 + newText;
	text.setString(textString1);
}

void TextBox::deleteLastCharacter()
{
	textString1 = textString1.substr(0, textString1.size() - 1);
}
