#include "Planets.h"


void PlanetsBehaviour(Planets* ar) {
    Planets* array = new Planets[8];
    ar[0] = Planets("Mercury", 2439.7, 0.055);
    ar[1] = Planets("Venus", 6051.8, 0.815);
    ar[2] = Planets("Earth", 6371, 1);
    ar[3] = Planets("Mars", 3389.5, 0.107);
    ar[4] = Planets("Jupiter", 69911, 317.8);
    ar[5] = Planets("Saturn", 58232, 95.16);
    ar[6] = Planets("Uranus", 25362, 14.54);
    ar[7] = Planets("Neptune", 24622, 17.15);
    ar[8] = Planets();
    for (int i = 0; i < 8; i++) {
        ar[8] += ar[i];
    }
}
