/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 09:59:55 by atourner          #+#    #+#             */
/*   Updated: 2019/04/01 13:42:28 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
    return;
}

void        Bureaucrat::check(int grade)
{
    if (grade > 150)
        throw GradeTooLowException();
    if (grade < 1)
        throw GradeTooHighException();
}

Bureaucrat::Bureaucrat(std::string const name, int grade)
: _name(name)
{
    check(grade);
    this->_grade = grade;
    return;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    *this = src;
    return;
}


Bureaucrat::~Bureaucrat(void)
{
    return;
}

std::string const   Bureaucrat::getName() const
{
    return (this->_name);
}

int                 Bureaucrat::getGrade() const
{
    return (this->_grade);
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
    this->_grade = rhs._grade;
    return *this;
}

void                Bureaucrat::operator++()
{
    check(this->_grade + 1);
    this->_grade++;
}
void                Bureaucrat::operator--()
{
    check(this->_grade - 1);
    this->_grade--;
}

std::string const Bureaucrat::toString(void) const
{
    return (this->_name + ", bureaucrat grade " + std::to_string(this->_grade));
}

std::ostream &	operator<< (std::ostream & o, Bureaucrat const & rhs)
{
    o << rhs.toString();
    return o;
}

/* High */

Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw()
{
    return;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
    return;
}

Bureaucrat::GradeTooHighException &		Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const & rhs)
{
    if (this == &rhs)
        return (*this);
    return (*this);
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & src) throw()
{
    //Do whatever needs to be done
    *this = src;
    return;
}

char const* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade is too high");
}

/* LOW */

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw()
{
    return;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
    return;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & src) throw()
{
    //Do whatever needs to be done
    *this = src;
    return;
}

Bureaucrat::GradeTooLowException &	Bureaucrat::GradeTooLowException::operator=(Bureaucrat::GradeTooLowException const & rhs)
{
    if (&rhs == this)
        return (*this);
    return (*this);
}

char const* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade is too low");
}