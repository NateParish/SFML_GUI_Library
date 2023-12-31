#include "RoundedRectangle.h"
#include <iostream>
#include <cmath>

RoundedRectangle::RoundedRectangle(const sf::Vector2f& radius) : m_radius(radius)
{
    update();
}

void RoundedRectangle::setRadius(const sf::Vector2f& radius)
{
    m_radius = radius;
    update();
}

const sf::Vector2f& RoundedRectangle::getRadius() const
{
    return m_radius;
}

std::size_t RoundedRectangle::getPointCount() const
{
    return 10;
}

sf::Vector2f RoundedRectangle::getPoint(std::size_t index) const
{
    static const float pi = 3.141592654;

    //std::cout << index << std::endl;

    float x = 0;
    float y = 0;
    

    float pointsPerCorner = 2;

    int p1 = 0;
    int p2 = 1;
    int c1Start = p2+1;

    int p3 = c1Start + pointsPerCorner;
    int p4 = p3 + 1;

    int c2Start = p4 + 1;
    int p5 = p4 + pointsPerCorner + 1;
    int p6 = p5+1;
    int p7 = 8;
    int p8 = 9;

    
    if (index == p1)
    {
        x = getRadius().x;
        y = 0;
        //std::cout << p1 << index << std::endl;
        std::cout << "INDEX " << index << " x " << x << " y " << y << std::endl;
    }
    if (index == p2)
    {
        x = getSize().x - getRadius().x;
        y = 0;
        //std::cout << p2 << index << std::endl;
        std::cout << "INDEX " << index << " x " << x << " y " << y << std::endl;
    }


    if (index >= 2)
        
    {
        if (index < p3)
        {
            int cornerIndex = pointsPerCorner - (index - c1Start);

            float angle = 2 * pi / 12;
            float vx = cos(cornerIndex * angle);
            float vy = sin(cornerIndex * angle);
            float xVector = getRadius().x * vx;
            float yVector = getRadius().x * vy;

            x = getSize().x - getRadius().x + xVector;
            y = getRadius().x - vy * getRadius().x;
            //std::cout << "CURVE:" << index << std::endl;
            
            std::cout << "CURVE 1 INDEX " << index << " x " << x << " y " << y << std::endl;

        }

    }

    if (index == p3)
    {
        x = getSize().x;
        y = getRadius().x;
        //std::cout << p3 << index << std::endl;
        std::cout << "INDEX " << index << " x " << x << " y " << y << std::endl;
    }


    if (index == p4)
    {
        x = getSize().x;
        y = getSize().y - getRadius().x;
        //std::cout << p4 << index << std::endl;
        std::cout <<"INDEX " << index << " x " << x << " y " << y << std::endl;
    }

    if (index > p4)

    {
        if (index < p5)
        {
            //std::cout << index << " " << p4 << " " << p5 <<std::endl;

            int cornerIndex = pointsPerCorner - (index - c2Start);

            float angle = 2 * pi / 12;
            float vx = cos(cornerIndex * angle);
            float vy = sin(cornerIndex * angle);
            float xVector = getRadius().x * vx;
            float yVector = getRadius().x * vy;

            //x = getSize().x - getRadius().x + xVector;
            //y = getSize().y - getRadius().x + yVector;
            //y = getSize().y - getRadius().x;
            x = 500 - 10 * (index-5);
            y = 350 + 10 * index;
            std::cout << "CURVE 2 INDEX " << index << " x " << x << " y " << y << std::endl;

        }

    }



    if (index == p5)
    {
        x = getSize().x - getRadius().x;
        y = getSize().y;
        //std::cout << p5 << index << std::endl;
        std::cout << "INDEX XX" << index << " x " << x << " y " << y << std::endl;
    }
    if (index == p6)
    {
        x = getRadius().x;
        y = getSize().y;
        //std::cout << p6 << index << std::endl;
        std::cout << "INDEX XY" << index << " x " << x << " y " << y << std::endl;
    }
    if (index == p7)
    {
        x = 0;
        y = getSize().y - getRadius().x;
        //std::cout << p7 << index << std::endl;
        std::cout << "INDEX " << index << " x " << x << " y " << y << std::endl;
    }
    if (index == p8)
    {
        x = 0;
        y = getRadius().x;
       // std::cout << p8 << index << std::endl;
        std::cout << "INDEX " << index << " x " << x << " y " << y << std::endl;
    }

    //float angle = index * 2 * pi / getPointCount() - pi / 2;
    //float x = std::cos(angle) * m_radius.x;
    //float y = std::sin(angle) * m_radius.y;

    return sf::Vector2f(x,y);
}

