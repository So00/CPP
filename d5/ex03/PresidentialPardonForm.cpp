#include "PresidentialPardonForm.hpp"

PresidentialPardonForm:: PresidentialPardonForm(void)
: Form("PresidentialPardonForm", 25, 5) 
{
    return;
}

PresidentialPardonForm:: PresidentialPardonForm(std::string target)
: Form("PresidentialPardonForm", 25, 5), _target(target)
{
    return;
}

 PresidentialPardonForm:: PresidentialPardonForm( PresidentialPardonForm const & src) 
{
    *this = src;
    return;
}

 PresidentialPardonForm::~ PresidentialPardonForm(void)
{
    return;
}

 PresidentialPardonForm &	 PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs)
{
    if (this != &rhs)
    {
        this->setSigned(rhs.getSigned());
    }
    return *this;
}

void            PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    this->checkExec(executor);
    std::cout << this->_target << " has been pardonned by Zaphod Beeblebrox." << std::endl;
}

std::ostream &	operator<< (std::ostream & o,  PresidentialPardonForm const & rhs)
{
    o << rhs.toString();
    return o;
}