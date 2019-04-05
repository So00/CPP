/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:17:19 by atourner          #+#    #+#             */
/*   Updated: 2019/04/04 11:34:07 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    unsigned int    i = 5;
    unsigned int    higher = 8;

    std::cout << std::endl << "*********************INT***********************" << std::endl << std::endl;
    Array<int>      intArray(i);
    Array<int>      intArrayAgain(higher);

    intArray[0] = 2;
    std::cout << intArray << std::endl;
    try
    {
        std::cout << intArray[8] << "mew" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "You're out of the size of the array" << std::endl;
    }
    
    intArrayAgain = intArray;
    std::cout << intArrayAgain << std::endl;
    intArrayAgain[2] = 5;
    std::cout << intArray << std::endl;
    std::cout << intArrayAgain << std::endl;
    intArray = intArrayAgain;
    intArrayAgain[2] = intArray[0];
    std::cout << intArray << std::endl;
    std::cout << intArrayAgain << std::endl;
    std::cout << "size : " << intArray.size() << std::endl;
    Array<int>      cpy(intArray);
    std::cout << cpy << std::endl;

    std::cout << std::endl << "*********************FLOAT***********************" << std::endl << std::endl;

    Array<float>      floatArray(i);
    Array<float>      floatArrayAgain(higher);

    floatArray[2] = 21;
    floatArrayAgain[3] = 42;
    floatArray[0] = floatArrayAgain[3];
    std::cout << floatArray << std::endl;
    std::cout << floatArrayAgain << std::endl;

    std::cout << std::endl << "*********************CHAR***********************" << std::endl << std::endl;

    Array<char>      charArray(i);
    Array<char>      charArrayAgain(higher);

    charArray[2] = 'c';
    charArrayAgain[3] = 't';
    charArray[0] = charArrayAgain[3];
    std::cout << charArray << std::endl;
    std::cout << charArrayAgain << std::endl;
    
    std::cout << std::endl << "*********************STRING***********************" << std::endl << std::endl;

    Array<std::string>      stringArray(i);
    Array<std::string>      stringArrayAgain(higher);

    stringArray[2] = 21;
    stringArrayAgain[3] = 42;
    stringArray[0] = stringArrayAgain[3];
    std::cout << stringArray << std::endl;
    std::cout << stringArrayAgain << std::endl;

    std::cout << std::endl << "*********************Empty array***********************" << std::endl << std::endl;

    Array<int>     empty;

    std::cout << "Size : " << empty.size() << std::endl;
    try
    {
        std::cout << empty[8] << "mew" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "You're out of the size of the array" << std::endl;
    }
    

    return (0);
}