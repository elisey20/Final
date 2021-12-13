//
// Created by 79963 on 11.12.2021.
//

#ifndef FINAL_AIRPLANE_H
#define FINAL_AIRPLANE_H

#include "FlightPlan.h"

enum Engine
{
    F119,
    RB221,
    GEnx
};

enum Color
{
    White,
    Orange,
    Green
};

class IAirplane
{
protected:
    FlightPlan *flightPlan;
    Engine engine;
    Color color;
    string name;

    IAirplane(string name): name(name) {}

public:

    int setFlightPlan(FlightPlan *FP)
    {
        flightPlan = FP;
        return 0;
    }

    int getFlightPlan()
    {
        return flightPlan->getId();
    }

    virtual int fly() = 0;

};


class Fighter: public IAirplane
{
public:
    Fighter(string name): IAirplane(name)
    {
        engine = Engine::F119;
        color = White;
    }

    int fly() override
    {
        cout << "Истребитель вылетает из " << flightPlan->getFromAirport() << ". С военным заданием направляется в аэропорт " << flightPlan->getToAirport() << endl;
        return 0;
    }
};

class CargoAirplane: public IAirplane
{
public:
    CargoAirplane(string name): IAirplane(name)
    {
        engine = Engine::RB221;
        color = Green;
    }

    int fly() override
    {
        cout << "Грузовой самолёт вылетает из " << flightPlan->getFromAirport() << ". Направляется в аэропорт " << flightPlan->getToAirport() << " для доставки важного груза" << endl;
        return 0;
    }
};

class PassengerPlane: public IAirplane
{
public:
    PassengerPlane(string name): IAirplane(name)
    {
        color = Orange;
        engine = Engine::GEnx;
    }

    int fly() override
    {
        cout << "Пассажирский самолёт вылетает из " << flightPlan->getFromAirport() << ". С 300 пассажирами на борту направляется в аэропорт " << flightPlan->getToAirport() << endl;
        return 0;
    }
};


#endif //FINAL_AIRPLANE_H
