#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode({800, 500}), "Inicials");

    window.clear();

    sf::RectangleShape shape1;
    shape1.setSize({800, 25});
    shape1.setPosition({0, 400});
    shape1.setFillColor(sf::Color(110, 139, 61));
    window.draw(shape1);

    sf::RectangleShape shape2;
    shape2.setSize({800, 25});
    shape2.setPosition({0, 425});
    shape2.setFillColor(sf::Color(162, 205, 90));
    window.draw(shape2);

    sf::RectangleShape shape3;
    shape3.setSize({800, 25});
    shape3.setPosition({0, 450});
    shape3.setFillColor(sf::Color(188, 208, 104));
    window.draw(shape3);

    sf::RectangleShape shape4;
    shape4.setSize({800, 25});
    shape4.setPosition({0, 475});
    shape4.setFillColor(sf::Color(202, 225, 112));
    window.draw(shape4);

    sf::RectangleShape shape5;
    shape5.setSize({800, 400});
    shape5.setPosition({0, 0});
    shape5.setFillColor(sf::Color(79, 148, 205));
    window.draw(shape5);

    sf::RectangleShape shape6;
    shape6.setSize({700, 350});
    shape6.setPosition({100, 0});
    shape6.setFillColor(sf::Color(108, 166, 205));
    window.draw(shape6);

    sf::RectangleShape shape7;
    shape7.setSize({600, 300});
    shape7.setPosition({200, 0});
    shape7.setFillColor(sf::Color(126, 192, 238));
    window.draw(shape7);

    sf::RectangleShape shape8;
    shape8.setSize({500, 250});
    shape8.setPosition({300, 0});
    shape8.setFillColor(sf::Color(135, 206, 255));
    window.draw(shape8);

    sf::RectangleShape shape9;
    shape9.setSize({400, 200});
    shape9.setPosition({400, 0});
    shape9.setFillColor(sf::Color(174, 238, 238));
    window.draw(shape9);

    sf::RectangleShape shape10;
    shape10.setSize({300, 150});
    shape10.setPosition({500, 0});
    shape10.setFillColor(sf::Color(245, 245, 245));
    window.draw(shape10);

    sf::CircleShape shape11(40);
    shape11.setPosition({700, 20});
    shape11.setFillColor(sf::Color(255, 236, 139));
    window.draw(shape11);

    sf::RectangleShape shape12;
    shape12.setSize({300, 200});
    shape12.setPosition({255, 240});
    shape12.setFillColor(sf::Color(47, 79, 79));
    window.draw(shape12);

    sf::ConvexShape shape13;
    shape13.setFillColor(sf::Color(238, 118, 33));
    shape13.setPosition(402, 175);
    shape13.setPointCount(4);
    shape13.setPoint(0, {-150, 0});
    shape13.setPoint(1, {+150, 0});
    shape13.setPoint(2, {+180, 80});
    shape13.setPoint(3, {-180, 80});
    window.draw(shape13);

    sf::RectangleShape shape14;
    shape14.setSize({80, 140});
    shape14.setPosition({300, 300});
    shape14.setFillColor(sf::Color(238, 118, 33));
    window.draw(shape14);

    sf::RectangleShape shape15;
    shape15.setSize({30, 70});
    shape15.setPosition({450, 125});
    shape15.setFillColor(sf::Color(47, 79, 79));
    window.draw(shape15);

    sf::RectangleShape shape151;
    shape151.setSize({50, 50});
    shape151.setPosition({440, 105});
    shape151.setFillColor(sf::Color(47, 79, 79));
    window.draw(shape151);

    sf::CircleShape shape16(15);
    shape16.setPosition({450, 72});
    shape16.setFillColor(sf::Color(79, 148, 205));
    window.draw(shape16);

    sf::CircleShape shape17(17);
    shape17.setPosition({457, 55});
    shape17.setFillColor(sf::Color(108, 166, 205));
    window.draw(shape17);

    sf::CircleShape shape18(20);
    shape18.setPosition({470, 35});
    shape18.setFillColor(sf::Color(126, 192, 238));
    window.draw(shape18);

    sf::CircleShape shape19(23);
    shape19.setPosition({485, 16});
    shape19.setFillColor(sf::Color(135, 206, 255));
    window.draw(shape19);

    window.display();

    sf::sleep(sf::seconds(10));
}
