#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"

#include "pow.hpp"

TEST(PowTest, TwoPowZero) {
    Base* two = new Op(2);
    Base* zero = new Op(0);
    Base* test = new Pow(two, zero);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, StringifyPow) {
    Base* two = new Op(2);
    Base* one = new Op(1);
    Base* test = new Pow(two, one);
    EXPECT_EQ(test->stringify(), "(2.0 ** 1.0)");
}

#endif //__POW_TEST_HPP__
