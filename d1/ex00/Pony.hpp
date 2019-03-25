/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 16:39:54 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 17:05:32 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>

class Pony{
    public:

        Pony(std::string name);
        ~Pony(void);
        void    show_awesomness(void) const;

    private:
        std::string _name;
        std::string _awesomness;
        std::string _advantages;
        std::string _disadvantages;    
};

#endif