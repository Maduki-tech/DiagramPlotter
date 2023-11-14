#include "coordinateSystem.h"
#include <iostream>

CoordinateSystem::CoordinateSystem(int width, int height, int bottomPadding,
                                   int leftPadding, int topPadding,
                                   int rightPadding, int xScale, int yScale,
                                   int xOrigin, int yOrigin, int xMax, int yMax,
                                   sf::RenderWindow &window)
    : width(width), height(height), bottomPadding(bottomPadding),
      leftPadding(leftPadding), topPadding(topPadding),
      rightPadding(rightPadding), xScale(xScale), yScale(yScale),
      xOrigin(xOrigin), yOrigin(yOrigin), xMax(xMax), yMax(yMax),
      window(window) {}

CoordinateSystem::~CoordinateSystem() {}

int CoordinateSystem::getWidth() const { return width; }
int CoordinateSystem::getHeight() const { return height; }
int CoordinateSystem::getBottomPadding() const { return bottomPadding; }
int CoordinateSystem::getLeftPadding() const { return leftPadding; }
int CoordinateSystem::getTopPadding() const { return topPadding; }
int CoordinateSystem::getRightPadding() const { return rightPadding; }
int CoordinateSystem::getXScale() const { return xScale; }
int CoordinateSystem::getYScale() const { return yScale; }
int CoordinateSystem::getXOrigin() const { return xOrigin; }
int CoordinateSystem::getYOrigin() const { return yOrigin; }
int CoordinateSystem::getXMax() const { return xMax; }
int CoordinateSystem::getYMax() const { return yMax; }

void CoordinateSystem::draw() {

    /* sf::RenderWindow(&window).clear(sf::Color::Black); */

    sf::RectangleShape xAxis(sf::Vector2f(width, 1));
    xAxis.setPosition(0, height - bottomPadding);
    xAxis.setFillColor(sf::Color::White);
    window.draw(xAxis);

    sf::RectangleShape yAxis(sf::Vector2f(1, height));
    yAxis.setPosition(leftPadding, 0);
    yAxis.setFillColor(sf::Color::White);
    window.draw(yAxis);


    window.display();
}
