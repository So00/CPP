/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:52:26 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:52:35 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  ROBOTOMYREQUESTFORM_HPP
# define  ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "Form.hpp"

class  RobotomyRequestForm : public Form
{

    public:

        RobotomyRequestForm(void);
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm( RobotomyRequestForm const & src);
        virtual ~RobotomyRequestForm(void);

        virtual void                execute(Bureaucrat const & executor) const;
        RobotomyRequestForm &		operator=( RobotomyRequestForm const & rhs);


    private:

        std::string const   _target;
};

std::ostream &	operator<< (std::ostream & o,  RobotomyRequestForm const & rhs);

#endif