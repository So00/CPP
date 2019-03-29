/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:17:25 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 10:07:05 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle(void)
: AWeapon("Plasma Rifle", 21, 5)
{
    return;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & src) 
{
    *this = src;
    return;
}

PlasmaRifle::~PlasmaRifle(void)
{
    return;
}

PlasmaRifle &	PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    if (this != &rhs)
        AWeapon::operator=(rhs);
    return (*this);
}

void        PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}