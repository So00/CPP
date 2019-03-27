/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:56:01 by atourner          #+#    #+#             */
/*   Updated: 2019/03/27 12:56:06 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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