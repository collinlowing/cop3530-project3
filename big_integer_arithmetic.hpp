#ifndef BIG_INTEGER_ARITHMETIC
#define BIG_INTEGER_ARITHMETIC

class BigIntegerArithmetic
{
	private:

	public:
		BigIntegerArithmetic(ArithmeticExpression* ae);
		void setUp();
		void add();
		void subtract();
		std::string showsResults();
		bool op1IsBigger(std::string val1, std::string val2);
};

#endif

