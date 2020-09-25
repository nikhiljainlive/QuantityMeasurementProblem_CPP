#include <iostream>
#include <any>
#include "../units/unit.h"

class Quantity {
    double value;
    Unit* unit;
    
public:
    Quantity(double, Unit*);
    double getBaseValue() const;
    bool operator== (std::any other) const;
    bool operator!= (std::any other) const;
    Quantity operator+ (Quantity other) const;
};
