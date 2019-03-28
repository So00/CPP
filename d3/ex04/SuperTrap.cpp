/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:38:04 by atourner          #+#    #+#             */
/*   Updated: 2019/03/28 15:38:18 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

/*
** Canonical
*/

SuperTrap::SuperTrap(void)
: FragTrap(), NinjaTrap(42)
{
    std::cout << "I can be both ! " << ClapTrap::_name << " created." << std::endl;
    return;
}

SuperTrap::SuperTrap(std::string name)
: FragTrap(name), NinjaTrap(42)
{
    ClapTrap::_name = name;
    std::cout << "I can be both ! " << ClapTrap::_name << " created." << std::endl;
    return;
}

SuperTrap::~SuperTrap()
{
    std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death. " << ClapTrap::_name << " is destroyed." << std::endl;
    return;
}

SuperTrap::SuperTrap(SuperTrap const & src)
{
    *this = src;
    return;
}

SuperTrap & SuperTrap::operator=(const SuperTrap & rhs)
{
    if (this != &rhs)
    {
        ClapTrap::_hit_points = rhs.get_hit_points();
        ClapTrap::_max_hit_points = rhs.get_max_hit_points();
        ClapTrap::_energy_points = rhs.get_energy_points();
        ClapTrap::_max_energy_points = rhs.get_max_energy_points();
        ClapTrap::_level = rhs.get_level();
        ClapTrap::_name = rhs.get_name();
        ClapTrap::_melee_attack_damage = rhs.get_melee_attack_damage();
        ClapTrap::_ranged_attack_damage = rhs.get_ranged_attack_damage();
        ClapTrap::_armor_damage_reduction = rhs.get_armor_damage_reduction();
    }
    return *(this);
}

/*
** Utilities
*/

void            SuperTrap::rangedAttack(std::string const & target) const
{
    std::cout << "SUP3R-TP " << ClapTrap::_name << " attacks " << target << " at range, causing " << FragTrap::_ranged_attack_damage << " points of damage !" << std::endl;
}

void            SuperTrap::meleeAttack(std::string const & target) const
{
    std::cout << "SUP3R-TP " << ClapTrap::_name << " attacks " << target << " at melee, causing " << NinjaTrap::_melee_attack_damage << " points of damage !" << std::endl;
}