#ifndef EXPRESSION_READER
#define EXPRESSION_READER

#include "arithmetic_expression.hpp"

class ExpressionReader
{
	private:
		ArithmeticExpression* ae;
		std::string expressions;
	public:
		ExpressionReader();
		void readExpression(std::string fileName);
		std::string[] parse(std::string line);
		std::string toString();
};

#endif
