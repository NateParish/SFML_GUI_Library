#include "StarShape.h"
#include <iostream>

StarShape::StarShape(const sf::Vector2f& radius) : m_radius(radius)
{
    update();
}


void StarShape::setRadius(const sf::Vector2f& radius)
{
    m_radius = radius;
    update();
}

const sf::Vector2f& StarShape::getRadius() const
{
    return m_radius;
}

std::size_t StarShape::getPointCount() const
{
    return 10;
}

sf::Vector2f StarShape::getPoint(std::size_t index) const
{
    static const float pi = 3.141592654f;

    float angle = index * 2 * pi / 10 - pi / 2;
    float x = 0;
    float y = 0;

    if (index % 2 == 0) {
        x = std::cos(angle) * m_radius.x;
        y = std::sin(angle) * m_radius.x;
    }
    else {
        x = std::cos(angle) * m_radius.y;
        y = std::sin(angle) * m_radius.y;
    }

    return sf::Vector2f(m_radius.x + x, m_radius.y + y);
}
