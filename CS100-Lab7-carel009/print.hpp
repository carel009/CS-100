#ifndef __PRINT_HPP__
#define __PRINT_HPP__

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

using namespace std;
#include <string>
#include <cstring>

string PrintLaTeX(Base* ptr){
    Iterator it(ptr);
    VisitorLaTeX visit;
    string output;
    output += "$";
    while (!it.is_done())
    {
        it.current_node()->accept(&visit, it.current_index());
        it.next();
    }
    output += visit.getstring();
    output += "$";
    return output;
}

string PrintMathML(Base* ptr){
	Iterator it(ptr);
	VisitorMathML visit;
	string output; 
	output += "<math>\n";
	while (!it.is_done())
	{
		it.current_node()->accept(&visit, it.current_index());
		it.next();
	}
	output += visit.getstring();
	output += "</math>"; 
	return output;
}

#endif //__PRINT_HPP__
