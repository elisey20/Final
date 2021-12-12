//
// Created by 79963 on 11.12.2021.
//

#ifndef FINAL_AIRPORT_H
#define FINAL_AIRPORT_H

#include <iostream>

using namespace std;

// Используется паттерн синглтон
class Airport
{
protected:
    Airport(string &name): name(name) {}

    static Airport* instance;
    string name;

public:
    Airport(Airport& airport) = delete;
    void operator=(const Airport& airport) = delete;

    static Airport *getInstance(const string &name)
    {
        if (instance == nullptr)
            instance = new Airport(name);
        return instance;
    }
};

Airport* Airport::instance = nullptr;


#endif //FINAL_AIRPORT_H
