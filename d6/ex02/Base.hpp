/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:57:58 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class A;
class B;
class C;

class Base {

    public:

        Base(void);
        Base(Base const & src);
        virtual ~Base(void);

        Base &		operator=(Base const & rhs);

        std::string const	toString(void) const;
        Base*               generate();
        void                identify_from_pointer(Base* p);
        void                identify_from_reference(Base& p);

    private:

};

std::ostream &	operator<< (std::ostream & o, Base const & rhs);

#endif