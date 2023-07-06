#ifndef __DIV_TEST_HPP__
#define __DIV_TEST_HPP__

#include "gtest/gtest.h"

#include "div.hpp"

TEST(DivTest, ZeroDivOne) {
    Base* zero = new Op(0);
    Base* one = new Op(1);
    Base* test = new Div(zero, one);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(DivTest, StringifyDiv) {
    Base* zero = new Op(0);
    Base* one = new Op(1);
    Base* test = new Div(zero, one);
    EXPECT_EQ(test->stringify(), "(0.0 / 1.0)");
}

#endif //__DIV_TEST_HPP__
