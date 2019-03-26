/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:18:37 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 11:18:44 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
: _name(name), _weapon(weapon)
{
    return;
}

HumanA::~HumanA()
{
    return;
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with the " << this->_weapon.getType() << std::endl;
}