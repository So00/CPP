/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 09:17:22 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 11:32:20 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{

    public:

        PlasmaRifle(void);
        PlasmaRifle(PlasmaRifle const & src);
        virtual ~PlasmaRifle(void);
        PlasmaRifle &		operator=(PlasmaRifle const & rhs);

        virtual void        attack() const;


    protected:


    private:

};

#endif