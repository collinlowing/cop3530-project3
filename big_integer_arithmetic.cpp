#include "big_integer_arithmetic.hpp"

BigIntegerArithmetic::BigIntegerArithmetic(ArithmeticExpression* ae)
{
	this->ae = ae;
}

void BigIntegerArithmetic::setUp()
{

	for(int i = 0; i < ae->getOp1()->getLengthOfString(); i++)
	{
		int num = ae->getOp1()->getValue().at(i) - '0';
		op1.push(num);
	}

	for(int i = 0; i < ae->getOp2()->getLengthOfString(); i++)
	{
		int num = ae->getOp2()->getValue().at(i) - '0';
		op2.push(num);
	}

	if(ae->getOperator() == '+')
	{
		add();
	}
	else
	{
		subtract();
	}
}

void BigIntegerArithmetic::add()
{
	int length = ae->getOp1()->getLengthOfString(); 
	result = "";
	int carry = 0;

	
	for(int i = 0; i < length; i++) 
	{
		int sum = ((op1.pop()) + (op2.pop()) + carry);
		result.push_back(sum % 10 + '0');
		carry = sum / 10;
	}

	if(carry)
		result.push_back(carry + '0');

	reverse(result);
}

void BigIntegerArithmetic::reverse(std::string& str)
{
	int n = str.length(); 
  
    
    for (int i = 0; i < n / 2; i++) 
        std::swap(str[i], str[n - i - 1]);
}

void BigIntegerArithmetic::subtract()
{
	int carry = 0;
	result = "";
	int length = ae->getOp1()->getLengthOfString();
	bool isNegative = false;

	if(op1IsBigger(ae->getOp1()->getValue(),ae->getOp2()->getValue()))
	{
		for(int i = 0; i < length; i++)
		{
			int sub = ((op1.pop()) - (op2.pop()) - carry);

			if(sub < 0)
			{
				sub += 10;
				carry = 1;
			}
			else 
			{
				carry = 0;
			}
			
			result.push_back(sub + '0');
		}
	}
	else
	{
		isNegative = true;

		for(int i = 0; i < length; i++)
		{
			int sub = ((op2.pop()) - (op1.pop()) - carry);

			if(sub < 0)
			{
				sub += 10;
				carry = 1;
			}
			else 
			{
				carry = 0;
			}
			
			result.push_back(sub + '0');
		}
	}

	if(isNegative)
	{
		result.push_back('-');
	}

	reverse(result);
}

std::string BigIntegerArithmetic::showResults()
{
	std::string output = "";

	output += "     " + ae->getOp1()->getValue() + "\n    " + ae->getOperator() + ae->getOp2()->getValue() + "\n    " + result + "\n\n";

	return output;
}

bool BigIntegerArithmetic::op1IsBigger(std::string val1, std::string val2)
{
	int l1 = val1.length();
	int l2 = val2.length();
	int i1;
	int i2;
	if(l1 < l2)
		return false;
	else if(l1 > l2)
		return true;
	

	for(int i = 0; i < l1; i++)
	{
		i1 = val1.at(i) - '0';
		i2 = val2.at(i) - '0';

		if(i1 > i2)
			return true;
		else if(i1 < i2)
			return false;
	}
	return true;
}
