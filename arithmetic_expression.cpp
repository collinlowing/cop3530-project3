#include "arithmetic_expression.hpp"

ArithmeticExpression::ArithmeticExpression(std::string op1, std::string op2, char operation)
{
	this->op1 = new Operand(op1);
	this->op2 = new Operand(op2);
	this->operation = operation;
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
	return operation;
}

std::ostream& operator<<(std::ostream& os, const ArithmeticExpression& ae)
{
	os << ae.op1->getValue() << " " << ae.op2->getValue() << " " << ae.operation;
	return os;
}