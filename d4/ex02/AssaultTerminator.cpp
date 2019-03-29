/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:20:16 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 19:41:55 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
    std::cout << "* teleports from space *" << std::endl;
    return;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src) 
{
    *this = src;
    return;
}

AssaultTerminator::~AssaultTerminator(void)
{
    std::cout << "I’ll be back ..." << std::endl;
    return;
}

AssaultTerminator &	AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}

ISpaceMarine*       AssaultTerminator::clone() const
{
    return (new AssaultTerminator);
}

void                AssaultTerminator::battleCry() const
{
    std::cout << "This code is unclean. PURIFY IT !" << std::endl;
}

void                AssaultTerminator::rangedAttack() const
{
    std::cout << "* does nothing *" << std::endl;
}

void                AssaultTerminator::meleeAttack() const
{
    std::cout << "* attacks with chainfists *" << std::endl;
}