#pragma once
#include <iostream>
#include <cmath>
#include "SFML/Graphics.hpp"

class RoundedRectangle : public sf::RectangleShape
{
public:


    RoundedRectangle();

    void setRadius(float radius);

    const sf::Vector2f& getRadius() const;

    void setPointsPerCorner(int points);

    int getPointsPerCorner() const;

    virtual std::size_t getPointCount() const override;

    virtual sf::Vector2f getPoint(std::size_t index) const override;

private:

    int pointsPerCorner;
    float cornerRadius;

    sf::Vector2f m_radius;

    sf::Vector2f calculateCornerVectors(int cornerIndex) const;


};
