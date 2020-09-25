#include "weight.h"

Weight::Weight(double factor) : Unit(factor) {}

Weight Weight::TONNE(1000);
Weight Weight::KG(1);
Weight Weight::GRAM(0.001);

Unit* Weight::getBaseUnit() {
    return &Weight::KG;
}

