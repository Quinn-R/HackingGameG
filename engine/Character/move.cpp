#include "../Character.hpp"

void Character::move(std::vector<int> &moves, float dtAsSeconds, std::vector<sf::RectangleShape> &objects, int objCollider) {
    
    
    sf::Vector2f objectPos = getPosition();

    if(moves[0] == 1 && objectCollides[0] == 0) {
        objectPos.x -= objectSpeed * dtAsSeconds;
    } else if(objectCollides[0] == 1) {
        objectPos.x -= intersect.x;
        // objectPos.x += 1;
    }

    if(moves[1] == 1 && objectCollides[1] == 0) {
        objectPos.x += objectSpeed * dtAsSeconds;
    } else if(objectCollides[1] == 1) {
        objectPos.x += intersect.x;
        // objectPos.x -= 1;
    }

    if(moves[2] == 1 && objectCollides[2] == 0) {
        objectPos.y -= objectSpeed * dtAsSeconds;
    } else if(objectCollides[2] == 1) {
        objectPos.y -= intersect.y;
        // objectPos.y += 1;
    }

    if(moves[3] == 1 && objectCollides[3] == 0) {
        objectPos.y += objectSpeed * dtAsSeconds;
    } else if(objectCollides[3] == 1) {
        objectPos.y += intersect.y;
        // objectPos.y -= 1;
    }
    //std::cout << "intersect.y = " << intersect.y << std::endl;
    //std::cout << "objectPos.y = " << objectPos.y << std::endl;
    //std::cout << "collide: " << objectCollides[0] << objectCollides[1] << objectCollides[2] << objectCollides[3] << std::endl;
    
    resetCollide();
    setPosition(objectPos);
    collide(objects, objCollider);
    //setBumperPosition();
}
