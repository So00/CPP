#ifndef  PRESIDENTIALPARDONFORM_HPP
# define  PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class  PresidentialPardonForm : public Form
{

    public:

        PresidentialPardonForm(void);
        PresidentialPardonForm( PresidentialPardonForm const & src);
        virtual ~PresidentialPardonForm(void);

        virtual void                    execute(Bureaucrat const & executor) const;
        PresidentialPardonForm &		operator=( PresidentialPardonForm const & rhs);


    private:
};

std::ostream &	operator<< (std::ostream & o,  PresidentialPardonForm const & rhs);

#endif