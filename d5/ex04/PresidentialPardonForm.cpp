/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:52:54 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:53:12 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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