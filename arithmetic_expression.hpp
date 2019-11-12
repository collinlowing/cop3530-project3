#ifndef ARITHMETIC_EXPRESSION
#define ARITHMETIC_EXPRESSION

class ArithmeticExpression
{
	private:

	public:
		ArithmeticExpression(std::string op1, std::string op2, char operation);
		friend std::ostream& operator<<(std::ostream& os, const ArithmeticExpression& ae);
};

#endif
