#ifndef Rockets_hpp
#define Rockets_hpp

#include <iostream>
#include <string>

#include "MovingObjects.h"
#include "Planets.h"


class Rockets :public MovingObjects {
public:
    int size;
    Planets* ar;
    Rockets(std::string name, int size) {
        this->name = name;
        this->size = size;
    }
    void Interaction(int planetToLand, Planets* ar) override {
        std::cout << "Choose a planet to land" << std::endl;
        for (int i = 0; i < size; i++) {
            std::cout << "(" << (i + 1) << ") " << ar[i].name << std::endl;
        }
        std::cin >> planetToLand;
        std::cout << "The rocket has landed on " << ar[planetToLand - 1].name << "!" << std::endl;
    }
private:
    std::string planetToLand;
};
#endif /* Rockets_h */
