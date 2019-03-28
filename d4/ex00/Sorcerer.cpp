
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
    return;
}

Sorcerer::Sorcerer(std::string name, std::string title)
: _name(name), _title(title)
{
    std::cout << name << ", " << title << ", is born !" << std::endl;
    return;
}

Sorcerer::Sorcerer(Sorcerer const & src) 
{
    *this = src;
    return;
}

Sorcerer::~Sorcerer(void)
{
    std::cout << this->_name << ", " << this->_title << ", is dead ! Consequences will never be the same !" << std::endl;
    return;
}

Sorcerer &	Sorcerer::operator=(Sorcerer const & rhs)
{
    if (this != &rhs)
    {
        this->_title = rhs.getTitle();
        this->_name = rhs.getName();
    }
    return (*this);
}

std::string const Sorcerer::toString(void) const
{
    return ("I am " + this->_name + ", " + this->_title + ", and I like ponies !");
}

void                Sorcerer::polymorph(Victim const & victim)
{
    victim.getPolymorphed();
}

std::string	Sorcerer::getName (void) const
{
    return (this->_name);
}

void	Sorcerer::setName (std::string name)
{
    this->_name = name;
}


std::string	Sorcerer::getTitle (void) const
{
    return (this->_title);
}

void	Sorcerer::setTitle (std::string title)
{
    this->_title = title;
}

std::ostream &	operator<< (std::ostream & o, Sorcerer const & rhs)
{
    o << rhs.toString() << std::endl;
    return o;
}