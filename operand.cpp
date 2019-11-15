#include "operand.hpp"

Operand::Operand(std::string val)
{
    this->val = val;
}

bool Operand::isNegative()
{
    if(val.at(0) == '-')
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Operand::setValue(std::string val)
{
    this->val = val;
}

std::string Operand::getValue()
{
    return val;
}

int Operand::getLengthOfString()
{
    return val.length();
}

void Operand::pad(int zeros)
{
    val = std::string(zeros, '0').append(val);
}