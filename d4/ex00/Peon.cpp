#include "Peon.hpp"

Peon::Peon(void)
{
    return;
}

Peon::Peon(std::string name)
: Victim(name)
{
    std::cout << "Zog zog." << std::endl;
    return;
}

Peon::Peon(Peon const & src) 
{
    *this = src;
    return;
}

Peon::~Peon(void)
{
    std::cout << "Bleuark..." << std::endl;
    return;
}

Peon &	Peon::operator=(Peon const & rhs)
{
    if (this != &rhs)
        this->_name = rhs.getName();
    return (*this);
}

void    Peon::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a pink pony !" << std::endl;
}

std::ostream &	operator<< (std::ostream & o, Peon const & rhs)
{
    o << rhs.toString() << std::endl;
    return o;
}