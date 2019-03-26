/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 09:45:25 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 10:56:23 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{

    public:

        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void        attack();

    private:

        std::string         _name;
        Weapon              &_weapon;

};


#endif