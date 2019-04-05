/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:20:43 by atourner          #+#    #+#             */
/*   Updated: 2019/04/04 14:41:53 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
typename T::iterator     easyfind(T t, int search)
{
    typename T::iterator ret = t.begin();
    for (int i = 0; ret != t.end(); i++, ret++)
    {
        if (*ret == search)
            return (ret);
    }
    return (ret);
}

int main(void)
{
    std::vector<int>                myVector(5);
    std::vector<int>::iterator      it;

    for (int i = 0; i < 5; i++)
        myVector[i] = i;

    it = easyfind(myVector, 0);
    std::cout << *it << std::endl;

    it = easyfind(myVector, -15);
    if (it == myVector.end())
        std::cout << *it << std::endl;
    else
        std::cout << "It can't be find" << std::endl;
    
    for (int i = 5; i < 10; i++)
        myVector.push_back(i);

    it = easyfind(myVector, 9);
    std::cout << *it << std::endl;
    std::cout << myVector[9] << std::endl;
}