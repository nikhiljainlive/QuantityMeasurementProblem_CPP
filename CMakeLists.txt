
cmake_minimum_required(VERSION 3.17.3) 

project(QuantityMeasurement_CPP)
add_subdirectory(lib/googletest) 
include_directories(lib/googletest/include)
set(CMAKE_CXX_STANDARD 17)
add_executable(executeTests test/quantity_test.cpp main/units/unit.cpp
main/units/length.cpp main/units/volume.cpp main/units/weight.cpp
 main/quantity/quantity.cpp
main/quantity/UnrelatedUnitAdditionException.cpp) 
target_link_libraries(executeTests PRIVATE gtest)