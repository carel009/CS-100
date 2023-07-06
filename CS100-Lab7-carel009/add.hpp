#ifndef __ADD_HPP__
#define __ADD_HPP__

#include "base.hpp"

using namespace std;
#include <string>

class Add : public Base {
	private: 
		Base* left;
		Base* right;
	public:
		Add();
		~Add() {delete left; delete right;}
		Add(Base* ln, Base* rn) : Base() {left = ln; right = rn;}
		double evaluate() {return ((left->evaluate()) + (right->evaluate()));}
		string stringify() {return ("(" + left->stringify() + " + " + right->stringify() + ")");}
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
				visitor->visit_add_begin(this);
			}
			else if(index == 1)
			{
				visitor->visit_add_middle(this);
			}
			else
			{
				visitor->visit_add_end(this);
			}
       	}
};
#endif //__ADD_HPP__
