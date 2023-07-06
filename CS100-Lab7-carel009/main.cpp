#include "base.hpp"
#include "visitor.hpp"
#include "op.hpp"
#include "rand.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "mult.hpp"
#include "div.hpp"
#include "pow.hpp"
#include "iterator.hpp"
#include "visitorlatex.hpp"
#include "visitormathml.hpp"
#include "print.hpp"

using namespace std;
#include <iostream>
#include <string>
#include <cstring>

int main()
{
    Base* zero = new Op(0);
    Base* one = new Op(1);
    Base* two = new Op(2);
    Base* three = new Op(3);
    Base* five = new Op(5);
    
    Base* sub = new Sub(five, zero);
    Base* add = new Add(one, sub);
    cout << "LaTeX: " << PrintLaTeX(add) << endl;
    cout << "MathML:" << endl << PrintMathML(add) << endl << endl;
    
    Base* pow = new Pow(five, two);
    cout << "LaTeX: " << PrintLaTeX(pow) << endl;
    cout << "MathML:" << endl << PrintMathML(pow) << endl << endl;
    
    Base* mult = new Mult(two, five);
    cout << "LaTeX: " << PrintLaTeX(mult) << endl;
    cout << "MathML:" << endl << PrintMathML(mult) << endl << endl;
    
    Base* div = new Div(two, three);
    cout << "LaTeX: " << PrintLaTeX(div) << endl;
    cout << "MathML:" << endl << PrintMathML(div) << endl << endl;
    
    Base* mult_m = new Mult(two, five);
    Base* pow_p = new Pow(five, two);
    Base* div_d = new Div(mult_m, pow_p);
    cout << "LaTeX: " << PrintLaTeX(div_d) << endl;
    cout << "MathML:" << endl << PrintMathML(div_d) << endl;
    
    return 0;
}
