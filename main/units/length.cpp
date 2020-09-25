#include "length.h"

Length::Length(double factor) : Unit(factor) {}

Length Length::INCH(1);
Length Length::FEET(12);
Length Length::YARD(36);
Length Length::CENTIMETER(1 / 2.5);

Unit* Length::getBaseUnit() {
    return &Length::INCH;
}
