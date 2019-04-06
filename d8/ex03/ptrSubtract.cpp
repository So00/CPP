#include "ptrSubtract.hpp"

PtrSubtract::PtrSubtract(void)
{
    return;
}

PtrSubtract::PtrSubtract(PtrSubtract const & src) 
{
    *this = src;
    return;
}

PtrSubtract::~PtrSubtract(void)
{
    return;
}

PtrSubtract &	PtrSubtract::operator=(PtrSubtract const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void            PtrSubtract::execute(std::string & str, int pos)
{
    if (str.length() <= static_cast<size_t>(pos))
    {
        str += " ";
        str[pos] -= 32;
    }
}
