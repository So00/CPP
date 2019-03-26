/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:18:42 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 11:18:43 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
: _name(name)
{
    return;
}

HumanB::~HumanB()
{
    return;
}

void    HumanB::attack()
{
    std::cout << this->_name << " attacks with the " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}