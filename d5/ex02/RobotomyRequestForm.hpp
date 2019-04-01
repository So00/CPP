#ifndef  ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class  RobotomyRequestForm : public Form
{

    public:

        RobotomyRequestForm(void);
        RobotomyRequestForm( RobotomyRequestForm const & src);
        virtual ~RobotomyRequestForm(void);

        virtual void                execute(Bureaucrat const & executor) const;
        RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs);


    private:
};

std::ostream &	operator<< (std::ostream & o,  RobotomyRequestForm const & rhs);

#endif