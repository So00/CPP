/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 08:07:53 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 08:23:00 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIMCLASS_HPP
# define VICTIMCLASS_HPP

# include <iostream>

class Victim
{

    public: 

        Victim(std::string name);
        Victim(Victim const & src); 
        virtual ~Victim(void); 

        Victim &		operator=(Victim const & rhs);

        std::string const	toString(void) const;
        virtual void        getPolymorphed(void) const;

        std::string	        getName(void) const;
        void	            setName(std::string name);

    protected:
        Victim(void);
    
        std::string	_name;

    private:

};

std::ostream &	operator<< (std::ostream & o, Victim const & rhs);

#endif