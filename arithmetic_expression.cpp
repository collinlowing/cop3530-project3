#include "arithmetic_expression.hpp"

ArithmeticExpression::ArithmeticExpression(std::string op1, std::string op2, char operator)
{
	this->op1 = new Operand(op1);
	this->op2 = new Operand(op2);
	this->operator = operator;
}

Operand* ArithmeticExpression::getOp1()
{
	return op1;
}

Operand* ArithmeticExpression::getOp2()
{
	return op2;
}

char ArithmeticExpression::getOperator()
{
	return operator;
}

std::ostream& operator<<(std::ostream& os, const ArithmeticExpression& ae)
{
	os << op1->getValue() << " " << op2->getValue() << " " << operation;
	return os;
}