#ifndef __OP_HPP__
#define __OP_HPP__

#include "base.hpp"
#include "sstream"
#include <iomanip>
#include <string>

class Op : public Base {
    private:
	double value;
    public:
        Op(double value) : Base() { this-> value = value; }
        virtual double evaluate() { return value; }
        virtual std::string stringify() { 
			std::stringstream stream;
			std::string valTxt;
			stream << std::fixed << std:: setprecision(1) << value;
			valTxt = stream.str();
			return valTxt; 
	}
};

#endif //__OP_HPP__
