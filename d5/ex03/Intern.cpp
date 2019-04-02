#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
    return;
}

Intern::Intern(Intern const & src) 
{
    //Do whatever needs to be done
    *this = src;
    return;
}

Intern::~Intern(void)
{
    return;
}

void            Intern::check(std::string form, std::string target)
{
    if (form.length() == 0)
        throw InternStruggle("Name of the form is empty");
    if (target.length() == 0)
        throw InternStruggle("Name of the target is empty");
    if (form != "robotomy request" && form != "shrubbery creation" && form != "presidential pardon")
        throw InternStruggle(form + " does not exist in or form database. To create one, use b18");
}

Form*           Intern::makeForm(std::string form, std::string target)
{
    this->check(form, target);
    if (form == "shrubbery creation")
        return (new ShrubberyCreationForm(target));
    if (form == "robotomy request")
        return (new RobotomyRequestForm(target));
    return (new PresidentialPardonForm(target));
}

Intern &	Intern::operator=(Intern const & rhs)
{
    if (this != &rhs)
        return (*this);
    return (*this);
}

std::string const Intern::toString(void) const
{
    return ("The intern is just an intern");
}

std::ostream &	operator<< (std::ostream & o, Intern const & rhs)
{
    o << rhs.toString();
    return o;
}

/* InternStruggle */

Intern::InternStruggle::InternStruggle(void) throw()
: _error(NULL)
{
    return;
}

Intern::InternStruggle::InternStruggle(std::string error) throw()
: _error(error)
{
    return;
}

Intern::InternStruggle::~InternStruggle(void) throw()
{
    return;
}

Intern::InternStruggle::InternStruggle(InternStruggle const & src) throw()
{
    *this = src;
    return;
}

Intern::InternStruggle &	Intern::InternStruggle::operator=(Intern::InternStruggle const & rhs)
{
    if (&rhs == this)
        return (*this);
    return (*this);
}

char const* Intern::InternStruggle::what() const throw() {
    std::string err = this->_error;
    return (err.c_str());
}