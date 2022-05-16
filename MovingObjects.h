#ifndef MovingObjects_h
#define MovingObjects_h

#include <string>
#include "Planets.h"

class MovingObjects {
public:
    virtual void Interaction(int planet, Planets* array) = 0;
protected:
    std::string name;
};

#endif /* MovingObjects_h */
