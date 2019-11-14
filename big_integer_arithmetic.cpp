#include "big_integer_arithmetic.hpp"

BigIntegerArithmetic::BigIntegerArithmetic(ArithmeticExpression* ae)
{

}

void BigIntegerArithmetic::setUp()
{

}

void BigIntegerArithmetic::add()
{

}

void BigIntegerArithmetic::subtract()
{

}

std::string BigIntegerArithmetic::showsResults()
{
	std::string result = "";

	result += "     " + ae->getOp1()->getValue() + "\n    " + ae->getOperator + ae->getOp2()->getValue()

	return result;
}

bool BigIntegerArithmetic::op1IsBigger(std::string val1, std::string val2)
{

	return false;
}
