#include "Weapon.hpp"

Weapon::Weapon(std::string type)
: _type(type), _ref_weapon(this->getType())
{
    return;
}

Weapon::~Weapon()
{
    return;
}

std::string const       &Weapon::getType()
{
    std::string const   &ref_type = this->_type;
    return (ref_type);
}

void                    Weapon::setType(std::string type)
{
    this->_type = type;
}