#include "../inc/common.hpp"

int main()
{
	std::cout << "Hello!\n";
	
	bool exit = 0;
	
	while(exit != 1) {
		char a;
		
		std::cin >> a;
		
		if(a == 27) {
			std::cout << "Hello!\n";
		}
	}
	
	return 0;
}
