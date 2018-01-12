#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({1000, 400}), "Inicials");

    window.clear();

    sf::CircleShape shape2(56);
    shape2.setPosition({200, 100});
    shape2.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape2);

    sf::CircleShape shape3(40);
    shape3.setPosition({215, 113});
    shape3.setFillColor(sf::Color(00, 00, 00));
    window.draw(shape3);

    sf::CircleShape shape4(65);
    shape4.setPosition({200, 190});
    shape4.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape4);

    sf::CircleShape shape5(45);
    shape5.setPosition({215, 207});
    shape5.setFillColor(sf::Color(00, 00, 00));
    window.draw(shape5);

    sf::RectangleShape shape1;
    shape1.setSize({26, 215});
    shape1.setPosition({200, 100});
    shape1.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape1);

    sf::RectangleShape shape6;
    shape6.setSize({240, 20});
    shape6.setRotation(70);
    shape6.setPosition({450, 100});
    shape6.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({240, 20});
    shape7.setRotation(110);
    shape7.setPosition({450, 106});
    shape7.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({100, 20});
    shape8.setPosition({390, 210});
    shape8.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({240, 20});
    shape9.setRotation(70);
    shape9.setPosition({650, 100});
    shape9.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({240, 20});
    shape10.setRotation(110);
    shape10.setPosition({650, 106});
    shape10.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape10);

    sf::RectangleShape shape11;
    shape11.setSize({100, 20});
    shape11.setPosition({590, 210});
    shape11.setFillColor(sf::Color(210, 105, 30));
    window.draw(shape11);

    window.display();

    sf::sleep(sf::seconds(5));
}
