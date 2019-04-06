#include "IInsttruction.hpp"
#include <iostream>

IInsttruction::IInsttruction(void)
: _position(0)
{
    return;
}

IInsttruction::IInsttruction(IInsttruction const & src) 
{
    *this = src;
    return;
}

IInsttruction::~IInsttruction(void)
{
    return;
}

IInsttruction &	IInsttruction::operator=(IInsttruction const & rhs)
{
    static_cast<void>(rhs);
    return *this;
}