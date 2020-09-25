#include "volume.h"

Volume::Volume(double factor) : Unit(factor) {}

Volume Volume::GALLON(3.78);
Volume Volume::LITRE(1);
Volume Volume::MILLILITRE(0.001);

Unit* Volume::getBaseUnit() {
    return &Volume::LITRE;
}