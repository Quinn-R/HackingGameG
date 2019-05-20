#include "../SfmlEngine.hpp"

void SfmlEngine::execSettings() {
	std::string tmp;
	for(int i = 0; i < settings.size() - 1; i++) {
		if(settings[i] == "FontName:") {
			tmp = settings[i + 1];
			if(tmp[0] == "\"" && tmp[tmp.size() - 1] == "\"") {
				
			}
		}
	}
}
