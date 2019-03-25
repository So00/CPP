#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde{

    public:

        ZombieHorde(int n);
        ~ZombieHorde();
        void    announce();

    private:

        int     _instance_nb;
        Zombie  *_horde;

};

#endif