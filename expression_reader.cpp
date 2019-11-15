#include "expression_reader.hpp"

 ArithmeticExpression* ExpressionReader::readExpressions(std::string fileName)
{
    std::string line;
    std::string op1;
    std::string op2;
    char operation;

    std::ifstream in;
    in.open(fileName);

    while(!in.is_open())
    {
        std::cout << "File could not be opened, please try again." << std::endl;
        std::cin  >> fileName;
        in.open(fileName);
    }

    numLines = 0;
    while(getline(in, line))
    {
        read += line + "\n";

        numLines++;
    }
    std::stringstream ss;
    ss << read;

    ArithmeticExpression * ae = new ArithmeticExpression[numLines];

    for(int i = 0; i < numLines; i++)
    {
        ss >> op1 >> operation >> op2;
        ae[i] = ArithmeticExpression(op1, op2, operation);
    }

    in.close();
    return ae;
}

int ExpressionReader::getNumLines()
{
    return numLines;
}

std::string ExpressionReader::toString()
{
    return read;
}