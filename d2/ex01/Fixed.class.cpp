#include "Fixed.class.hpp"

Fixed::Fixed() : _fixed_nb(0)
{
    std::cout << "Default constructor called" << std::endl;
    return;
}

Fixed::Fixed(int nb) : _fixed_nb (nb << Fixed::_frac_bit)
{
    std::cout << "Int constructor called" << std::endl;
    return;
}

Fixed::Fixed(float const nb) : _fixed_nb(roundf((float)nb * (float)(1 << Fixed::_frac_bit)))
{
    std::cout << "Float constructor called" << std::endl;
    return;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
    return;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed & Fixed::operator=(const Fixed & rhs)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &rhs)
        this->_fixed_nb = rhs.getRawBits();
    return *(this);
}

int     Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_nb);
}

void    Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixed_nb = raw;
}

float   Fixed::toFloat(void) const
{
    return (this->_fixed_nb / (float)(1 << Fixed::_frac_bit));
}

int     Fixed::toInt(void) const
{
    return (this->_fixed_nb >> Fixed::_frac_bit);
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}