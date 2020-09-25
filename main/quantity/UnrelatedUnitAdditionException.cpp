#include "UnrelatedUnitAdditionException.h"

UnrelatedUnitAdditionException::UnrelatedUnitAdditionException(char* message) : message(message), std::exception() {}

const char* UnrelatedUnitAdditionException::what() const noexcept {
    return message;
}