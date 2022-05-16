#include "Stars.h"
#include "Planets.h"
int planet2;

void StarsBehaviour(Planets* array) {
    Stars star("Sun", 696340, -26.74, 7);
    Stars star1("Sirius", 1190513.8, -1.44, 0);
    star.arr = array;
    star.PlanetSystem(planet2);
    bool result = star == star1;
}
