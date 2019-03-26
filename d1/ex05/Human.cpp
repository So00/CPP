/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:18:22 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 11:18:23 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
    return;
}

Human::~Human()
{
    return;
}

std::string    Human::identify() const
{
    std::stringstream stream; 

    stream << "0x" << std::hex << &(this->_brain);
    return (stream.str());
}

Brain const    &Human::getBrain() const
{
    Brain const &ref_brain = this->_brain;
    return (ref_brain);
}