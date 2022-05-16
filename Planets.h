#ifndef Planets_h
#define Planets_h

#include "SpaceObjects.h"

#include <string>

class Planets : public SpaсeObjects {
    friend class Rockets;
    friend class Stars;
    friend class Comets;
public:
    Planets() {
        radius = weight = 0;
        name = "0";
    }
    Planets(std::string name, int radius, long double weight) {
        this->name = name;
        this->radius = radius;
        this->weight = weight;
    }

    Planets operator+=(const Planets& other) {
        Planets sum;
        sum.weight = this->weight += other.weight;
        return sum;
    }

protected:
    long double weight;
};

#endif  /*Planets_h */
