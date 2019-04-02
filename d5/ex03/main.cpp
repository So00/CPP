/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:00:00 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 10:45:12 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{

    srand((int)time(0));

    try
    {
        Intern someRandomIntern;
        Bureaucrat *hermes = new Bureaucrat("Hermes", 45);
        Form* rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        hermes->signForm(rrf);
        hermes->executeForm(*rrf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;

    try
    {
        Intern someRandomIntern;
        Bureaucrat *hermes = new Bureaucrat("Hermes", 72);
        Form* rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        hermes->signForm(rrf);
        hermes->executeForm(*rrf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
 
    try
    {
        Intern someRandomIntern;
        Bureaucrat *hermes = new Bureaucrat("Hermes", 73);
        Form* rrf;

        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        hermes->signForm(rrf);
        hermes->executeForm(*rrf);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    

    return (0);
}