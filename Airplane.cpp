#include "Airplane.h"

Airplane::Airplane(int w, int p):AirCraft( w)
{
}

void Airplane::fly(int headwind, int minutes)
{
    if (headwind == 60) {
        fuel = fuel - 0.5 * minutes - (numPassengers * 0.001 * minutes);
        numberOfFlights++;
    }
    else {
        fuel = fuel - 0.3 * minutes - (numPassengers * 0.001 * minutes);
        numberOfFlights++;
    }
    if (fuel > 0.8) {
        numberOfFlights--;
        fuel = 1.00;
    }
}

void Airplane::reducePassengers(int x)
{
    numPassengers = numPassengers - x;
    if (numPassengers < 0) {
        numPassengers = 0;
    }
}

int Airplane::get_numPassengers()
{
    return numPassengers;
}
