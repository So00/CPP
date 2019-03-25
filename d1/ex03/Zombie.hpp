/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:29:43 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 18:54:43 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
    public:

        Zombie(std::string name = "random", std::string type = "Walker");
        ~Zombie(void);
        void        announce(void) const;
        void        set_type(std::string type);
        std::string get_type() const;
        void    random_name();

    private:

        std::string _name;
        std::string _type;
};

    

#endif