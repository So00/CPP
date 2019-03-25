/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:29:58 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 19:09:43 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    this->_type = "Walker";
    return;
}

ZombieEvent::~ZombieEvent()
{
    return;
}

void    ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
    return;
}

Zombie  *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, this->_type));
}

void  ZombieEvent::randomChump()
{
    const std::string name[] = {"Daryl", "Carl", "Michonne", "Carol", "Rick", "Walter-White"};

    Zombie  *zombie = new Zombie(name[std::rand() % 5]);
    zombie->announce();
    delete zombie;
}