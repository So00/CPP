/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:56:19 by atourner          #+#    #+#             */
/*   Updated: 2019/03/28 17:25:58 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

int main(void)
{
    Fixed a;
    Fixed const b( Fixed( 15.4f ) * Fixed( 2.5f ) );
    Fixed c;
    Fixed const d( Fixed( 5.05f ) + Fixed( 2.5f ) );
    Fixed const e( Fixed( 5.05f ) / Fixed( 2.0f ) );
    Fixed const f( Fixed( 5.05f ) - Fixed( 7 ) );
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
    std::cout << "d " << d << std::endl;
    std::cout << "e " << e << std::endl;
    std::cout << "f " << f << std::endl;
    std::cout << "max (a, b) " << Fixed::max( a, b ) << std::endl;
    std::cout << "min (a, b)" << Fixed::min( a, b ) << std::endl;

    return (0);
}