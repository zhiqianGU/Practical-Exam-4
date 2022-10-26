#pragma once
#include "AirCraft.h"
class Helicopter :
    public AirCraft
{
    Helicopter(int w, string n);
    void set_name(string n);
    string get_name();
    void set_craftID(int c);
    int get_craftID();
    void fly(int headwind, int minutes);
    string name;                   
    int craftID;
private:
    static int heliID;
};

