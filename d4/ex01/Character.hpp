/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 12:21:35 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 12:21:36 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{

    public:

        Character(std::string const & name);
        Character(Character const & src);
        ~Character(void);
        Character &		operator=(Character const & rhs);
        std::string const	toString(void) const;

        void recoverAP(void);
        void equip(AWeapon*);
        void attack(Enemy*);
        std::string const getName() const;

    private:

        Character(void);
        std::string _name;
        int         _AP;
        int         _maxAP;
        AWeapon     *_weapon;

};

std::ostream &	operator<< (std::ostream & o, Character const & rhs);

#endif