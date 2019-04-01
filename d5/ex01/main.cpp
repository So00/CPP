/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 10:00:00 by atourner          #+#    #+#             */
/*   Updated: 2019/04/01 15:29:36 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 14);
        Form        form = Form("test", 15, 15);

        form.beSigned(&hermes);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", -2);
        Form        form = Form("test", 15, 15);

        form.beSigned(&hermes);
        form.beSigned(&hermes);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 14);
        Form        form = Form("test", 15, 15);

        form.beSigned(&hermes);
        form.beSigned(&hermes);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 16);
        Form        form = Form("test", 15, 15);

        form.beSigned(&hermes);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
  
    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 16);
        Form        form = Form("test", -15, 15);

        form.beSigned(&hermes);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
  
    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 16);
        Form        form = Form("test", 15, -15);

        form.beSigned(&hermes);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
  
    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 16);
        Form        form = Form("test", 152, 15);

        form.beSigned(&hermes);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
  
    try
    {
        Bureaucrat  hermes = Bureaucrat("Hermes", 16);
        Form        form = Form("test", 15, 152);

        form.beSigned(&hermes);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return (0);
}