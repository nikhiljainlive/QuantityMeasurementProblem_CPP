#include "unit.h"

Unit::Unit(double factor) : conversionFactor(factor) {}

double Unit::convertToBase(double value) {
    return this->conversionFactor * value;
}
