/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:29:40 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 18:48:10 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type)
: _name(name), _type(type)
{
    std::cout << this->_name << " is created." << std::endl;
    return;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " is destroyed." << std::endl;
    return;
}

void Zombie::announce(void) const
{
    std::cout << "<" << this->_name << " (" << this->_type << ")> Braaaaaaaaaaaainssssss" << std::endl;
}

void        Zombie::set_type(std::string type)
{
    this->_type = type;
}

std::string Zombie::get_type() const
{
    return (this->_type);
}