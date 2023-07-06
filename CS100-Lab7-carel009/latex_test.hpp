#ifndef __LATEX_TEST_HPP__
#define __LATEX_TEST_HPP__

#include "gtest/gtest.h"

#include "base.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "print.hpp"
#include "iterator.hpp"

TEST(Latex, Add){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* add  = new Add(one, two);
        EXPECT_EQ("${({1.000000}+{2.000000})}$", PrintLaTeX(add));
}

TEST(Latex, Sub){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* sub  = new Sub(one, two);
        EXPECT_EQ("${({1.000000}-{2.000000})}$", PrintLaTeX(sub));
}

TEST(Latex, Mult){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* mult  = new Mult(one, two);
        EXPECT_EQ("${({1.000000}\\cdot{2.000000})}$", PrintLaTeX(mult));
}

TEST(Latex, Div){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* div  = new Div(one, two);
        EXPECT_EQ("${\\frac{1.000000}{2.000000}}$", PrintLaTeX(div));
}

TEST(Latex, Pow){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* pow  = new Pow(one, two);
        EXPECT_EQ("${({1.000000}^{2.000000})}$", PrintLaTeX(pow));
}
#endif //__LATEX_TEST_HPP__
