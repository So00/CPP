/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   OfficeBlock.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:52:49 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:53:12 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "OfficeBlock.hpp"

OfficeBlock::OfficeBlock(void)
: _signer(NULL), _hermes(NULL), _intern(NULL)
{
    return;
}

OfficeBlock::OfficeBlock(Bureaucrat* hermes, Bureaucrat* signer, Intern* intern)
: _signer(hermes), _hermes(signer), _intern(intern)
{
    return;
}

OfficeBlock::OfficeBlock(OfficeBlock const & src)
{
    *this = src;
    return;
}

OfficeBlock::~OfficeBlock(void)
{
    return;
}

OfficeBlock &	OfficeBlock::operator=(OfficeBlock const & rhs)
{
    if (this != &rhs)
    {
        this->_hermes = rhs.getExecutor();
        this->_signer = rhs.getSigner();
        this->_intern = rhs.getIntern();
    }
    return *this;
}

Bureaucrat*     OfficeBlock::getExecutor() const
{
    return (this->_hermes);
}

Bureaucrat*     OfficeBlock::getSigner() const
{
    return (this->_signer);
}

Intern*         OfficeBlock::getIntern() const
{
    return (this->_intern);
}

void            OfficeBlock::setExecutor(Bureaucrat& hermes)
{
        this->_hermes = &hermes;
}

void            OfficeBlock::setSigner(Bureaucrat& signer)
{
        this->_signer = &signer;
}

void            OfficeBlock::setIntern(Intern& intern)
{
        this->_intern = &intern;
}

void            OfficeBlock::check() const
{
    if (this->_hermes == NULL)
        throw LostForm("Your office block doest not have an executor");
    if (this->_signer == NULL)
        throw LostForm("Your office block doest not have a signer");
    if (this->_intern == NULL)
        throw LostForm("Your office block doest not have an intern. DAMN NO COFEE");
        
}

void            OfficeBlock::doBureaucracy(std::string formName, std::string target) const
{
    Form* form;

    this->check();
    form = this->_intern->makeForm(formName, target);
    this->_signer->signForm(form);
    this->_hermes->executeForm(*form);
    delete form;
}

std::string const OfficeBlock::toString(void) const
{
    this->check();
    return ("Bureaucrat : " + this->_hermes->getName() + " Form : " + this->_signer->getName() + " and has an intern.");
}

std::ostream &	operator<< (std::ostream & o, OfficeBlock const & rhs)
{
    o << rhs.toString();
    return o;
}

/* LostForm */


OfficeBlock::LostForm::LostForm(void) throw()
: _error(NULL)
{
    return;
}

OfficeBlock::LostForm::LostForm(std::string error) throw()
: _error(error)
{
    return;
}

OfficeBlock::LostForm::~LostForm(void) throw()
{
    return;
}

OfficeBlock::LostForm::LostForm(LostForm const & src) throw()
{
    *this = src;
    return;
}

OfficeBlock::LostForm &	OfficeBlock::LostForm::operator=(OfficeBlock::LostForm const & rhs)
{
    if (&rhs == this)
        return (*this);
    return (*this);
}

char const* OfficeBlock::LostForm::what() const throw() {
    std::string err = this->_error;
    return (err.c_str());
}