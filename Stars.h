#ifndef Stars_h
#define Stars_h

#include "SpaceObjects.h"
#include "Planets.h"

#include <iostream>
#include <string>



class Stars :public SpaсeObjects {
public:
    int quantity;
    int i;
    Planets* arr;

    bool operator==(const Stars& other) {
        return this->brightness == other.brightness;
    }

    Stars(std::string name, int radius, int brightness, int quantity) {
        this->name = name;
        this->radius = radius;
        this->brightness = brightness;
        this->quantity = quantity;
    }

    void PlanetSystem(int show) {
        for (i = 0; i <= quantity; i++) {
            std::cout << "(" << i + 1 << ") " << arr[i].name << "\t weight = " << arr[i].weight << " Earth masses\t radius = " << arr[i].radius << "km" << std::endl;
        }
        std::cout << "Weight of all planets is " << arr[8].weight << " masses of Earth" << std::endl;
    }
protected:
    int brightness;
};


#endif /* Stars_h */
