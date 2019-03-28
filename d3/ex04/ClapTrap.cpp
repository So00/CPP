/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:37:36 by atourner          #+#    #+#             */
/*   Updated: 2019/03/28 15:38:18 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
** Canonical
*/

ClapTrap::ClapTrap(void)
: _hit_points(100), _max_hit_points(100), _energy_points(100),
  _max_energy_points(100), _level(1), _name("Default"),
  _melee_attack_damage(30), _ranged_attack_damage(20),
  _armor_damage_reduction(5)
{
    std::cout << "No directive. " << this->_name << " created." << std::endl;
    return;
}

ClapTrap::ClapTrap(std::string name)
: _hit_points(100), _max_hit_points(100), _energy_points(100),
  _max_energy_points(100), _level(1), _name(name),
  _melee_attack_damage(30), _ranged_attack_damage(20),
  _armor_damage_reduction(5)
{
    std::cout << "No directive. " << name << " created." << std::endl;
    return;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Basic destroyed. Mom !!! " << this->_name << " is destroyed." << std::endl;
    return;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    *this = src;
    return;
}

ClapTrap & ClapTrap::operator=(const ClapTrap & rhs)
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

int            ClapTrap::get_hit_points(void) const
{
    return (this->_hit_points);
}

int            ClapTrap::get_max_hit_points(void) const
{
    return (this->_max_hit_points);
}

int            ClapTrap::get_energy_points(void) const
{
    return (this->_energy_points);
}

int            ClapTrap::get_max_energy_points(void) const
{
    return (this->_max_energy_points);
}

int            ClapTrap::get_level(void) const
{
    return (this->_level);
}

std::string    ClapTrap::get_name(void) const
{
    return (this->_name);
}

int            ClapTrap::get_melee_attack_damage(void) const
{
    return (this->_melee_attack_damage);
}

int            ClapTrap::get_ranged_attack_damage(void) const
{
    return (this->_ranged_attack_damage);
}

int            ClapTrap::get_armor_damage_reduction(void) const
{
    return (this->_armor_damage_reduction);
}

void           ClapTrap::set_hit_points(int value)
{
    if (value > this->_max_hit_points)
        this->_hit_points = this->_max_hit_points;
    else if (value < 0)
        this->_hit_points = 0;
    else
        this->_hit_points = value;
}

void          ClapTrap::set_max_hit_points(int value)
{
    if (value > 0)
        this->_max_hit_points = value;
    else
        this->_max_hit_points = 1;
    if (this->_hit_points > this->_max_hit_points)
        this->_hit_points = this->_max_hit_points;
}

void           ClapTrap::set_energy_points(int value)
{
    if (value > this->_max_energy_points)
        this->_energy_points = this->_max_energy_points;
    else if (value < 0)
        this->_energy_points = 0;
    else
        this->_energy_points = value;
}

void          ClapTrap::set_max_energy_points(int value)
{
    if (value > 0)
        this->_max_energy_points = value;
    else
        this->_max_energy_points = 1;
    if (this->_energy_points > this->_max_energy_points)
        this->_energy_points = this->_max_energy_points;
}

void           ClapTrap::set_level(int value)
{
    if (value > 0)
        this->_level = value;
    else
        this->_level = 1;
}

void           ClapTrap::set_name(std::string value)
{
    this->_name = value;
}

void           ClapTrap::set_melee_attack_damage(int value)
{
    if (value > 0)
        this->_melee_attack_damage = value;
    else
        this->_melee_attack_damage = 0;
}

void           ClapTrap::set_ranged_attack_damage(int value)
{
    if (value > 0)
        this->_ranged_attack_damage = value;
    else
        this->_ranged_attack_damage = 0;
}

void           ClapTrap::set_armor_damage_reduction(int value)
{
    if (value > 0)
        this->_armor_damage_reduction = value;
    else
        this->_armor_damage_reduction = 0;
}

/*
** Utilities
*/

void            ClapTrap::takeDamage(unsigned int amount)
{
    if (amount - this->_armor_damage_reduction > 0)
    {
        this->set_hit_points(this->_hit_points - (amount - this->_armor_damage_reduction));
        std::cout << "I can't feel my fingers! Gah! I don't have any fingers!" << std::endl;
    }
}

void            ClapTrap::beRepaired(unsigned int amount)
{
    this->set_hit_points(this->_hit_points + amount);
    std::cout << "Health! Eww, what flavor is red?" << std::endl;
}

std::ostream    &operator<<(std::ostream &o, ClapTrap const &rhs)
{
    o << std::endl << "*****************" << std::endl
    << "* HitPoints " << rhs.get_hit_points() << std::endl 
    << "* MaxHitPoints " << rhs.get_max_hit_points() << std::endl
    << "* EnergyPoints" << rhs.get_energy_points() << std::endl
    << "* MaxEnergyPoints " << rhs.get_max_energy_points() << std::endl
    << "* Level " << rhs.get_level() << std::endl
    << "* Name " << rhs.get_name() << std::endl
    << "* MeleeDamage " << rhs.get_melee_attack_damage() << std::endl
    << "* RangedDamage " << rhs.get_ranged_attack_damage() << std::endl
    << "* DamageReduction " << rhs.get_armor_damage_reduction() << std::endl
    << "*****************" << std::endl;
    return o;
}