/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 10:30:45 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 11:22:50 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{

    public: 

        Enemy(void);
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const & src);
        virtual ~Enemy(void);
        Enemy &		operator=(Enemy const & rhs);
        std::string const	toString(void) const;
    	
        int	            getHP(void) const;
    	std::string     getType(void) const;
        virtual void    takeDamage(int);

    private:

        int	_HP;
        std::string _type;
};

std::ostream &	operator<< (std::ostream & o, Enemy const & rhs);

#endif