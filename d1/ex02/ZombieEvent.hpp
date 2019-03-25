/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:30:01 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 19:10:08 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_EVENT_HPP
# define ZOMBIE_EVENT_HPP
# include "Zombie.hpp"

class ZombieEvent
{
    public:

        ZombieEvent();
        ~ZombieEvent();
        void        setZombieType(std::string type);
        Zombie      *newZombie(std::string name);
        void        randomChump();

    private:
        std::string _type;

};


#endif