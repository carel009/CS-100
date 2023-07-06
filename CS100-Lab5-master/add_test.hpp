#ifndef __ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"

#include "add.hpp"

TEST(AddTest, TwoAddFive) {
    Base* two = new Op(2);
    Base* five = new Op(5);
    Base* test = new Add(two, five);
    EXPECT_EQ(test->evaluate(), 7);
}

TEST(AddTest, StringifyAdd) {
    Base* two = new Op(2);
    Base* five = new Op(5);
    Base* test = new Add(two, five);
    EXPECT_EQ(test->stringify(), "(2.0 + 5.0)");
}

#endif //__ADD_TEST_HPP__
