/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 11:03:57 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 11:33:20 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public virtual Enemy
{

    public:

        RadScorpion(void);
        RadScorpion(RadScorpion const & src); 
        virtual ~RadScorpion(void); 
        RadScorpion &		operator=(RadScorpion const & rhs);

    private:


};

#endif