/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:55:53 by atourner          #+#    #+#             */
/*   Updated: 2019/03/27 12:55:53 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_CLASS_HPP
# define FIXED_CLASS_HPP

# include <iostream>

class Fixed
{

    public:

        Fixed(int nb = 0);
        Fixed(Fixed const & src);
        ~Fixed();
        
        Fixed & operator=(Fixed const & rhs);
        int     getRawBits(void) const;
        void    setRawBits(int const raw);

    private:

        int                 _nb;
        int static const    _frac_bit = 8;
};


#endif