/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:17:55 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 11:17:56 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n)
: _instance_nb(n)
{
    this->_horde = new Zombie[this->_instance_nb];
    this->announce();
    return;
}

ZombieHorde::~ZombieHorde(void)
{
    delete [] this->_horde;
    return;
}

void    ZombieHorde::announce(void)
{
    int     i;

    i = 0;
    while (i < this->_instance_nb)
    {
        this->_horde[i].announce();
        i++;
    }
}