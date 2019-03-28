/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/28 15:36:56 by atourner          #+#    #+#             */
/*   Updated: 2019/03/28 15:38:18 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
# define SCAV_TRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{

    public:

        ScavTrap(void);
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap(void);
        
        ScavTrap & operator=(ScavTrap const & rhs);

        /*
        ** Utilities
        */

        void            rangedAttack(std::string const & target) const;
        void            meleeAttack(std::string const & target) const;
        void            challengeNewcomer(std::string const & target);

    private:


};


#endif