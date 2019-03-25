/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:29:33 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 19:30:07 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent *ZombieFactory = new ZombieEvent();
    Zombie      *save;
    Zombie      zombie = Zombie("Guy");
    int         i;

    i = 0;
    while (i < 6)
    {
        ZombieFactory->randomChump();
        i++;
    }

    save = ZombieFactory->newZombie("Roger");
    save->announce();
    delete save;
    ZombieFactory->setZombieType("Crawler");
    save = ZombieFactory->newZombie("Jesus");
    save->announce();
    delete save;
    zombie.announce();
}