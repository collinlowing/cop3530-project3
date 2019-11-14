#ifndef ARITHMETIC_EXPRESSION
#define ARITHMETIC_EXPRESSION

#include "operand.hpp"

class ArithmeticExpression
{
	private:
		Operand* op1;
		Operand* op2;
		char operation;
	public:
		ArithmeticExpression(std::string op1, std::string op2, char operation);
		Operand* getOp1();
		Operand* getOp2();
		char getOperator();
		friend std::ostream& operator<<(std::ostream& os, const ArithmeticExpression& ae);
};

#endif
