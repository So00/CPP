/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:17:25 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 09:40:11 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist(void)
: AWeapon("Power Fist", 50, 8)
{
    return;
}

PowerFist::PowerFist(PowerFist const & src) 
{
    *this = src;
    return;
}

PowerFist::~PowerFist(void)
{
    return;
}

PowerFist &	PowerFist::operator=(PowerFist const & rhs)
{
    if (this != &rhs)
        AWeapon::operator=(rhs);
    return (*this);
}

void        PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}