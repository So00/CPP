#ifndef NINJA_TRAP_HPP
# define NINJA_TRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{

    public:

        NinjaTrap(void);
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap(void);
        
        NinjaTrap & operator=(NinjaTrap const & rhs);

        /*
        ** Utilities
        */

        void            rangedAttack(std::string const & target) const;
        void            meleeAttack(std::string const & target) const;
        void            ninjaShoebox(ClapTrap const & target);
        void            ninjaShoebox(FragTrap const & target);
        void            ninjaShoebox(ScavTrap const & target);
        void            ninjaShoebox(NinjaTrap const & target);

    private:


};


#endif