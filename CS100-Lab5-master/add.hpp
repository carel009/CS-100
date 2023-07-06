#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"
#include "op.hpp"
#include <iomanip>
#include <sstream>

class Add : public Base {
    private:
        double result;
        std::string resultTxt;
    public:
        Add(Base* &val1, Base* val2) : Base() {
                result = val1-> evaluate() + val2-> evaluate();
                std::stringstream stream;
                stream << "(" << val1-> stringify() << " + " << val2-> stringify() << ")";
                resultTxt = stream.str();
        }
        virtual double evaluate() { return result; }
        virtual std::string stringify() { return resultTxt; }
};
#endif //__ADD_HPP__
