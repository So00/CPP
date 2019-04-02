#include "B.hpp"

B::B(void)
{
    // std::cout << "B CREATION" << std::endl;
    return;
}

B::B(B const & src) 
{
    *this = src;
    return;
}

B::~B(void)
{
    return;
}

B &	B::operator=(B const & rhs)
{
    if (this != &rhs)
        return (*this);
    return (*this);
}

std::string const B::toString(void) const
{
    return "";
}

std::ostream &	operator<< (std::ostream & o, B const & rhs)
{
    o << rhs.toString();
    return o;
}