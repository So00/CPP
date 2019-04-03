/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:57:46 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A(void)
{
    // std::cout << "A CREATION" << std::endl;
    return;
}

A::A(A const & src) 
{
    *this = src;
    return;
}

A::~A(void)
{
    return;
}

A &	A::operator=(A const & rhs)
{
    if (this != &rhs)
        return (*this);
    return (*this);
}

std::string const A::toString(void) const
{
    return "";
}

std::ostream &	operator<< (std::ostream & o, A const & rhs)
{
    o << rhs.toString();
    return o;
}