/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:36:13 by atourner          #+#    #+#             */
/*   Updated: 2019/03/28 15:38:18 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

/*
** Canonical
*/

FragTrap::FragTrap(void)
: _hit_points(100), _max_hit_points(100), _energy_points(100),
  _max_energy_points(100), _level(1), _name("Default"),
  _melee_attack_damage(30), _ranged_attack_damage(20),
  _armor_damage_reduction(5)
{
    std::cout << "Directive one: Protect humanity! Directive two: Obey Jack at all costs. Directive three: Dance!. " << this->_name << " created." << std::endl;
    return;
}

FragTrap::FragTrap(std::string name)
: _hit_points(100), _max_hit_points(100), _energy_points(100),
  _max_energy_points(100), _level(1), _name(name),
  _melee_attack_damage(30), _ranged_attack_damage(20),
  _armor_damage_reduction(5)
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
** Getters and setters
*/

int            FragTrap::get_hit_points(void) const
{
    return (this->_hit_points);
}

int            FragTrap::get_max_hit_points(void) const
{
    return (this->_max_hit_points);
}

int            FragTrap::get_energy_points(void) const
{
    return (this->_energy_points);
}

int            FragTrap::get_max_energy_points(void) const
{
    return (this->_max_energy_points);
}

int            FragTrap::get_level(void) const
{
    return (this->_level);
}

std::string    FragTrap::get_name(void) const
{
    return (this->_name);
}

int            FragTrap::get_melee_attack_damage(void) const
{
    return (this->_melee_attack_damage);
}

int            FragTrap::get_ranged_attack_damage(void) const
{
    return (this->_ranged_attack_damage);
}

int            FragTrap::get_armor_damage_reduction(void) const
{
    return (this->_armor_damage_reduction);
}

void           FragTrap::set_hit_points(int value)
{
    if (value > this->_max_hit_points)
        this->_hit_points = this->_max_hit_points;
    else if (value < 0)
        this->_hit_points = 0;
    else
        this->_hit_points = value;
}

void          FragTrap::set_max_hit_points(int value)
{
    if (value > 0)
        this->_max_hit_points = value;
    else
        this->_max_hit_points = 1;
    if (this->_hit_points > this->_max_hit_points)
        this->_hit_points = this->_max_hit_points;
}

void           FragTrap::set_energy_points(int value)
{
    if (value > this->_max_energy_points)
        this->_energy_points = this->_max_energy_points;
    else if (value < 0)
        this->_energy_points = 0;
    else
        this->_energy_points = value;
}

void          FragTrap::set_max_energy_points(int value)
{
    if (value > 0)
        this->_max_energy_points = value;
    else
        this->_max_energy_points = 1;
    if (this->_energy_points > this->_max_energy_points)
        this->_energy_points = this->_max_energy_points;
}

void           FragTrap::set_level(int value)
{
    if (value > 0)
        this->_level = value;
    else
        this->_level = 1;
}

void           FragTrap::set_name(std::string value)
{
    this->_name = value;
}

void           FragTrap::set_melee_attack_damage(int value)
{
    if (value > 0)
        this->_melee_attack_damage = value;
    else
        this->_melee_attack_damage = 0;
}

void           FragTrap::set_ranged_attack_damage(int value)
{
    if (value > 0)
        this->_ranged_attack_damage = value;
    else
        this->_ranged_attack_damage = 0;
}

void           FragTrap::set_armor_damage_reduction(int value)
{
    if (value > 0)
        this->_armor_damage_reduction = value;
    else
        this->_armor_damage_reduction = 0;
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

void            FragTrap::takeDamage(unsigned int amount)
{
    if (amount - this->_armor_damage_reduction > 0)
    {
        this->set_hit_points(this->_hit_points - (amount - this->_armor_damage_reduction));
        std::cout << "I can't feel my fingers! Gah! I don't have any fingers!" << std::endl;
    }
}

void            FragTrap::beRepaired(unsigned int amount)
{
    this->set_hit_points(this->_hit_points + amount);
    std::cout << "Health! Eww, what flavor is red?" << std::endl;
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

std::ostream    &operator<<(std::ostream &o, FragTrap const &rhs)
{
    o << "HitPoints " << rhs.get_hit_points() << " - MaxHitPoints "
    << rhs.get_max_hit_points() << " - EnergyPoints "
    << rhs.get_energy_points() << " - MaxEnergyPoints "
    << rhs.get_max_energy_points() << " - Level "
    << rhs.get_level() << " - Name "
    << rhs.get_name() << " - MeleeDamage "
    << rhs.get_melee_attack_damage() << " - RangedDamage "
    << rhs.get_ranged_attack_damage() << " - DamageReduction "
    << rhs.get_armor_damage_reduction();
    return o;
}