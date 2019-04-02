/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:30:30 by atourner          #+#    #+#             */
/*   Updated: 2019/04/01 19:21:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void        Form::check(int grade)
{
    if (grade > 150)
        throw Form::FormCreationError();
    if (grade < 1)
        throw Form::FormCreationError();
}

Form::Form(void)
:_name("B12"), _signed(0), _gradeRequireSign(75), _gradeRequireExec(75)
{
    return;
}

Form::Form(std::string name, int sign, int exec)
:_name(name), _signed(0), _gradeRequireSign(sign), _gradeRequireExec(exec)
{
    this->check(sign);
    this->check(exec);
    return;
}

Form::Form(Form const & src) 
{
    //Do whatever needs to be done
    *this = src;
    return;
}

Form::~Form(void)
{
    return;
}

Form &	Form::operator=(Form const & rhs)
{
    if (this != &rhs)
    {
        this->_gradeRequireExec = rhs._gradeRequireExec;
        this->_gradeRequireSign = rhs._gradeRequireSign;
        this->_signed = rhs._signed;
    }
    return *this;
}

std::string const   Form::toString(void) const
{
    return (this->_name + " is actually " + (this->_signed == 0 ? "not signed" : "signed") + ". He needs grade " + std::to_string(this->_gradeRequireSign) + " to be signed and grade " + std::to_string(this->_gradeRequireExec) + " to be executed");
}

void                Form::beSigned(Bureaucrat *hermes)
{
    if (hermes->getGrade() > this->_gradeRequireSign)
        throw Form::GradeTooLowException(hermes, this->_name, "grade is too low");
    if (this->_signed == 1)
        throw Form::GradeTooLowException(hermes, this->_name, "form is already signed");
    this->_signed = 1;
}

bool                Form::getSigned() const
{
    return (this->_signed);
}

std::string         Form::getName() const
{
    return (this->_name);
}

int                 Form::getGradeToSign() const
{
    return (this->_gradeRequireSign);
}

int                 Form::getGradeToExec() const
{
    return (this->_gradeRequireExec);
}

void                Form::setSigned(bool sign)
{
    this->_signed = sign;
}

void                Form::checkExec(Bureaucrat const &hermes) const
{
    if (this->getSigned() == 0)
        throw ExecuteError(&hermes, this->getName(), "the form is not signed");
    if (this->getGradeToExec() < hermes.getGrade())
        throw ExecuteError(&hermes, this->getName(), "his grade is too low");
}

std::ostream &	operator<< (std::ostream & o, Form const & rhs)
{
    o << rhs.toString();
    return o;
}

/* HIGH */

Form::GradeTooHighException::GradeTooHighException(void) throw()
{
    return;
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return;
}

Form::GradeTooHighException &		Form::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
    if (this == &rhs)
        return (*this);
    return (*this);
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw()
{
    *this = src;
    return;
}

char const* Form::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

/* LOW */


Form::GradeTooLowException::GradeTooLowException(void) throw()
:_name(NULL), _formName(NULL), _reason(NULL)
{
    return;
}

Form::GradeTooLowException::GradeTooLowException(Bureaucrat *hermes, std::string formName, std::string reason) throw()
: _name(hermes->getName()), _formName(formName),_reason(reason)
{
    return;
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return;
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw()
{
    *this = src;
    return;
}

Form::GradeTooLowException &	Form::GradeTooLowException::operator=(Form::GradeTooLowException const & rhs)
{
    if (&rhs == this)
        return (*this);
    return (*this);
}

char const* Form::GradeTooLowException::what() const throw() {
    std::string err = this->_name + " cannot sign " + this->_formName + " because " + this->_reason;
    return (err.c_str());
}

/* FormCreationError */

Form::FormCreationError::FormCreationError(void) throw()
{
    return;
}

Form::FormCreationError::~FormCreationError(void) throw()
{
    return;
}

Form::FormCreationError &		Form::FormCreationError::operator=(FormCreationError const & rhs)
{
    if (this == &rhs)
        return (*this);
    return (*this);
}

Form::FormCreationError::FormCreationError(FormCreationError const & src) throw()
{
    *this = src;
    return;
}

char const* Form::FormCreationError::what() const throw() {
    return ("Impossible creation of the form");
}

/* Execute */

Form::ExecuteError::ExecuteError(void) throw()
:_name(NULL), _formName(NULL), _reason(NULL)
{
    return;
}

Form::ExecuteError::ExecuteError(Bureaucrat const *hermes, std::string formName, std::string reason) throw()
: _name(hermes->getName()), _formName(formName),_reason(reason)
{
    return;
}

Form::ExecuteError::~ExecuteError(void) throw()
{
    return;
}

Form::ExecuteError &		Form::ExecuteError::operator=(ExecuteError const & rhs)
{
    if (this == &rhs)
        return (*this);
    return (*this);
}

Form::ExecuteError::ExecuteError(ExecuteError const & src) throw()
{
    *this = src;
    return;
}

char const* Form::ExecuteError::what() const throw() {
    std::string err = this->_name + " cannot execute " + this->_formName + " because " + this->_reason;
    return (err.c_str());
}