/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 16:39:57 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 17:11:37 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name) : _name(name)
{
    std::cout << "Initialization of the awesomness of pony." << std::endl;
    this->_awesomness = "You can mount them.";
    this->_advantages = "They can turn into a unicorn with sugar.";
    this->_disadvantages = "You can have a baby centaur.. be carefull.";
    std::cout << "Initalization finished. You can use awesomness now !" << std::endl;
    return;
}

Pony::~Pony(void)
{
    std::cout << "Piou piou. "<< this->_name << " destroyed" << std::endl;
    return;
}

void Pony::show_awesomness(void) const
{
    std::cout << "Awesomness : " << this->_awesomness << std::endl;
    std::cout << "Advantages : " << this->_advantages << std::endl;
    std::cout << "Disadvantages : " << this->_disadvantages << std::endl;
}