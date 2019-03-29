/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:57:12 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 18:45:29 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>
# include "ISquad.hpp"
# include "TacticalMarine.hpp"

class Squad : public virtual ISquad
{

    public:

        Squad(void);
        Squad(Squad const & src);
        ~Squad(void);
        Squad &		operator=(Squad const & rhs);

        virtual int             getCount() const;
        virtual ISpaceMarine*   getUnit(int) const;
        virtual int             push(ISpaceMarine*);

    protected:

        t_marines            *_start;

};

#endif