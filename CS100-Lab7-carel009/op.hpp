#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"

using namespace std;
#include <string>

class Op : public Base { 
    private:
        double value;
    public:
        Op(double val) : Base() {value = val;}
        virtual double evaluate() {return value;}
        virtual string stringify() {return to_string(value);}
        virtual int number_of_children() {return 0;} 
        virtual Base* get_child(int i) {}
        void accept(Visitor* visitor, int index)
        {
            if(index == 0)
            {
                visitor->visit_op(this);
            }
        }
};
#endif //__OP_HPP__
