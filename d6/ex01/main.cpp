/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:57:40 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include <ctime>

void*   serialize(void)
{
    Data*   data = new Data();
    char    c;

    while (data->s1.length() < 8)
    {
        c = rand() % 127;
        if (std::isalnum(c))
            data->s1 += c;
    }
    data->n = rand();
    while (data->s2.length() < 8)
    {
        c = rand() % 127;
        if (std::isalnum(c))
            data->s2 += c;
    }
    std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;
    return (reinterpret_cast<void*>(data));
}

Data*   unserialize(void* raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
    srand((int)time(0));
    void*   test = serialize();
    Data*   data = unserialize(test);

    std::cout << data->s1 << " " << data->n << " " << data->s2 << std::endl;

    return (0);
}