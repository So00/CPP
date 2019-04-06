#include "getChar.hpp"

GetChar::GetChar(void)
{
    return;
}

GetChar::GetChar(GetChar const & src) 
{
    *this = src;
    return;
}

GetChar::~GetChar(void)
{
    return;
}

GetChar &	GetChar::operator=(GetChar const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void            GetChar::execute(std::string & str, int pos)
{
    std::cin >> str[pos];
}
