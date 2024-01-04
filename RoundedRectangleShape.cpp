#include "RoundedRectangleShape.h"


RoundedRectangle::RoundedRectangle()
{
    pointsPerCorner = 10;
    cornerRadius = 0;
    update();
}

void RoundedRectangle::setRadius(float cornerRadius)
{

    const sf::Vector2f radiusAsVector(cornerRadius,0);      
    m_radius = radiusAsVector;
    update();
}

const sf::Vector2f& RoundedRectangle::getRadius() const
{
    return m_radius;
}

void RoundedRectangle::setPointsPerCorner(const int points)
{
    pointsPerCorner = points;
}

int RoundedRectangle::getPointsPerCorner() const
{
    return pointsPerCorner;
}



std::size_t RoundedRectangle::getPointCount() const
{
    
    int totalPoints = 8 + (getPointsPerCorner() * 4);

    return totalPoints;
}

sf::Vector2f RoundedRectangle::getPoint(std::size_t index) const
{
    static const float pi = 3.141592654;
    int points = getPointsPerCorner();

    float x = 0;
    float y = 0;
    int circleSegmentCount = 4 * (points+1);

    int p1 = 0;
    int p2 = 1;
    int c1Start = p2+1;

    int p3 = c1Start + points;
    int p4 = p3 + 1;

    int c2Start = p4 + 1;
    int p5 = c2Start + points;
    int p6 = p5+1;

    int c3Start = p5 + 1;

    int p7 = c3Start + points + 1;;
    int p8 = p7+1;

    int c4Start = p8 + 1;

    // Top Line

    if (index == p1)
    {
        x = getRadius().x;
        y = 0;

    }
    if (index == p2)
    {
        x = getSize().x - getRadius().x;
        y = 0;

    }

    //*********** Top Right Curve *****************

    if (index >= 2)
        
    {
        if (index < p3)
        {
            int cornerIndex = points - (index - c1Start);

            float angle = 2 * pi / circleSegmentCount;
            float vx = cos(cornerIndex * angle);
            float vy = sin(cornerIndex * angle);
            float xVector = getRadius().x * vx;
            float yVector = getRadius().x * vy;

            x = getSize().x - getRadius().x + xVector;
            y = getRadius().x - yVector;

        }
    }

    //right line

    if (index == p3)
    {
        x = getSize().x;
        y = getRadius().x;
    }


    if (index == p4)
    {
        x = getSize().x;
        y = getSize().y - getRadius().x;
    }

    //*********** Bottom Right Curve *****************

    if (index > p4)

    {
        if (index < p5)
        {

            int cornerIndex = (index - c2Start) + 1;

            float angle = 2*pi - ((2 * pi / circleSegmentCount));
            float vx = cos(cornerIndex * angle);
            float vy = sin(cornerIndex * angle);
            float xVector = getRadius().x * vx;
            float yVector = getRadius().x * vy;

            x = getSize().x- getRadius().x + xVector;
            y = getSize().y - getRadius().x - yVector;

        }
    }

    // Bottom Line

    if (index == p5)
    {
        x = getSize().x - getRadius().x;
        y = getSize().y;
    }
    if (index == p6)
    {
        x = getRadius().x;
        y = getSize().y;
    }

    //*********** Bottom Left Curve *****************

    if (index > p6)

    {
        if (index < p7)
        {
            int cornerIndex = points - (index - c3Start) + 1;

            float angle = 2 * pi - ((2 * pi / circleSegmentCount));
            float vx = cos(cornerIndex * angle);
            float vy = sin(cornerIndex * angle);
            float xVector = getRadius().x * vx;
            float yVector = (getRadius().x * vy);

            x = getRadius().x - xVector;
            y = getSize().y - getRadius().x - yVector;
        }
    }

    // Left Line

    if (index == p7)
    {
        x = 0;
        y = getSize().y - getRadius().x;
    }
    if (index == p8)
    {
        x = 0;
        y = getRadius().x;
    }


    //*********** Top Left Curve *****************

    if (index > p8)

    {
        int cornerIndex = (index - c4Start) + 1;

        float angle = 2 * pi - ((2 * pi / circleSegmentCount));
        float vx = cos(cornerIndex * angle);
        float vy = sin(cornerIndex * angle);
        float xVector = getRadius().x * vx;
        float yVector = getRadius().x * vy;

        x = getRadius().x - xVector;
        y =  getRadius().x + yVector;
    }

    return sf::Vector2f(x,y);
}

