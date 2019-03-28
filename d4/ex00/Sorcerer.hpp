#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"

class Sorcerer {

    public:

        Sorcerer(std::string name, std::string title);
        Sorcerer(Sorcerer const & src); 
        ~Sorcerer(void); 
        Sorcerer &		        operator=(Sorcerer const & rhs);

        std::string const	toString(void) const;
        void                polymorph(Victim const &);

        std::string	        getName(void) const;
        void	            setName(std::string name);
        std::string	        getTitle(void) const;
        void	            setTitle(std::string name);

    protected:

        Sorcerer(void);
        std::string	_name;
        std::string _title;

    private:

};

std::ostream &	operator<< (std::ostream & o, Sorcerer const & rhs);

#endif