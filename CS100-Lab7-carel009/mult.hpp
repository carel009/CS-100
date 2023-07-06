#ifndef __MULT_HPP__
#define __MULT_HPP__

#include "base.hpp"

using namespace std;
#include <string>

class Mult : public Base {
    private:
        Base* left;
        Base* right;
    public:
        Mult();
        ~Mult() {delete left; delete right;}
        Mult(Base* ln, Base* rn) : Base() {left = ln; right = rn;}
        double evaluate() {return ((left->evaluate()) * (right->evaluate()));}
        string stringify() {return ("(" + left->stringify() + " * " + right->stringify() + ")");}
        virtual int number_of_children() {return 2;} 
        virtual Base* get_child(int i)
        { 
            if(i == 0)
            {
                return left;
            }
            else
            {
                return right;
            }
        }
        void accept(Visitor* visitor, int index)
        {
            if(index == 0)
            {
                visitor->visit_mult_begin(this);
            }
            else if(index == 1)
            {
                visitor->visit_mult_middle(this);
            }
            else
            {
                visitor->visit_mult_end(this);
            }
        }
};
#endif //__MULT_HPP__
