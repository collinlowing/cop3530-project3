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
    std::string temp = "";
    for(int i = 0; i < zeros; i++)
    {
        temp += "0";
    }
    temp += val;
}