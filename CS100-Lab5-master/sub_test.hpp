#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"

#include "sub.hpp"

TEST(SubTest, ZeroSubOne) {
    Base* zero = new Op(0);
    Base* one = new Op(1);
    Base* test = new Sub(zero, one);
    EXPECT_EQ(test->evaluate(), -1);
}

TEST(SubTest, StringifySub) {
    Base* zero = new Op(0);
    Base* one = new Op(1);
    Base* test = new Sub(zero, one);
    EXPECT_EQ(test->stringify(), "(0.0 - 1.0)");
}

#endif //__SUB_TEST_HPP__
