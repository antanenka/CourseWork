#include "Comets.h"
#include <string>
#include <iostream>
int planetToDestoy;

void CometBehaviour(Planets* array) {
    Comets comet("meow", 7);
    comet.arra = array;
    comet.Interaction(planetToDestoy, array);
}
