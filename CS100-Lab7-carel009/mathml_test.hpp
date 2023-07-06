#ifndef __MATHML_TEST_HPP__
#define __MATHML_TEST_HPP__

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

TEST(MathML, Add){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* add  = new Add(one, two);
        EXPECT_EQ("<math>\n\t<apply>\n\t\t<plus/>\n\t\t<cn>1.000000</cn>\n\t\t<cn>2.000000</cn>\n\t</apply>\n</math>", PrintMathML(add));
}

TEST(MathML, Sub){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* sub  = new Sub(one, two);
        EXPECT_EQ("<math>\n\t<apply>\n\t\t<minus/>\n\t\t<cn>1.000000</cn>\n\t\t<cn>2.000000</cn>\n\t</apply>\n</math>", PrintMathML(sub));
}

TEST(MathML, Mult){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* mult  = new Mult(one, two);
        EXPECT_EQ("<math>\n\t<apply>\n\t\t<times/>\n\t\t<cn>1.000000</cn>\n\t\t<cn>2.000000</cn>\n\t</apply>\n</math>", PrintMathML(mult));
}

TEST(MathML, Div){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* div  = new Div(one, two);
        EXPECT_EQ("<math>\n\t<apply>\n\t\t<divide/>\n\t\t<cn>1.000000</cn>\n\t\t<cn>2.000000</cn>\n\t</apply>\n</math>", PrintMathML(div));
}

TEST(MathML, Pow){
        Base* one =  new Op(1);
        Base* two = new Op(2);
        Base* pow  = new Pow(one, two);
        EXPECT_EQ("<math>\n\t<apply>\n\t\t<power/>\n\t\t<cn>1.000000</cn>\n\t\t<cn>2.000000</cn>\n\t</apply>\n</math>", PrintMathML(pow));
}
#endif //__MATHML_TEST_HPP__
