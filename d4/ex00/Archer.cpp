/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Archer.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 08:07:37 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 08:07:58 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Archer.hpp"

Archer::Archer(void)
{
    return;
}

Archer::Archer(std::string name)
: Victim(name)
{
    std::cout << "One arrow, one death." << std::endl;
    return;
}

Archer::Archer(Archer const & src) 
{
    *this = src;
    return;
}

Archer::~Archer(void)
{
    std::cout << "Dahhh, for demacia." << std::endl;
    return;
}

Archer &	Archer::operator=(Archer const & rhs)
{
    if (this != &rhs)
        this->_name = rhs.getName();
    return (*this);
}

void    Archer::getPolymorphed(void) const
{
    std::cout << this->_name << " has been turned into a yellow tardigrada !" << std::endl;
}

std::ostream &	operator<< (std::ostream & o, Archer const & rhs)
{
    o << rhs.toString() << std::endl;
    return o;
}