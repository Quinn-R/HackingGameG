#include "../SfmlEngine.hpp"

void SfmlEngine::readSettings() {
	readFile();
	
	for(int i = 0; i < fileIn.size(); i++) {
		settings.push_back(fileIn[i]);
	}
}
