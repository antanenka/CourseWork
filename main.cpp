#include <iostream>
#include "SpaceObjects.h"
#include "MovingObjects.h"
#include "Planets.h"
#include "Rockets.h"
#include "Comets.h"
#include "Stars.h"

int choice;




void PlanetsBehaviour(Planets*);
void RocketBehaviour(Planets* array);

void StarsBehaviour(Planets* array);
void CometBehaviour(Planets* array);
void choose();


Planets* array = new Planets[8];
int main() {

    std::cout << "CHOOSE WHAT YOU WANT TO DO" << std::endl;
    std::cout << "(1) OBSERVE THE SOLAR SYSTEM" << std::endl;
    std::cout << "(2) LAND ON A PLANET" << std::endl;
    std::cout << "(3) DESTROY A PLANET" << std::endl;

    PlanetsBehaviour(array);
    choose();
    return 0;
}


void choose() {
    std::cin >> choice;
    switch (choice) {
    case 1:
        StarsBehaviour(array);
        break;
    case 2:
        RocketBehaviour(array);
        break;
    case 3:
        CometBehaviour(array);
        break;
    default:
        std::cout << "ENTER A VALID NUMBER" << std::endl;
        choose();
    }
}
