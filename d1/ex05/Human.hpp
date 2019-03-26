/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:18:25 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 11:18:26 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <sstream>
# include "Brain.hpp"

class Human
{
    public:
        Human();
        ~Human();
        std::string     identify() const;
        Brain const     &getBrain() const;

    private:
        Brain const     _brain;

};

#endif