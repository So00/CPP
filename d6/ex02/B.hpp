/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:57:54 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class Base;

class B : public Base
{

public: 

    B(void); 
    B(B const & src); 
    virtual ~B(void); 

	B &		operator=(B const & rhs);

    std::string const	toString(void) const;


private:

};

std::ostream &	operator<< (std::ostream & o, B const & rhs);

#endif