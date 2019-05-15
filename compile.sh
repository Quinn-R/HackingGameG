clear

g++ -std=c++11 -pthread src/*.cpp inc/*.hpp engine/*.hpp engine/*/*.cpp -Ilib/SFML-2.5.1/include -Llib/SFML-2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system -o bin/app 