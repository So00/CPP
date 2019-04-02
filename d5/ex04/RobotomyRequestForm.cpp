#include "RobotomyRequestForm.hpp"

RobotomyRequestForm:: RobotomyRequestForm(void)
: Form("RobotomyRequestForm", 72, 45), _target("default")
{
    return;
}

RobotomyRequestForm:: RobotomyRequestForm(std::string target)
: Form("RobotomyRequestForm", 72, 45), _target(target)
{
    return;
}

 RobotomyRequestForm:: RobotomyRequestForm( RobotomyRequestForm const & src) 
{
    *this = src;
    return;
}

 RobotomyRequestForm::~ RobotomyRequestForm(void)
{
    return;
}

 RobotomyRequestForm &	 RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs)
{
    if (this != &rhs)
    {
        this->setSigned(rhs.getSigned());
    }
    return *this;
}

void            RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    this->checkExec(executor);
    std::cout << "* Broiiiiiiinnnnnnn Pok Pok Pok *" << std::endl;
    if ((rand() % 2))
        std::cout << this->_target << " has been robotomized sucessfully. Congratulation, he only loose half of his mental faculty !" << std::endl;
    else
        std::cout << this->_target << " has a fail operation, hopefully he won't have to discover it, since he know is dead / a zucchini." << std::endl;
}

std::ostream &	operator<< (std::ostream & o,  RobotomyRequestForm const & rhs)
{
    o << rhs.toString();
    return o;
}