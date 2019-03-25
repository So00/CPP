/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:29:33 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 19:06:26 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int     main(void)
{
    ZombieEvent *ZombieFactory = new ZombieEvent();
    Zombie      *save;
    int         i;

    i = 0;
    while (i < 6)
    {
        ZombieFactory->randomChump();
        i++;
    }

    save = ZombieFactory->newZombie("roger");
    save->announce();
    delete save;
}