#ifndef SFMLENGINE_HPP
#define SFMLENGINE_HPP

#include "../inc/common.hpp"

class SfmlEngine {
private:
	
	sf::Vector2i windowRes;
	sf::RenderWindow window;
	sf::View view;
	
	std::vector<int> moves; // left, right, up, down
	std::vector<sf::Font> fnt;
	std::vector<std::string> fileIn;
	std::vector<std::string> settings;
	
	sf::Clock clock;
    sf::Time dt;
	float dtAsSeconds;
	
	int gameType;
	
public:
	
	SfmlEngine();
	
	bool isOpen();
	
	void defaultLoop();
	void defaultLoop(sf::Color col, std::vector<sf::RectangleShape> &rects);
	
	void events();
	void update();
	
	void clear();
	void clear(sf::Color col);
	void drawEntity(std::vector<sf::RectangleShape> &rects);
	void display();
	void draw();
	void draw(sf::Color col, std::vector<sf::RectangleShape> &rects);
	
	float getTime();
	
	std::vector<int>& getMoves();
	
	void loadFont();
	void loadFont(std::string fntName);
	sf::Font getFont(int i);
	
	void readFile(std::string a);
	void readSettings();
	void execSettings();
};

#endif
