#pragma once
#include <iostream>

class Unit {
protected:
    double conversionFactor;
    Unit(double);

public:
    double convertToBase(double);
    virtual Unit* getBaseUnit() = 0;
};
