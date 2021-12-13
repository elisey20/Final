#pragma once

#include <iostream>

using namespace std;

class FlightPlan
{
private:
    int id;
    string fromAirport;
    string toAirport;

public:
    FlightPlan(int id): id(id) {}

    int setFromAirport(string airp)
    {
        fromAirport = airp;
        return 0;
    }
    int setToAirport(string airp)
    {
        toAirport = airp;
        return 0;
    }

    string getFromAirport()
    {
        return fromAirport;
    }

    string getToAirport()
    {
        return toAirport;
    }

    int getId()
    {
        return id;
    }
};