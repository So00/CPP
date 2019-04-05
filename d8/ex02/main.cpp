/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 16:11:51 by atourner          #+#    #+#             */
/*   Updated: 2019/04/05 13:47:54 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
    Mutantstack<int>    mstack;

    mstack.push(5);
    mstack.push(17);
    mstack.push(42);

    std::cout << "Array : 42 17 5" << std::endl;
    std::cout << "Size : " << mstack.size() << std::endl;
    Mutantstack<int>::Iterator it = mstack.begin();
    std::cout << "mstack.begin() = " << *it << std::endl;
    it++;
    std::cout << "Iterator++ = " << *it << std::endl;
    it = mstack.begin();
    std::cout << "It begin = " << *it << std::endl;
    it = mstack.end();
    std::cout << "It end = " << *it << std::endl;
    mstack.pop();
    it = mstack.begin();
    std::cout << "After one pop : " << *it << std::endl;
    mstack.pop();
    mstack.pop();
    mstack.pop();
    mstack.pop();
    mstack.pop();
    mstack.pop();
    mstack.pop();
    it = mstack.begin();
    if (it != NULL)
        std::cout << "After pop = " << *it << std::endl;
    else
        std::cout << "It == NULL because stack is empty" << std::endl;
    
    std::cout << "Size : " << mstack.size() << std::endl;
    for (int i = 37; i < 42; i++)
        mstack.push(i);
    it = mstack.begin();
    Mutantstack<int>::Iterator  end = mstack.end();
    int*  test = it++;
    std::cout << "Ceci est un test de ++ " << *test << std::endl;
    test = it--;
    std::cout << "Ceci est un test de -- " << *test << std::endl;
    std::cout << "Ceci est ma fin : " << *end << std::endl;
    while (it != end)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    return (0);
}