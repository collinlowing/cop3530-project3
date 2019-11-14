#ifndef BIG_INTEGER_ARITHMETIC
#define BIG_INTEGER_ARITHMETIC

#include "arithmetic_expression.hpp"

class BigIntegerArithmetic
{
	private:
		ArithmeticExpression* ae;
	public:
		BigIntegerArithmetic(ArithmeticExpression* ae);
		void setUp();
		void add();
		void subtract();
		std::string reverse(std::string str);
		std::string showsResults();
		bool op1IsBigger(std::string val1, std::string val2);
};

#endif

