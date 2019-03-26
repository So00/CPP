/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:54:26 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 13:12:40 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int     main(int ac, char **av)
{
    int     length;
    char    *buf;
    int     pos;
    int     lengthReplace;

    if (ac != 4)
        std::cout << "Usage : ./not-sed filename string_to_search string_replacement" << std::endl;
    else
    {
        std::ifstream   file(av[1], std::ios::binary | std::ios::ate);
        if (file.fail())
        {
            std::cout << "Please enter a valid file name" << std::endl;
        }
        else
        {
            length = file.tellg();
            file.seekg(0);
            buf = new char [length];
            file.read(buf, length);
            std::cout << buf << std::endl;
            std::string     all_file = buf;
            delete [] buf;
            pos = 0;
            length = std::strlen(av[2]);
            lengthReplace = std::strlen(av[3]);
            while (all_file.find(av[2], pos) != std::string::npos)
            {
                all_file.replace(all_file.find(av[2], pos), 2, av[3]);
                pos = all_file.find(av[2], pos) + lengthReplace;
            }
            std::cout << all_file << std::endl;
        }
        
    }
    return (0);
}