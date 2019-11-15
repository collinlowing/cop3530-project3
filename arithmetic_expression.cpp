#include "arithmetic_expression.hpp"

ArithmeticExpression::ArithmeticExpression(std::string op1, std::string op2, char operation)
{
	this->op1 = new Operand(op1);
	this->op2 = new Operand(op2);
	this->operation = operation;

	if(this->op1->getLengthOfString() > this->op2->getLengthOfString())
	{
		this->op2->pad(this->op1->getLengthOfString() - this->op2->getLengthOfString());
	}
	else
	{
		this->op1->pad(this->op2->getLengthOfString() - this->op1->getLengthOfString());
	}
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

ArithmeticExpression::~ArithmeticExpression()
{
	delete op1;
	delete op2;
}

std::ostream& operator<<(std::ostream& os, const ArithmeticExpression& ae)
{
	os << ae.op1->getValue() << " " << ae.op2->getValue() << " " << ae.operation;
	return os;
}