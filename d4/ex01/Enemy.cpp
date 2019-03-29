/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 10:48:04 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 11:20:38 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
: _HP(100), _type("Default Enemy")
{
    return;
}

Enemy::Enemy(int hp, std::string const & type)
: _HP(hp), _type(type)
{
    return;
}

Enemy::Enemy(Enemy const & src) 
{
    *this = src;
    return;
}

Enemy::~Enemy(void)
{
    return;
}



Enemy &	Enemy::operator=(Enemy const & rhs)
{
    if (this != &rhs)
    {
        this->_HP = rhs.getHP();
        this->_type = rhs.getType();
    }
    return *this;
}

std::string const Enemy::toString(void) const
{
    return ("Enemy of type " + this->_type + " has " + std::to_string(this->_HP));
}

void        Enemy::takeDamage(int damage)
{
    if (damage > 0)
        {
        if (this->_HP - damage < 0)
            this->_HP = 0;
        else
            this->_HP = this->_HP - damage;
    }
}

std::string	Enemy::getType (void) const
{
    return (this->_type);
}

int	Enemy::getHP (void) const
{
    return (this->_HP);
}

std::ostream &	operator<< (std::ostream & o, Enemy const & rhs)
{
    o << rhs.toString() << std::endl;
    return o;
}