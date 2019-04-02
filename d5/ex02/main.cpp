/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:00:00 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 10:09:33 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{

    srand((int)time(0));

    std::cout << "SHRUBBERY" << std::endl << std::endl;
    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 137);
        Form        *Form = new ShrubberyCreationForm();

        hermes.executeForm(*Form);
        hermes.signForm(Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 137);
        Form        *Form = new ShrubberyCreationForm("PlanetExpress");

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 145);
        Form        *Form = new ShrubberyCreationForm();

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 148);
        Form        *Form = new ShrubberyCreationForm();

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    std::cout << std::endl << std::endl << "ROBOTOMY" << std::endl << std::endl;


    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 45);
        Form        *Form = new RobotomyRequestForm();

        hermes.executeForm(*Form);
        hermes.signForm(Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 45);
        Form        *Form = new RobotomyRequestForm();

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 72);
        Form        *Form = new RobotomyRequestForm();

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 85);
        Form        *Form = new RobotomyRequestForm();

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    std::cout << std::endl << std::endl << "PRESIDENT" << std::endl << std::endl;


    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 5);
        Form        *Form = new PresidentialPardonForm();

        hermes.executeForm(*Form);
        hermes.signForm(Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 5);
        Form        *Form = new PresidentialPardonForm();

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 25);
        Form        *Form = new PresidentialPardonForm();

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 26);
        Form        *Form = new PresidentialPardonForm();

        hermes.signForm(Form);
        hermes.executeForm(*Form);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}