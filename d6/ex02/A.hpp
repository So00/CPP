/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:57:49 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class Base;

class A : public Base
{

public: 

    A(void);
    A(A const & src);
    virtual ~A(void);

	A &		operator=(A const & rhs);

    std::string const	toString(void) const;


private:

};

std::ostream &	operator<< (std::ostream & o, A const & rhs);

#endif