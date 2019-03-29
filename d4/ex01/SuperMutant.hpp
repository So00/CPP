/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 11:03:57 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 11:22:28 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>
# include "Enemy.hpp"
class SuperMutant : public virtual Enemy
{

    public: 

        SuperMutant(void);
        SuperMutant(SuperMutant const & src); 
        virtual ~SuperMutant(void); 
        SuperMutant &		operator=(SuperMutant const & rhs);

        virtual void    takeDamage(int);

    private:


};

#endif