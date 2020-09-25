#pragma once
#include <iostream>
#include <exception>

class UnrelatedUnitAdditionException : public std::exception {
    char* message;
public:
    UnrelatedUnitAdditionException(char*);
    virtual const char* what() const noexcept;
};