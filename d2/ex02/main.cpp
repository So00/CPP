/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:56:19 by atourner          #+#    #+#             */
/*   Updated: 2019/03/27 12:56:20 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int main(void)
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    Fixed c;
    std::cout << a << std::endl;
    std::cout << "> true " << (Fixed(2.25f) > Fixed(2)) << std::endl;
    std::cout << "> false " << (Fixed(0.25f) > Fixed(2)) << std::endl;
    std::cout << ">= true " << (Fixed(2.0f) >= Fixed(2)) << std::endl;
    std::cout << ">= false " << (Fixed(1.99f) >= Fixed(2)) << std::endl;
    std::cout << "< true " << (Fixed(2.25f) < Fixed(3)) << std::endl;
    std::cout << "< false " << (Fixed(2.25f) < Fixed(2)) << std::endl;
    std::cout << "<= true " << (Fixed(2.0f) >= Fixed(2)) << std::endl;
    std::cout << "<= false " << (Fixed(2.25f) <= Fixed(2)) << std::endl;
    std::cout << "== true " << (Fixed(2.0f) == Fixed(2)) << std::endl;
    std::cout << "== false " << (Fixed(2.01f) == Fixed(2)) << std::endl;
    std::cout << "!= true " << (Fixed(2.1f) != Fixed(2)) << std::endl;
    std::cout << "!= false " << (Fixed(2.0f) != Fixed(2)) << std::endl;
    std::cout << "a " << ++a << std::endl;
    std::cout << "a " << a << std::endl;
    std::cout << "a " << a++ << std::endl;
    std::cout << "a " << a << std::endl;
    std::cout << "c " << --c << std::endl;
    std::cout << "c " << c << std::endl;
    std::cout << "c " << c-- << std::endl;
    std::cout << "c " << c << std::endl;
    std::cout << "b " << b << std::endl;
    std::cout << "max (a, b) " << Fixed::max( a, b ) << std::endl;
    std::cout << "min (a, b)" << Fixed::min( a, b ) << std::endl;
    return (0);
}