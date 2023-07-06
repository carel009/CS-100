#ifndef __POW_HPP__
#define __POW_HPP__

#include "base.hpp"

using namespace std;
#include <string>
#include <cmath>

class Pow : public Base {
	private:
		Base* left;
		Base* right;
	public: 
		Pow();
		~Pow() {delete left; delete right;}
		Pow(Base* ln, Base* rn) : Base() {left = ln; right = rn;}
		double evaluate() {return (pow(left->evaluate(), right->evaluate()));}
		string stringify() {return ("(" + left->stringify() + " ** " + right->stringify() + ")");}
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
				visitor->visit_pow_begin(this);
			}
			else if(index == 1)
			{
				visitor->visit_pow_middle(this);
			}
			else
			{
				visitor->visit_pow_end(this);
			}
		}
};
#endif //__POW_HPP__
