/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:54:26 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 13:43:35 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

std::string    replace(std::string string_to_search, std::string string_to_add, std::string all_file)
{
    int     pos;
    int     length_replace;
    int     length;

    pos = 0;
    length = string_to_search.length();
    length_replace = string_to_add.length();
    while (all_file.find(string_to_search, pos) != std::string::npos)
    {
        pos = all_file.find(string_to_search, pos);
        all_file.replace(pos, length, string_to_add);
        pos += length_replace;
    }
    return (all_file);
}

void        print(std::string output, std::string print)
{
    output += ".replace";
    std::ofstream fileWrite(output);
    fileWrite << print << std::endl;
}

int     main(int ac, char **av)
{
    int     length;
    char    *buf;
    std::string     all_file;

    if (ac != 4)
        std::cout << "Usage : ./not-sed filename string_to_search string_replacement" << std::endl;
    else
    {
        if (!std::strlen(av[2]) || !std::strlen(av[3]))
        {
            std::cout << "Please do not put empty string" << std::endl;
            return (0);
        }
        std::ifstream   file(av[1], std::ios::binary | std::ios::ate);
        if (file.fail())
            std::cout << "Please enter a valid file name" << std::endl;
        else
        {
            length = file.tellg();
            buf = new char [length];
            file.seekg(0);
            file.read(buf, length);
            all_file = buf;
            delete [] buf;
            print(av[1], replace(av[2], av[3], all_file));      
        }  
    }
    return (0);
}