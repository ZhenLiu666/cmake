// calc_test.cpp
#include <gtest/gtest.h>
#include "calc.hpp"

TEST(calc, add) {
    ASSERT_EQ(7, Calc().add(3, 4));
    ASSERT_EQ(150, Calc().add(50, 100));
}


/* 
Compile way:
g++ -c calc.cpp -o calc.o
g++ -c calc_test.cpp -o calc_test.o -std=c++11
g++ calc.o calc_test.o -lgtest -lgtest_main -pthread -o thetest 
*/