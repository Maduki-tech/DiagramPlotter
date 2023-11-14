#include "coordinateSystem.h"
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>

const int WIDTH = 800;
const int HEIGHT = 600;

const int BOTTOM_PADDING = 20;
const int LEFT_PADDING = -20;

void drawRectangles(sf::RenderWindow &window, const std::vector<int> &v) {

    int height = window.getSize().y;
    for (int i = 0; i < v.size() + 1; ++i) {
        sf::RectangleShape rectangle(sf::Vector2f(100, 100 * v[i] * -1));
        rectangle.setOrigin(LEFT_PADDING, BOTTOM_PADDING);
        rectangle.setPosition(100 * i + i * 20, height);
        rectangle.setFillColor(sf::Color::Red);
        window.draw(rectangle);
    }
}

int main(int argc, char *argv[]) {
    const std::vector<int> v = {1, 2, 3, 4, 5};

    sf::RenderWindow window(sf::VideoMode(WIDTH, HEIGHT), "SFML works!");

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        // draw here
        /* drawRectangles(window, v); */

        CoordinateSystem cs(WIDTH, HEIGHT, BOTTOM_PADDING, LEFT_PADDING, 0, 0,
                            100, 100, 0, 0, 10, 10, window);

        cs.draw();

        window.display();
    }

    return 0;
}
