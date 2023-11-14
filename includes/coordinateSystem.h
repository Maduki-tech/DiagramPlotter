#ifndef COORDINATE_SYSTEM_H
#define COORDINATE_SYSTEM_H
#include <SFML/Graphics.hpp>

class CoordinateSystem {
  public:
    CoordinateSystem(int width, int height, int bottomPadding, int leftPadding,
                     int topPadding, int rightPadding, int xScale, int yScale,
                     int xOrigin, int yOrigin, int xMax, int yMax,
                     sf::RenderWindow &window);


    ~CoordinateSystem();
    int getWidth() const;
    int getHeight() const;
    int getBottomPadding() const;
    int getLeftPadding() const;
    int getTopPadding() const;
    int getRightPadding() const;
    int getXScale() const;
    int getYScale() const;
    int getXOrigin() const;
    int getYOrigin() const;
    int getXMax() const;
    int getYMax() const;

    void draw();

  private:
    sf::RenderWindow &window;
    int width;
    int height;
    int bottomPadding;
    int leftPadding;
    int topPadding;
    int rightPadding;
    int xScale;
    int yScale;
    int xOrigin;
    int yOrigin;
    int xMax;
    int yMax;
};

#endif // !DEBUG
