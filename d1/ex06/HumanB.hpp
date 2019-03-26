/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 09:45:42 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 11:06:44 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{

    public:

        HumanB(std::string name);
        ~HumanB();

        void    setWeapon(Weapon &weapon);
        void    attack();

    private:

        std::string _name;
        Weapon      *_weapon;

};

#endif