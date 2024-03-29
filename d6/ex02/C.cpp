/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:58:01 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C(void)
{
    // std::cout << "C CREATION" << std::endl;
    return;
}

C::C(C const & src)
{
    *this = src;
    return;
}

C::~C(void)
{
    return;
}

C &	C::operator=(C const & rhs)
{
    if (this != &rhs)
        return (*this);
    return (*this);
}

std::string const C::toString(void) const
{
    return "";
}

std::ostream &	operator<< (std::ostream & o, C const & rhs)
{
    o << rhs.toString();
    return o;
}