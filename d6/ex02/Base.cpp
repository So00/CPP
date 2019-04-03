/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:57:56 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base(void)
{
    return;
}

Base::Base(Base const & src) 
{
    //Do whatever needs to be done
    *this = src;
    return;
}

Base::~Base(void)
{
    return;
}

Base &	Base::operator=(Base const & rhs)
{
    if (&rhs == this)
        return (*this);
    return (*this);
}

std::string const Base::toString(void) const
{
    return "";
}

Base*               Base::generate(void)
{
    if (!(rand() % 3))
        return (dynamic_cast<Base*>(new A()));
    if (!(rand() % 3))
        return (dynamic_cast<Base*>(new B()));
    return (dynamic_cast<Base*>(new C()));
}

void                Base::identify_from_pointer(Base* p)
{
    A*      testA = dynamic_cast<A*>(p);
    B*      testB = dynamic_cast<B*>(p);
    if (testA != NULL)
        std::cout << "Ceci est un enfant de A ptr" << std::endl;
    else if (testB != NULL)
        std::cout << "Ceci est un enfant de B ptr" << std::endl;
    else
        std::cout << "Ceci est un enfant de C ptr" << std::endl;
    delete p;
}

void                Base::identify_from_reference(Base& p)
{
    A*      testA = dynamic_cast<A*>(&p);
    B*      testB = dynamic_cast<B*>(&p);
    if (testA != NULL)
        std::cout << "Ceci est un enfant de A ref" << std::endl;
    else if (testB != NULL)
        std::cout << "Ceci est un enfant de B ref" << std::endl;
    else
        std::cout << "Ceci est un enfant de C ref" << std::endl;
}

std::ostream &	operator<< (std::ostream & o, Base const & rhs)
{
    o << rhs.toString();
    return o;
}