/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:58:06 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:58:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

int main(void)
{
    Base*   base = new Base();
    Base*   tmp;
    srand((int)time(0));

    for (int i = 0; i < 6; i++)
    {
        tmp = base->generate();
        base->identify_from_reference(*tmp);
        base->identify_from_pointer(tmp);
    }
    delete base;
    return (0);
}