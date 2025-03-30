#include <SFML/Graphics.hpp>

int main() {

    //-----------------------------------------Initialize---------------------------------------
    sf::RenderWindow window(sf::VideoMode(800,600), "RPG Game"); 
    sf::CircleShape shape(50.0f);
    shape.setFillColor(sf::Color::Yellow);
    shape.setPosition(sf::Vector2f(100,100));
    sf::RectangleShape rectanangle(sf::Vector2f(100, 50));
    rectanangle.setFillColor(sf::Color::Blue);
    rectanangle.setPosition(sf::Vector2f(100,100));
    //-----------------------------------------Initialize---------------------------------------

    //main game loop
    while(window.isOpen()){

        //-----------------------------------Update------------------------------
        sf::Event event;
        while (window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
        }
        //-----------------------------------Update------------------------------

        //-----------------------------------Draw--------------------------------
        window.clear(sf::Color::Red);


        window.draw(shape);
        window.draw(rectanangle);

        window.display();
        //-----------------------------------Draw--------------------------------


    }

    return 0;
}
