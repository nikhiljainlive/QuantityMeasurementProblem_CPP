#include "quantity.h"
#include "UnrelatedUnitAdditionException.h"

Quantity::Quantity(double value, Unit* unit) : value(value), unit(unit) {}

double Quantity::getBaseValue() const {
    return this->unit->convertToBase(this->value);
}

bool Quantity::operator== (std::any other) const {
    try {
        Quantity* otherQuantity = (std::any_cast<Quantity>(&other) == nullptr) ? 
            std::any_cast<Quantity*>(other) : std::any_cast<Quantity>(&other);

        bool areBaseUnitsSame = this->unit->getBaseUnit() == otherQuantity->unit->getBaseUnit();
        bool areBaseValuesEqual = this->getBaseValue() == otherQuantity->getBaseValue();
        return areBaseUnitsSame && areBaseValuesEqual ;
    } catch (const std::bad_any_cast& ignore) 
    {
        return false;
    }
}

bool Quantity::operator!= (std::any other) const {
    return !(*this == other);
}

Quantity Quantity::operator+ (Quantity other) const {
    if (this->unit->getBaseUnit() != other.unit->getBaseUnit()) {
        throw UnrelatedUnitAdditionException("units are unrelated thus can not be added");
    }

    double addedValue = this->getBaseValue() + other.getBaseValue();
    Unit* baseUnit = this->unit->getBaseUnit();
    Quantity addedQuantity(addedValue, baseUnit);

    return addedQuantity;
}