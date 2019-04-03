/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:57:35 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int main(int ac, char **av)
{
    std::string save;

    if (ac == 2)
    {
        save = av[1];
        try
        {
            std::cout << "char: ";
            int i = std::stoi(save);
            if (!((i >> 8) & 0xFFFFFFFF))
                Convert convert = Convert(static_cast<char>(i));
            else
                std::cout << "impossible" << std::endl;
        }
        catch(const std::bad_cast& e)
        {
            std::cout << "impossible" << std::endl;
        }
        catch (const std::exception& e)
        {
            std::cout << "impossible" << std::endl;
        }
        try
        {
            std::cout << "int: ";
            Convert convert = Convert(static_cast<int>(std::stoi(save)));
        }
        catch (const std::exception& e)
        {
            std::cout << "impossible" << std::endl;
        }
        try
        {
            std::cout << "float: ";
            Convert convert = Convert(static_cast<float>(std::stof(save)));
        }
        catch (const std::exception& e)
        {
            std::cout << "nan";
        }
        std::cout << "f" << std::endl;
        try
        {
            std::cout << "double: ";
            Convert convert = Convert(static_cast<double>(std::stod(save)));
        }
        catch (const std::exception& e)
        {
            std::cout << "nan" << std::endl;
        }
    }
    else
    {
        std::cout << "Usage : convert yourNumber" << std::endl;
    }

    return (0);
}