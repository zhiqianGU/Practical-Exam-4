#include "Helicopter.h"
Helicopter::Helicopter(int w, string n):AirCraft(w) {
    heliID = 0;
}
void Helicopter::set_name(string n)
{
    name = n;
}

string Helicopter::get_name()
{
    return name;;
}

void Helicopter::set_craftID(int c)
{
    craftID = heliID;
    heliID++;
}

int Helicopter::get_craftID()
{
    return craftID;
}

void Helicopter::fly(int headwind, int minutes)
{
    if (headwind == 40) {
        fuel = fuel - 0.4 * minutes - ((weight - 5670) * 0.01 * minutes);
        numberOfFlights++;
    }else {
        fuel = fuel - 0.2 * minutes - ((weight - 5670) * 0.01 * minutes);
        numberOfFlights++;
    }
    if (fuel > 0.8) {
        numberOfFlights--;
        fuel = 1.00;
    }
}
