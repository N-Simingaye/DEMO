//#include <iostream>
//#include "Game.h"
//using namespace std;
//
//
//
//int main() {
//	//Initialize random seed
//	srand(static_cast<unsigned>(time(0)));
//
//	//Initialize game object
//	Game game;
//
//	//Game loop
//	while (game.running()) {
//		game.update();
//		game.render();
//	
//	}
//
//	//End of application
//
//	return 0;
////}

#include <iostream>
#include <cmath>
using namespace std;

void rotation(double &a, double &b, double &c);
int main() {
	double x;
	double y;
	double z;

	cout << "Enter Original Point X" << endl;
	cin >> x;
	cout << "Enter Original Point Y" << endl;
	cin >> y;
	cout << "Enter Angle of Rotation:" << endl;
	cin >> z;
	rotation(x, y, z);
	cout << "Your new point is " <<"(" << x << "," << y << ")" <<"At angle of: " << z << endl;
	return 0;
}

void rotation(double& a, double& b, double& c) {
	a = a * cos(c) + (b * sin(c));
	b = (-a) * sin(c) + (b) * (cos(c));
}























































   
//#include <SFML/Graphics.hpp>
//#include <iostream>
//#include <SFML/System.hpp>
//#include <fstream>
//#include <sstream>
//#include <thread>
//#include <chrono>
//
//int main() {
//    // Create a window
//    sf::RenderWindow window(sf::VideoMode(1000, 1000), "Murder Mystery!!");
//
//    // Load a texture from a file
//    sf::Texture texture;
//    if (!texture.loadFromFile("coverPic.png"))
//    {
//        std::cerr << "Error loading image.png" << std::endl;
//        return -1;
//    }
//
//    // Create a sprite and set the texture
//    sf::Sprite sprite;
//    sprite.setTexture(texture);
//
//    // Position the sprite (optional)
//    sprite.setPosition(0, 0);
//    sf::Clock clock;
//    // Main loop
//    while (window.isOpen()) {
//        sf::Event event;
//        sf::Time elapsed = clock.getElapsedTime();
//        while (window.pollEvent(event)) {
//            if (event.type == sf::Event::Closed)
//                window.close();
//        }
//
//        size_t index = 0;
//        if (elapsed.asSeconds() >= 5.0f && elapsed.asSeconds() < 7.0f) {
//            if (!texture.loadFromFile("house.png"))
//            {
//                std::cerr << "Error loading image.png" << std::endl;
//                return -1;
//            }
//            window.clear(sf::Color::Black);
//            window.draw(sprite);
//            window.display();
//        } else if (elapsed.asSeconds() >= 7.0f) {
//            
//            if (!texture.loadFromFile("house.png"))
//            {
//                std::cerr << "Error loading image.png" << std::endl;
//                return -1;
//            }
//            sf::Font font;
//            if (!font.loadFromFile("arial.ttf")) {  // Use an existing font file
//                std::cerr << "Error loading font!" << std::endl;
//                return -1;
//            }
//
//            std::ifstream file("intro.txt");
//            if (!file) {
//                std::cerr << "Error opening text.txt" << std::endl;
//                return -1;
//            }
//
//            std::stringstream buffer;
//            buffer << file.rdbuf();
//            std::string textContent = buffer.str();
//            std::string displayedText = "";
//            sf::Text text;
//            text.setFont(font);
//            //text.setString(textContent);
//            text.setCharacterSize(35);  // Font size
//            text.setFillColor(sf::Color::Black);  // Text color
//            text.setPosition(180, 400);
//            sprite.setTexture(texture);
//            sprite.setPosition(0, 0);
//
//            sf::RectangleShape rectangle(sf::Vector2f(645.f, 200.f)); // Width: 200, Height: 100
//            rectangle.setFillColor(sf::Color::White);  // Set color
//            rectangle.setPosition(150.f, 390.f);  
//
//            if (clock.getElapsedTime().asSeconds() > 0.2f && index < textContent.size()) {
//                displayedText += textContent[index];
//                text.setString(displayedText);
//                index++;
//            }
//
//            window.clear(sf::Color::Black);
//            window.draw(sprite);
//            window.draw(rectangle);
//            window.draw(text);
//            window.display();
//
//        }
//        else {
//            window.clear(sf::Color::Black);
//            window.draw(sprite);
//            window.display();
//        }
//        // Clear, draw, and display
//        
//
//    }
//
//    return 0;
//}
//
//void typewriterEffect(const std::string& text, int delayMs = 50) {
//    for (char ch : text) {
//        std::cout << ch << std::flush; // Print character immediately
//        std::this_thread::sleep_for(std::chrono::milliseconds(delayMs)); // Delay
//    }
//    std::cout << std::endl;
//}


