/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:53:09 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:53:22 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  SHRUBBERYCREATIONFORM_HPP
# define  SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "Form.hpp"
# include <fstream>

class  ShrubberyCreationForm : public Form
{

    public:

        ShrubberyCreationForm(void);
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm( ShrubberyCreationForm const & src);
        virtual ~ShrubberyCreationForm(void);

        virtual void                execute(Bureaucrat const & executor) const;
        ShrubberyCreationForm &		operator=( ShrubberyCreationForm const & rhs);


    private:

        std::string const   _target;
};

std::ostream &	operator<< (std::ostream & o,  ShrubberyCreationForm const & rhs);

#endif