#pragma once
#include "SFML/Graphics.hpp"

class RoundedRectangle : public sf::RectangleShape
{
public:


    explicit RoundedRectangle(const sf::Vector2f& radius = sf::Vector2f(0, 0));

    void setRadius(const sf::Vector2f& radius);

    const sf::Vector2f& getRadius() const;

    void setPointsPerCorner(int points);

    int getPointsPerCorner() const;

    virtual std::size_t getPointCount() const override;

    virtual sf::Vector2f getPoint(std::size_t index) const override;

private:

    int pointsPerCorner;

    sf::Vector2f m_radius;
};
