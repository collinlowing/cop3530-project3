#ifndef BIG_INTEGER_ARITHMETIC
#define BIG_INTEGER_ARITHMETIC

#include "arithmetic_expression.hpp"

class BigIntegerArithmetic
{
	private:
		ArithmeticExpression* ae;
		Stack op1;
		Stack op2;
		std::string result;
	public:
		BigIntegerArithmetic() {}
		BigIntegerArithmetic(ArithmeticExpression* ae);
		void setUp();
		void add();
		void subtract();
		void reverse(std::string& str);
		std::string showResults();
		bool op1IsBigger(std::string val1, std::string val2);
};

#endif

