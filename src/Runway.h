//
// Created by 79963 on 13.12.2021.
//

#ifndef FINAL_RUNWAY_H
#define FINAL_RUNWAY_H

#include <iostream>

class Runway
{
private:
    std::string name;

    Runway(std::string name): name(name) {}

    friend class Airport;

public:
    std::string getName()
    {
        return name;
    }

};


#endif //FINAL_RUNWAY_H
