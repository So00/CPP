/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:56:32 by atourner          #+#    #+#             */
/*   Updated: 2019/03/27 12:56:45 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

/*
** Canonical
*/

Fixed::Fixed() : _fixed_nb(0)
{
    return;
}

Fixed::Fixed(int nb) : _fixed_nb (nb << Fixed::_frac_bit)
{
    return;
}

Fixed::Fixed(float const nb) : _fixed_nb(roundf((float)nb * (float)(1 << Fixed::_frac_bit)))
{
    return;
}

Fixed::~Fixed()
{
    return;
}

Fixed::Fixed(Fixed const & src)
{
    *this = src;
    return;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
    if (this != &rhs)
        this->_fixed_nb = rhs.getRawBits();
    return *(this);
}

/*
** Getters - setters
*/

int     Fixed::getRawBits(void) const
{
    return (this->_fixed_nb);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixed_nb = raw;
}

/*
** Return fixed transform
*/

float   Fixed::toFloat(int ret, int act) const
{
    if (act == 1)
        return ((int)this->_fixed_nb / (float)(1 << Fixed::_frac_bit));
    return ((int)ret / (float)(1 << Fixed::_frac_bit));
}

int     Fixed::toInt(void) const
{
    return (this->_fixed_nb >> Fixed::_frac_bit);
}

/*
** Operator
*/

Fixed & Fixed::operator*(const Fixed & mult)
{
    float ref = this->toFloat() * mult.toFloat();
    this->_fixed_nb = roundf(ref * (float)(1 << Fixed::_frac_bit));
    return *(this);
}

Fixed & Fixed::operator/(const Fixed & div)
{
    float ref = this->toFloat() / div.toFloat();
    this->_fixed_nb = roundf(ref * (float)(1 << Fixed::_frac_bit));
    return *(this);
}

Fixed & Fixed::operator-(const Fixed & minus)
{
    float ref = this->toFloat() - minus.toFloat();
    this->_fixed_nb = roundf(ref * (float)(1 << Fixed::_frac_bit));
    return *(this);
}

Fixed & Fixed::operator+(const Fixed & add)
{
    float ref = this->toFloat() + add.toFloat();
    this->_fixed_nb = roundf(ref * (float)(1 << Fixed::_frac_bit));
    return *(this);
}

/*
** Comparison
*/

int     Fixed::operator>(Fixed const & cmp)
{
    return (this->toFloat() > cmp.toFloat());
}

int     Fixed::operator>=(Fixed const & cmp)
{
    return (this->toFloat() >= cmp.toFloat());
}

int     Fixed::operator<(Fixed const & cmp)
{
    return (this->toFloat() < cmp.toFloat());
}

int     Fixed::operator<=(Fixed const & cmp)
{
    return (this->toFloat() <= cmp.toFloat());
}

int     Fixed::operator==(Fixed const & cmp)
{
    return (this->toFloat() == cmp.toFloat());
}

int     Fixed::operator!=(Fixed const & cmp)
{
    return (this->toFloat() != cmp.toFloat());
}

/*
** Increment
*/

float    Fixed::operator++(void)
{
    this->_fixed_nb++;
    return (this->toFloat());
}

float    Fixed::operator--(void)
{
    this->_fixed_nb--;
    return (this->toFloat());
}

float    Fixed::operator++(int post)
{
    post = this->_fixed_nb;
    this->_fixed_nb++;
    return (this->toFloat(post, 0));
}

float    Fixed::operator--(int post)
{
    post = this->_fixed_nb;
    this->_fixed_nb--;
    return (this->toFloat(post, 0));
}

/*
** Utilities
*/

Fixed const & Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    return (b);
}

Fixed const&  Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    return (b);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if (a.toFloat() > b.toFloat())
        return (a);
    return (b);
}

Fixed &  Fixed::min(Fixed &a, Fixed &b)
{
    if (a.toFloat() < b.toFloat())
        return (a);
    return (b);
}

/*
** toString
*/

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}