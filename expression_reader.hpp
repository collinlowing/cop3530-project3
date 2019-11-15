#ifndef EXPRESSION_READER
#define EXPRESSION_READER

#include "arithmetic_expression.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

class ExpressionReader
{
	private:
		std::string read = "";
		int numLines;
	public:
		ArithmeticExpression* readExpressions(std::string fileName);
		std::string* parseString(std::string line);
		int getNumLines();
		std::string toString();
};

#endif
