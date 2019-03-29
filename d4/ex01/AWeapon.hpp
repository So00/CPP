/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:17:28 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 10:01:04 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{

    public:

        AWeapon(void);
        AWeapon(std::string const & name, int damage, int APcost);
        AWeapon(AWeapon const & src);
        virtual ~AWeapon(void);
        AWeapon &		operator=(AWeapon const & rhs);
        std::string const	toString(void) const;

        virtual void        attack() const = 0;
        
        std::string	const   getName(void) const;
        int	                getDamage(void) const;
        int	                getAPcost(void) const;

    private:

        std::string	_name;
        int	_damage;
        int	_APcost;

};

std::ostream &	operator<< (std::ostream & o, AWeapon const & rhs);

#endif