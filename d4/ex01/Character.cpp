/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:21:33 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 12:21:34 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void)
{
    return;
}

Character::Character(std::string const & name)
: _name(name), _AP(40), _maxAP(40), _weapon(NULL)
{
    return;
}

Character::Character(Character const & src) 
{
    *this = src;
    return;
}

Character::~Character(void)
{
    return;
}

Character &	Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs._name;
        this->_AP = rhs._AP;
        this->_maxAP = rhs._maxAP;
        this->_weapon = rhs._weapon;
    }
    return (*this);
}

std::string const Character::toString(void) const
{
    std::string ret = this->_name + " has " + std::to_string(this->_AP) + " AP and ";
    if (this->_weapon == NULL)
        ret += "is unarmed";
    else
        ret += "wields a " + _weapon->getName();
    return (ret);
}

void Character::recoverAP(void)
{
    if (this->_AP + 10 > this->_maxAP)
        this->_AP = this->_maxAP;
    else
        this->_AP = this->_AP + 10;
    return;    
}

void Character::equip(AWeapon *weapon)
{
    this->_weapon = weapon;
    return;
}

void Character::attack(Enemy *enemy)
{
    if (this->_weapon != NULL && enemy != NULL)
    {
        if (this->_AP >= this->_weapon->getAPcost())
        {
            this->_AP = this->_AP - this->_weapon->getAPcost();
            std::cout << this->_name << " attack " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl;
            this->_weapon->attack();
            enemy->takeDamage(this->_weapon->getDamage());
            if (enemy->getHP() == 0)
                delete enemy;
        }
    }
}

std::string const Character::getName() const{
    return (this->_name);
}

std::ostream &	operator<< (std::ostream & o, Character const & rhs)
{
    o << rhs.toString() << std::endl;
    return o;
}