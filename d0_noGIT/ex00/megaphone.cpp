/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 11:14:10 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 11:14:12 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    *capitalize(char *str)
{
    int i = 0;

    while (str[i] != '\0')
    {
        if (str[i] <= 'z' && str[i] >= 'a')
            str[i] += 'A' - 'a';
        i++;
    }
    return (str);
}

int main(int ac, char **av)
{
    int i = 1;

    if (ac > 1)
        while (i < ac)
        {
            std::cout << capitalize(av[i]);
            i++;
        }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    
    std::cout << std::endl;
}
