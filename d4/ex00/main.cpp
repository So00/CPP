/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 08:07:31 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 08:30:31 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Archer.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    
    Victim jim("Jimmy");
    Peon joe("Joe");
    Archer ashe("Ashe");

    std::cout << robert << jim << joe << ashe;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(ashe);

    return (0);
}