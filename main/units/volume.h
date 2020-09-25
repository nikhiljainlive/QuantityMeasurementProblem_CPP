#pragma once
#include "unit.h"

class Volume : public Unit {
    Volume(double);

public:
    virtual Unit* getBaseUnit();
    
    static Volume GALLON;
    static Volume LITRE;
    static Volume MILLILITRE;
};



