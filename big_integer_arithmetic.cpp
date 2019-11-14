#include "big_integer_arithmetic.hpp"

BigIntegerArithmetic::BigIntegerArithmetic(ArithmeticExpression* ae)
{
	this->ae = ae;
}

void BigIntegerArithmetic::setUp()
{
	if(ae->getOp1()->getLengthOfString() > )
}

void BigIntegerArithmetic::add()
{
	int n1;
	int n2;
	std::string str1 = ae->getOp1()->getValue();
	std::string str2 = ae->getOp2()->getValue();
	std::string result = "";
	int carry = 0;

	if(ae->getOp1()->getLengthOfString() < ae->getOp2()->getLengthOfString())
	{
		n1 = ae->getOp1()->getLengthOfString();
		n2 = ae->getOp2()->getLengthOfString();
		str1 = ae->getOp1()->getValue();
		str2 = ae->getOp2()->getValue();
	}
	else
	{
		n1 = ae->getOp2()->getLengthOfString();
		n2 = ae->getOp1()->getLengthOfString();
		str1 = ae->getOp2()->getValue();
		str2 = ae->getOp1()->getValue();
	}
	str1.reserve

	for(int i = 0; i < n1; i++)
	{
		int sum = ((str1[i] - '0') + (str2[i] - '0') + carry);
		result.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	for(int i = 0; i < n2; i++)
	{
		int sum = ((str2[i] - '0') + carry);
		result.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	if(carry)
	{
		result.push_back(carry + '0');
	}
}

void BigIntegerArithmetic::subtract()
{

}

std::string BigIntegerArithmetic::reverse(std::string str)
{
	std::string reverseStr;

	//FIXME

	return reverseStr;
}

std::string BigIntegerArithmetic::showsResults()
{
	std::string result = "";

	result += "     " + ae->getOp1()->getValue() + "\n    " + ae->getOperator + ae->getOp2()->getValue();

	return result;
}

bool BigIntegerArithmetic::op1IsBigger(std::string val1, std::string val2)
{

	return false;
}
