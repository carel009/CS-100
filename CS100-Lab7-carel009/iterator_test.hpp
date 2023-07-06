#ifndef __ITERATOR_TEST_HPP__
#define __ITERATOR_TEST_HPP__

#include "gtest/gtest.h"

#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"

TEST(Iterator, OpChildren){
        Base* one = new Op(1);
        EXPECT_EQ(0, one->number_of_children());
}

TEST(Iterator, RandChildren){
        Base* randNum = new Rand();
        EXPECT_EQ(0, randNum->number_of_children());
}

TEST(Iterator, AddChildren){
        Base* one = new Op(1);
        Base* two = new Op(2);
        Base* test = new Add(one, two);
        EXPECT_EQ(2,test->number_of_children());
        EXPECT_EQ(1,test->get_child(0)->evaluate());
        EXPECT_EQ(2,test->get_child(1)->evaluate());
}

TEST(Iterator, SubChildren){
        Base* one = new Op(1);
        Base* two = new Op(2);
        Base* test = new Sub(one, two);
        EXPECT_EQ(2,test->number_of_children());
        EXPECT_EQ(1,test->get_child(0)->evaluate());
        EXPECT_EQ(2,test->get_child(1)->evaluate());
}

TEST(Iterator, MultChildren){
        Base* one = new Op(1);
        Base* two = new Op(2);
        Base* test = new Mult(one, two);
        EXPECT_EQ(2,test->number_of_children());
        EXPECT_EQ(1,test->get_child(0)->evaluate());
        EXPECT_EQ(2,test->get_child(1)->evaluate());
}

TEST(Iterator, DivChildren){
        Base* one = new Op(1);
        Base* two = new Op(2);
        Base* test = new Div(one, two);
        EXPECT_EQ(2,test->number_of_children());
        EXPECT_EQ(1,test->get_child(0)->evaluate());
        EXPECT_EQ(2,test->get_child(1)->evaluate());
}

TEST(Iterator, PowChildren){
        Base* one = new Op(1);
        Base* two = new Op(2);
        Base* test = new Pow(one, two);
        EXPECT_EQ(2,test->number_of_children());
        EXPECT_EQ(1,test->get_child(0)->evaluate());
        EXPECT_EQ(2,test->get_child(1)->evaluate());
}
#endif //__ITERATOR_TEST_HPP__
