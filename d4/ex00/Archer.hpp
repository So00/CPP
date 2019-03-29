/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Archer.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 08:07:40 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 08:07:58 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARCHER_HPP
# define ARCHER_HPP

# include <iostream>
# include "Victim.hpp"

class Archer : public Victim
{

    public: 

        Archer(std::string name);
        Archer(Archer const & src);
        ~Archer(void);
        Archer &		    operator=(Archer const & rhs);

        virtual void    getPolymorphed(void) const;

    protected:
        Archer(void); 

    private:

};

std::ostream &	operator<< (std::ostream & o, Archer const & rhs);

#endif