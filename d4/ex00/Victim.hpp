#ifndef VICTIMCLASS_HPP
# define VICTIMCLASS_HPP

# include <iostream>

class Victim
{

    public: 

        Victim(std::string name);
        Victim(Victim const & src); 
        ~Victim(void); 

        Victim &		operator=(Victim const & rhs);

        std::string const	toString(void) const;
        virtual void        getPolymorphed(void) const;

        std::string	        getName(void) const;
        void	            setName(std::string name);

    protected:
        Victim(void);
    
        std::string	_name;

    private:

};

std::ostream &	operator<< (std::ostream & o, Victim const & rhs);

#endif