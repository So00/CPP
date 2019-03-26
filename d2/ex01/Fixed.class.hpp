#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>
# include <cmath>

class Fixed
{

    public:

        Fixed();
        Fixed(int nb);
        Fixed (float const nb);
        Fixed(Fixed const & src);
        ~Fixed();
        
        Fixed & operator=(Fixed const & rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);
        float   toFloat(void) const;
        int     toInt(void) const;

    private:

        int                 _fixed_nb;
        int static const    _frac_bit = 8;
};

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);

#endif