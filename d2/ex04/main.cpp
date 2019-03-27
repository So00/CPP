/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/27 12:56:38 by atourner          #+#    #+#             */
/*   Updated: 2019/03/27 12:56:43 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.class.hpp"

std::string     get_brackets(std::string str)
{
    size_t  pos;
    int     brackets;

    pos = str.find("(") + 1;
    for (brackets = 1; brackets && pos < str.length(); pos++)
    {
        if (str[pos] == ')')
            brackets--;
        else if (str[pos] == '(')
            brackets++;
    }
    if (brackets)
        return (str.replace(str.begin(), str.end(), ""));
    return (str.substr(str.find("(") + 1, pos - str.find("(") - 1));
}

float              solve(std::string str)
{
    return (1);
}

std::string        fire_everything(std::string str)
{
    std::string ret;

    if (str.find("(") != std::string::npos)
    {
        ret = get_brackets(str);
        if (ret.length() == 0)
            return (ret);
        fire_everything(ret);
    }
    float oneFixed = solve(str);
    return (str);
}

/*"(15 - 15) * (2 + 15)"
    "1 + 5 - 9 / 3 * 2"
    "1 + 5 - 3 * 2"
    "1 + 5 - 6"
    "6 - 6"
    "0"*/

int     main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Usage : ./eval_expr Arg" << std::endl;
    else
        fire_everything(av[1]);
    return (0);
}