#include <iostream>
#include <windows.h>
#include "src/Airport.h"
#include "src/Airplane.h"
#include "src/FlightPlan.h"

int main()
{
    SetConsoleOutputCP(CP_UTF8);

    Airport *airport = Airport::getInstance("Domodedovo");

    Fighter su29("od");

    airport->addAirplane(&su29);
    airport->addRunway("right-3");
    airport->addRunway("left-1");

    FlightPlan flightPlan(134235);
    flightPlan.setFromAirport("Domodedovo");
    flightPlan.setToAirport("Vladivostok");

    su29.setFlightPlan(&flightPlan);

    su29.fly();

    CargoAirplane Mria("mria");
    airport->addAirplane(&Mria);

    FlightPlan flightPlan2(153234);
    flightPlan2.setFromAirport("UK");
    flightPlan2.setToAirport("RF");

    Mria.setFlightPlan(&flightPlan2);

    Mria.fly();

    cout << airport->getName() << endl; // Domodedovo
    Airport *airport1 = Airport::getInstance("VDK");
    cout << airport1->getName() << endl; // Domodedovo

    airport->getCoffee("capuchino");

}
