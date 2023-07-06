#ifndef __MULT_TEST_HPP__
#define __MULT_TEST_HPP__

#include "gtest/gtest.h"

#include "mult.hpp"

TEST(MultTest, NegativeMult) {
    Base* one = new Op(1);
    Base* negTwo = new Op(-2);
    Base* test = new Mult(one, negTwo);
    EXPECT_EQ(test->evaluate(), -2);
}

TEST(MultTest, StringifyMult) {
    Base* one = new Op(1);
    Base* two = new Op(2);
    Base* test = new Mult(one, two);
    EXPECT_EQ(test->stringify(), "(1.0 * 2.0)");
}

#endif //__MULT_TEST_HPP__
