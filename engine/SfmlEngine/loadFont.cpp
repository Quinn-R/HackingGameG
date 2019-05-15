#include "../SfmlEngine.hpp"

void SfmlEngine::loadFont() {
    if (!fnt1.loadFromFile("UbuntuMono-B.ttf")) {
        std::cout << "Error loading font" << std::endl;
    }
}

void SfmlEngine::loadFont(std::string fntName) {
    if (!fnt1.loadFromFile(fntName)) {
        std::cout << "Error loading font" << std::endl;
    }
}