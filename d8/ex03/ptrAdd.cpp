#include "ptrAdd.hpp"

PtrAdd::PtrAdd(void)
{
    return;
}

PtrAdd::PtrAdd(PtrAdd const & src) 
{
    *this = src;
    return;
}

PtrAdd::~PtrAdd(void)
{
    return;
}

PtrAdd &	PtrAdd::operator=(PtrAdd const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void            PtrAdd::execute(std::string & str, int pos)
{
    if (str.length() <= static_cast<size_t>(pos))
    {
        str += " ";
        str[pos] -= 32;
    }
}
