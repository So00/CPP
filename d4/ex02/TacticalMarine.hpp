/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 19:36:07 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 19:41:03 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>
# include "ISpaceMarine.hpp"

typedef struct s_marines
{
    ISpaceMarine        *marine;
    struct s_marines    *next;
    
} t_marines;

class TacticalMarine : public ISpaceMarine
{

    public: 

        TacticalMarine(void);
        TacticalMarine(TacticalMarine const & src);
        virtual ~TacticalMarine(void);
        TacticalMarine &		operator=(TacticalMarine const & rhs);
        std::string const	    toString(void) const;

        virtual ISpaceMarine* clone() const;
        virtual void    battleCry() const;
        virtual void    rangedAttack() const;
        virtual void    meleeAttack() const;


    protected:

};

std::ostream &	operator<< (std::ostream & o, TacticalMarine const & rhs);

#endif