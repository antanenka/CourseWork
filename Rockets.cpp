#include "Rockets.h"
#include "Planets.h"
#include <string>
#include <iostream>

int planetToLand;


void RocketBehaviour(Planets* array) {
    Rockets rocket("meow", 8);
    rocket.ar = array;
    rocket.Interaction(planetToLand, array);

}
