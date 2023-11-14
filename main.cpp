#include <SFML/Graphics.hpp>
#include <iostream>

void drawRectangles(sf::RenderWindow &window, const std::vector<int> &v) {

    int height = window.getSize().y;
    for (int i = 1; i < v.size() + 1; ++i) {
        sf::RectangleShape rectangle(sf::Vector2f(100, 100 * v[i - 1] * -1));
        rectangle.setFillColor(sf::Color::Red);
        rectangle.setPosition(100 * i + i * 40, height - 50);
        window.draw(rectangle);
    }
}

int main(int argc, char *argv[]) {
    const std::vector<int> v = {1, 2, 3, 4, 5};

    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");

    while (window.isOpen()) {
        sf::Event event;

        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::Black);

        // draw here
        drawRectangles(window, v);

        window.display();
    }

    return 0;
}
