/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 09:44:40 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 10:49:30 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
    
    public:

        Weapon(std::string type);
        ~Weapon();
        void                    setType(std::string type);
        std::string const       &getType();

    private:

        std::string         _type;
        std::string const   &_ref_weapon;


};




#endif