#pragma once
#include "AirCraft.h"
class Airplane :
    public AirCraft
{
private:
    
    Airplane(int w, int p);
    void fly(int headwind, int minutes);
        int numPassengers;               

   void reducePassengers(int x);     
   int get_numPassengers();
};

