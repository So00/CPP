/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:17:22 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 09:17:33 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{

    public:

        PowerFist(void);
        PowerFist(PowerFist const & src);
        virtual ~PowerFist(void);
        PowerFist &		operator=(PowerFist const & rhs);

        virtual void        attack() const;


    protected:


    private:

};

#endif