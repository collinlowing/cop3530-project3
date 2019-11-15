
#include "node.hpp"
#include "stack.hpp"
#include "expression_reader.hpp"
#include "arithmetic_expression.hpp"
#include "big_integer_arithmetic.hpp"

#include <iostream>

int main()
{
    std::string fileName;

    std::cout << "What is the file name containing expressions with extention:" << std::endl;
    std::cin  >> fileName;

    ExpressionReader reader;
    
    ArithmeticExpression* ae = reader.readExpressions(fileName);

    BigIntegerArithmetic* bia = new BigIntegerArithmetic[reader.getNumLines()];

    for(int i = 0; i < reader.getNumLines(); i++)
    {
        bia[i] = BigIntegerArithmetic(&ae[i]);
        bia[i].setUp();
        std::cout << bia[i].showResults();
    }

    delete bia;
    return 0;
}