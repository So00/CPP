/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:18:14 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 11:18:14 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain::Brain()
{
    return;
}

Brain::~Brain()
{
    return;
}

std::string    Brain::identify() const
{
    std::stringstream stream;

    stream << "0x" << std::hex << this;
    return (stream.str());
}