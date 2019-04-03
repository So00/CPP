/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:57:32 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>

class Convert {

    public: 

        explicit Convert(char c);
        explicit Convert(int i);
        explicit Convert(float f);
        explicit Convert(double d);
        Convert(Convert const & src);
        ~Convert(void);

        Convert &		operator=(Convert const & rhs);

        std::string const	toString(void) const;


    private:
        Convert(void);

};

std::ostream &	operator<< (std::ostream & o, Convert const & rhs);

#endif