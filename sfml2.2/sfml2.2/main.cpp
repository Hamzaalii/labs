#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <cmath>

int main()
{
    sf::Clock clock;
    float timePrevious = 0;
    float x = 0;
    float speedX = 100.f;
    constexpr int pointCount = 200;
    const sf::Vector2f roseRadius = {200.f, 80.f};
    const float amplitude = 80.f;
    const float period = 2;

    sf::ContextSettings settings;
    settings.antialiasingLevel = 8;
    sf::RenderWindow window(sf::VideoMode({800, 600}), "Rose",
                            sf::Style::Default, settings);
    sf::Vector2f position = {400, 320};
    sf::ConvexShape rose;
    rose.setPosition(position);
    rose.setFillColor(sf::Color(250, 128, 114));

    rose.setPointCount(pointCount);
    for (int pointNo = 0; pointNo < pointCount; ++pointNo)
    {
        float angle = float(2 * M_PI * pointNo) / float(pointCount);
        float roseRadius = 200 * sin(6 * angle);
        sf::Vector2f point =
            {
                roseRadius * std::sin(angle),
                roseRadius * std::cos(angle)};
        rose.setPoint(pointNo, point);
    }

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }

        const float time = clock.getElapsedTime().asSeconds();
        const float wavePhase = time * float(2 * M_PI);
        const float x = amplitude * std::cos(wavePhase / period);
        const float y = amplitude * std::sin(wavePhase / period);
        const sf::Vector2f offset = {x, y};

        rose.setPosition(position + offset);

        window.clear();
        window.draw(rose);
        window.display();
    }
}
