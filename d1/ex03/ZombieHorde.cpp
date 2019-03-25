#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
: _instance_nb(n)
{
    this->_horde = new Zombie[this->_instance_nb];
    this->announce();
    return;
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] this->_horde;
    return;
}

void    ZombieHorde::announce(void)
{
    int     i;

    i = 0;
    while (i < this->_instance_nb)
    {
        this->_horde[i].announce();
        i++;
    }
}