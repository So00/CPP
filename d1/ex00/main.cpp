/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 16:40:01 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 17:10:24 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void ponyOnTheHeap(void)
{
    Pony    *pony = new Pony("Tornado");

    pony->show_awesomness();
    delete pony;
}

void ponyOnTheStack(void)
{
    Pony    pony = Pony("Jolly jumper");

    pony.show_awesomness();
}

int main(void)
{
    ponyOnTheHeap();
    ponyOnTheHeap();
}