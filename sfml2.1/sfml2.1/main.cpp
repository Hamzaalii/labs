#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <cmath>

constexpr unsigned WINDOW_WIDTH = 800;
constexpr unsigned WINDOW_HEIGHT = 600;

int main()
{
    constexpr float BALL_SIZE = 40;

    sf::RenderWindow window(sf::VideoMode({WINDOW_WIDTH, WINDOW_HEIGHT}), "Wave Maoing Ball");
    sf::Clock clock;

    const sf::Vector2f position = {10, 350};

    sf::CircleShape ball(BALL_SIZE);
    ball.setFillColor(sf::Color(0xFF, 0xFF, 0xFF));
    float speedX = 100.f;

    float time = 0;
    float x = 0.f;

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

        constexpr float amplitudeY = 80.f;
        constexpr float periodY = 2;

        const float dt = clock.restart().asSeconds();
        time = time + dt;
        const float wavePhase = time * float(2 * M_PI);
        float x = x + speedX * dt;
        const float y = amplitudeY * std::sin(wavePhase / periodY);
        sf::Vector2f offset = {x, y};

        if ((x + 2 * BALL_SIZE >= WINDOW_WIDTH) && (speedX > 0))
        {
            speedX = -speedX;
        }

        if ((x < 0) && (speedX < 0))
        {
            speedX = -speedX;
        }

        {
            ball.setFillColor(sf::Color(0x0, 0xFF, 0xFF));
        }

        ball.setPosition(position + offset);

        window.clear();
        window.draw(ball);
        window.display();
    }
}
