#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({240, 640}), "Traffic light");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({200, 600});
    shape1.setPosition({20, 20});
    shape1.setFillColor(sf::Color(105, 105, 105));
    window.draw(shape1);

    sf::CircleShape shape2(90);
    shape2.setPosition({30, 30});
    shape2.setFillColor(sf::Color(128, 0, 0));
    window.draw(shape2);

    sf::CircleShape shape3(90);
    shape3.setPosition({30, 230});
    shape3.setFillColor(sf::Color(255, 215, 0));
    window.draw(shape3);

    sf::CircleShape shape4(90);
    shape4.setPosition({30, 430});
    shape4.setFillColor(sf::Color(0, 100, 0));
    window.draw(shape4);

    window.display();

    sf::sleep(sf::seconds(5));
}
