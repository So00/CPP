#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{

    public:

        FragTrap(void);
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap(void);
        
        FragTrap & operator=(FragTrap const & rhs);

        /*
        ** Utilities
        */

        void            rangedAttack(std::string const & target) const;
        void            meleeAttack(std::string const & target) const;
        void            vaulthunter_dot_exe(std::string const & target);

    private:


};

#endif