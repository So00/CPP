/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 11:14:10 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 15:14:42 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "contact.class.hpp"

int     user_choice(void)
{
    int choice;
    std::string entry;

    choice = 0;
    while (choice < 1 || choice > Contact::get_instance_nb())
    {
        std::cout << "Please choose the contact you want to see : ";
        std::cin >> entry;
        if (entry.length() == 1)
            choice = std::atoi(entry.c_str());
        else
            choice = 0;
    }
    return (choice);
}

int     main(void)
{
    int         running;
    std::string cmd;
    Contact     contact[8];
    int         choice;
    int         i;

    running = 1;
    while (running)
    {
        std::cout << "Please enter EXIT, ADD or SEARCH : ";
        std::cin >> cmd;
        if (!cmd.compare("EXIT"))
            running = 0;
        else if (!cmd.compare("ADD"))
        {
            if(Contact::get_instance_nb() < 8)
            {
                contact[Contact::get_instance_nb()].creation();
                std::cout << "You have created " << Contact::get_instance_nb() << " contacs" << std::endl;
            }
            else
                std::cout << "You already have 8 contacts. Sorry, you can't create more" << std::endl;
        }
        else if (!cmd.compare("SEARCH"))
        {
            if(Contact::get_instance_nb() > 0)
            {
                i = 0;
                while (i < Contact::get_instance_nb())
                {
                    std::cout << Contact::str_truncated(std::to_string(i + 1)) << "|";
                    contact[i].search();
                    i++;
                }
                choice = user_choice();
                contact[choice - 1].show();
            }
            else
                std::cout << "Please add contact before using SEARCH" << std::endl;
        }
        else
            std::cout << std::endl << "Please enter a valid command." << std::endl;
    }
    return (0);
}
