/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:00:00 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 15:59:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"
#include "OfficeBlock.hpp"

int main()
{

    srand((int)time(0));

    try
    {
        OfficeBlock *office = new OfficeBlock(new Bureaucrat("Hermes", 37),
        new Bureaucrat("Bob", 37), new Intern());
        office->doBureaucracy("robotomy request", "bender");
        delete office;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat*  hermes = new Bureaucrat("Hermes", 37);
        Intern*      intern = new Intern();
        OfficeBlock* office = new OfficeBlock();

        office->setSigner(*hermes);
        office->setExecutor(*hermes);
        office->setIntern(*intern);
        office->doBureaucracy("robotomy request", "bender");
        delete office;
        delete hermes;
        delete intern;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        OfficeBlock *office = new OfficeBlock(new Bureaucrat("Bob", 150),
        new Bureaucrat("Bob", 150), new Intern());
        office->doBureaucracy("robotomy request", "bender");
        delete office;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat*  hermes = new Bureaucrat("Hermes", 37);
        Intern*      intern = new Intern();
        OfficeBlock* office = new OfficeBlock();

        office->setSigner(*hermes);
        office->setIntern(*intern);
        office->doBureaucracy("robotomy request", "bender");
        delete office;
        delete hermes;
        delete intern;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat*  hermes = new Bureaucrat("Hermes", 37);
        Intern*      intern = new Intern();
        OfficeBlock* office = new OfficeBlock();

        office->setExecutor(*hermes);
        office->setIntern(*intern);
        office->doBureaucracy("robotomy request", "bender");
        delete office;
        delete hermes;
        delete intern;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat*  hermes = new Bureaucrat("Hermes", 37);
        Intern*      intern = new Intern();
        OfficeBlock* office = new OfficeBlock();

        office->setSigner(*hermes);
        office->setExecutor(*hermes);
        office->doBureaucracy("robotomy request", "bender");
        delete office;
        delete hermes;
        delete intern;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat*  hermes = new Bureaucrat("Hermes", 37);
        Intern*      intern = new Intern();
        OfficeBlock* office = new OfficeBlock();

        office->setSigner(*hermes);
        office->setExecutor(*hermes);
        std::cout << *office << std::endl;
        office->setIntern(*intern);
        office->doBureaucracy("robotomy request", "bender");
        delete office;
        delete hermes;
        delete intern;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return (0);
}