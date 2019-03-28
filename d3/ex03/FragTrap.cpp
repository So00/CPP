/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:37:07 by atourner          #+#    #+#             */
/*   Updated: 2019/03/28 15:38:18 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** Canonical
*/

FragTrap::FragTrap(void)
: ClapTrap()
{
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!. " << this->_name << " created." << std::endl;
    return;
}

FragTrap::FragTrap(std::string name)
: ClapTrap(name)
{
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!. " << this->_name << " created." << std::endl;
    return;
}

FragTrap::~FragTrap()
{
    std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death. " << this->_name << " is destroyed." << std::endl;
    return;
}

FragTrap::FragTrap(FragTrap const & src)
{
    *this = src;
    return;
}

FragTrap & FragTrap::operator=(const FragTrap & rhs)
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

void            FragTrap::rangedAttack(std::string const & target) const
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, causing " << this->_ranged_attack_damage << " points of damage !" << std::endl;
}

void            FragTrap::meleeAttack(std::string const & target) const
{
    std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at melee, causing " << this->_melee_attack_damage << " points of damage !" << std::endl;
}

void            FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    std::string     vaulthunter[5] =
    {"Carefull everyone ! Bomb incomming !",
     "Yarh ! Turning into a pirate !",
     "Wingardium leviosa !", "Sarah connor ?", "Wanna go swim ? Bouce around !"
    };

    if (this->_energy_points >= 25)
    {
        this->_energy_points = this->_energy_points - 25;
        std::cout << vaulthunter[rand() % 5] << " on " << target << std::endl;
    }
    else
        std::cout << "Please plug me in ! Low energy !" << std::endl;
}