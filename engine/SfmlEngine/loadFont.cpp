#include "../SfmlEngine.hpp"

void SfmlEngine::loadFont() {
    sf::Font tmp;
    if (!tmp.loadFromFile("../fnt/UbuntuMono-B.ttf")) {
        std::cout << "Error loading font" << std::endl;
    } else {
        fnt.push_back(tmp);
    }
}

void SfmlEngine::loadFont(std::string fntName) {
    sf::Font tmp;
    if (!tmp.loadFromFile(fntName)) {
        std::cout << "Error loading font" << std::endl;
    } else {
        fnt.push_back(tmp);
    }
}