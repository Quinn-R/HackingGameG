#include "../SfmlEngine.hpp"

void SfmlEngine::readFile(std::string a) {
	std::ifstream in;
	std::string tmp;
	int i = 0;
	
	in.open(a);
	fileIn.clear();
	
	while(!in.eof()) {
		in >> tmp;
		fileIn.push_back(tmp);
	}
	
	in.close();
}
