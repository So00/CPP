#include "Subtract.hpp"

Subtract::Subtract(void)
{
    return;
}

Subtract::Subtract(Subtract const & src) 
{
    *this = src;
    return;
}

Subtract::~Subtract(void)
{
    return;
}

Subtract &	Subtract::operator=(Subtract const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void            Subtract::execute(std::string & str, int pos)
{
    str[pos]--;
}
