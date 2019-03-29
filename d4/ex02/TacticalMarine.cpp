/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 15:20:16 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 19:41:16 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src) 
{
    *this = src;
    return;
}

TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh ..." << std::endl;
    return;
}

TacticalMarine &	TacticalMarine::operator=(TacticalMarine const & rhs)
{
    if (this != &rhs)
    {
        *this = rhs;
    }
    return *this;
}

ISpaceMarine*       TacticalMarine::clone() const
{
    return (new TacticalMarine);
}

void                TacticalMarine::battleCry() const
{
    std::cout << "For the holy PLOT !" << std::endl;
}

void                TacticalMarine::rangedAttack() const
{
    std::cout << "* attacks with bolter *" << std::endl;
}

void                TacticalMarine::meleeAttack() const
{
    std::cout << "* attacks with chainsword *" << std::endl;
}