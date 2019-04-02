#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"

# define Case break;case

class Intern {

public: 

    Intern(void); 
    Intern(Intern const & src); 
    ~Intern(void); 

    class InternStruggle : public std::exception
    {

        public: 

            InternStruggle(void) throw();
            InternStruggle(std::string error) throw();
            InternStruggle(InternStruggle const & src) throw(); 
            virtual ~InternStruggle(void) throw();

            virtual const char          *what() const throw();

            InternStruggle &		operator=(InternStruggle const & rhs);


        private:
            std::string     _error;
    };

    Form*               makeForm(std::string form, std::string target);
	Intern &		    operator=(Intern const & rhs);
    std::string const	toString(void) const;
    void                check(std::string form, std::string target);

private:

};

std::ostream &	operator<< (std::ostream & o, Intern const & rhs);

#endif