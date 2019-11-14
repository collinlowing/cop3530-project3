#ifndef ARITHMETIC_EXPRESSION
#define ARITHMETIC_EXPRESSION

#include "operand.hpp"

class ArithmeticExpression
{
	private:
		Operand* op1;
		Operand* op2;
		char operator;
	public:
		ArithmeticExpression(std::string op1, std::string op2, char operation);
		friend std::ostream& operator<<(std::ostream& os, const ArithmeticExpression& ae);
};

#endif
