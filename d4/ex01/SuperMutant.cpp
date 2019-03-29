/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 10:48:32 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 11:21:26 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void)
: Enemy(170, "Super Mutant")
{
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
    return;
}

SuperMutant::SuperMutant(SuperMutant const & src) 
{
    *this = src;
    return;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "Aaargh ..." << std::endl;
    return;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const & rhs)
{
    if (this != &rhs)
        Enemy::operator=(rhs);
    return *this;
}

void    SuperMutant::takeDamage(int damage)
{
    Enemy::takeDamage(damage - 3);
}