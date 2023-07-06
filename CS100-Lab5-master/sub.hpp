#ifndef __SUB_HPP__
#define __SUB_HPP__

#include "base.hpp"
#include "op.hpp"
#include <iomanip>
#include <sstream>

class Sub : public Base {
    private:
        double result;
        std::string resultTxt;
    public:
        Sub(Base* &val1, Base* val2) : Base() {
                result = val1-> evaluate() - val2-> evaluate();
                std::stringstream stream;
                stream << "(" << val1-> stringify() << " - " << val2-> stringify() << ")";
                resultTxt = stream.str();
        }
        virtual double evaluate() { return result; }
        virtual std::string stringify() { return resultTxt; }
};
#endif //__SUB_HPP__
