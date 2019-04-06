#include "Print.hpp"

Print::Print(void)
{
    return;
}

Print::Print(Print const & src) 
{
    *this = src;
    return;
}

Print::~Print(void)
{
    return;
}

Print &	Print::operator=(Print const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void            Print::execute(std::string & str, int pos)
{
    std::cout << static_cast<char>(str[pos]);
}
