#ifndef  SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include <fstream>

class  ShrubberyCreationForm : public Form
{

    public:

        ShrubberyCreationForm(void);
        ShrubberyCreationForm( ShrubberyCreationForm const & src);
        virtual ~ShrubberyCreationForm(void);

        virtual void                execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs);


    private:
};

std::ostream &	operator<< (std::ostream & o,  ShrubberyCreationForm const & rhs);

#endif