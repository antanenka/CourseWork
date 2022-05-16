#ifndef Comets_h
#define Comets_h

#include "MovingObjects.h"
#include "Planets.h"

#include <iostream>
#include <string>

class Comets :public MovingObjects {
public:
    int length;
    Planets* arra;
    Comets(std::string name, int length) {
        this->name = name;
        this->length = length;
    }
    void Interaction(int planetToDestroy, Planets* arra) override {
        for (int i = 0; i < length; i++) {
            std::cout << "(" << (i + 1) << ") " << arra[i].name << std::endl;
        }
        std::cin >> planetToDestroy;
        std::cout << "The comet destroyed " << arra[planetToDestroy - 1].name << "!" << std::endl;

    }
private:
    std::string planetToDestroy;
};
#endif /* Comets_hpp */
