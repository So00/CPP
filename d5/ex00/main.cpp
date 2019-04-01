/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:00:00 by atourner          #+#    #+#             */
/*   Updated: 2019/04/01 14:50:12 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat  max = Bureaucrat("Max", 0);

        std::cout << max << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  min = Bureaucrat("Min", 150);

        std::cout << min << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 151);

        std::cout << hermes << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 36);

        std::cout << hermes << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 1);
        --hermes;

        std::cout << hermes << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 150);
        ++hermes;

        std::cout << hermes << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }


    return (0);
}