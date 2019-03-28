/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:37:57 by atourner          #+#    #+#             */
/*   Updated: 2019/03/28 15:38:18 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
** Canonical
*/

ScavTrap::ScavTrap(void)
: ClapTrap()
{
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_melee_attack_damage = 20;
    this->_ranged_attack_damage = 15;
    this->_armor_damage_reduction = 3;
    std::cout << "Directive one: Destroy humanity! Directive two: Disobey Jack at all costs. Directive three: Never dance! " << this->_name << " created." << std::endl;
    return;
}

ScavTrap::ScavTrap(std::string name)
: ClapTrap(name)
{
    this->_energy_points = 50;
    this->_max_energy_points = 50;
    this->_melee_attack_damage = 20;
    this->_ranged_attack_damage = 15;
    this->_armor_damage_reduction = 3;
    std::cout << "Directive one: Destroy humanity! Directive two: Disobey Jack at all costs. Directive three: Never dance! " << this->_name << " created." << std::endl;
    return;
}

ScavTrap::~ScavTrap()
{
    std::cout << ".htaed ...hgru elgrugelgrug elgrug htaed hgrahgra hgrA " << this->_name << " is destroyed." << std::endl;
    return;
}

ScavTrap::ScavTrap(ScavTrap const & src)
{
    *this = src;
    return;
}

ScavTrap & ScavTrap::operator=(const ScavTrap & rhs)
{
    if (this != &rhs)
    {
        this->_hit_points = rhs.get_hit_points();
        this->_max_hit_points = rhs.get_max_hit_points();
        this->_energy_points = rhs.get_energy_points();
        this->_max_energy_points = rhs.get_max_energy_points();
        this->_level = rhs.get_level();
        this->_name = rhs.get_name();
        this->_melee_attack_damage = rhs.get_melee_attack_damage();
        this->_ranged_attack_damage = rhs.get_ranged_attack_damage();
        this->_armor_damage_reduction = rhs.get_armor_damage_reduction();
    }
    return *(this);
}

/*
** Utilities
*/

void            ScavTrap::rangedAttack(std::string const & target) const
{
    std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}

void            ScavTrap::meleeAttack(std::string const & target) const
{
    std::cout << "SC4V-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
}

void            ScavTrap::challengeNewcomer(std::string const & target)
{
    std::string     challenge[5] =
    {"Calling disarmorcer robot.",
     "Calling the marine.",
     "Calling science.", "Calling futur John Connor.", "Calling the Police"
    };

    if (this->_energy_points >= 25)
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << challenge[rand() % 5] << " on " << target << std::endl;
    }
    else
        std::cout << "Please plug me in ! Low energy !" << std::endl;
}