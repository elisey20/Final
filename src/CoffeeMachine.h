#pragma once

#include <iostream>

class CoffeeMachine
{
public:
    int getCoffee(const std::string& coffee)
    {
        std::cout << "Ваше кофе: " << coffee << std::endl;
        return 0;
    }
};