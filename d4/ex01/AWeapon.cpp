/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:17:31 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 10:00:53 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon(void)
{
    return;
}

AWeapon::AWeapon(std::string const & name, int damage, int APcost)
: _name(name), _damage(damage), _APcost(APcost)
{
    return;
}

AWeapon::AWeapon(AWeapon const & src) 
{
    *this = src;
    return;
}

AWeapon::~AWeapon(void)
{
    return;
}

AWeapon &	AWeapon::operator=(AWeapon const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_damage = rhs.getDamage();
    }
    return (*this);
}

std::string const AWeapon::toString(void) const
{
    return (this->_name + " is a weapon with " + std::to_string(this->_damage) + " damage and " + std::to_string(this->_APcost) + " APcost");
}


int	AWeapon::getDamage (void) const
{
    return (this->_damage);
}

int	AWeapon::getAPcost (void) const
{
    return (this->_APcost);
}

std::string	const AWeapon::getName (void) const
{
    return (this->_name);
}

std::ostream &	operator<< (std::ostream & o, AWeapon const & rhs)
{
    o << rhs.toString() << std::endl;
    return o;
}