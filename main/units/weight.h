#pragma once
#include "unit.h"

class Weight : public Unit {
    Weight(double);

public:
    virtual Unit* getBaseUnit();
    
    static Weight TONNE;
    static Weight KG;
    static Weight GRAM;
};


