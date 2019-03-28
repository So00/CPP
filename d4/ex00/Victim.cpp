# include "Victim.hpp"

Victim::Victim(void)
{
    return;
}

Victim::Victim(std::string name)
: _name(name)
{
    std::cout << "Some random victim called " << name << " just popped ! " << std::endl;
    return;
}

Victim::Victim(Victim const & src) 
{
    *this = src;
    return;
}

Victim::~Victim(void)
{
    std::cout << "Victime " << this->_name << " just died for no apparent reason !" << std::endl;
    return;
}

Victim &	Victim::operator=(Victim const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
    }
    return (*this);
}

std::string const Victim::toString(void) const
{
    return ("I'm " + this->_name + " and I like otters !");
}

void                Victim::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a cute little sheep !" << std::endl;
}

std::string	Victim::getName (void) const
{
    return (this->_name);
}

void	Victim::setName (std::string name)
{
    this->_name = name;
}

std::ostream &	operator<< (std::ostream & o, Victim const & rhs)
{
    o << rhs.toString() << std::endl;
    return o;
}