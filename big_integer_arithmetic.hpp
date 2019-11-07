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
		bool op1IsBigger(int a, int b); //fix parameters


};

#endif

