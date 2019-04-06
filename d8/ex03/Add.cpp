#include "Add.hpp"

Add::Add(void)
{
    return;
}

Add::Add(Add const & src) 
{
    *this = src;
    return;
}

Add::~Add(void)
{
    return;
}

Add &	Add::operator=(Add const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void            Add::execute(std::string & str, int pos)
{
    str[pos]++;
}
