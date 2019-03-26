#include "Fixed.class.hpp"

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

int     Fixed::getRawBits(void) const
{
    return (this->_fixed_nb);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixed_nb = raw;
}

float   Fixed::toFloat(void) const
{
    return ((int)this->_fixed_nb / (float)(1 << Fixed::_frac_bit));
}

int     Fixed::toInt(void) const
{
    return (this->_fixed_nb >> Fixed::_frac_bit);
}

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

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}