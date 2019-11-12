#ifndef OPERAND
#define OPERAND

#include <string>
#include <ostream>
#include "stack.hpp"

class Operand
{
	private:
		std::string val;
	public:
		Operand(std::string);
		bool isNegative();
		void setValue(std::string val);
		std::string getValue();
		int getLengthOfString();
		void pad(int zeros);
};

#endif