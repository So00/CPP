#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{

    public: 

        Peon(std::string name);
        Peon(Peon const & src);
        ~Peon(void);
        Peon &		    operator=(Peon const & rhs);

        virtual void    getPolymorphed(void) const;

    protected:
        Peon(void); 

    private:

};

std::ostream &	operator<< (std::ostream & o, Peon const & rhs);

#endif