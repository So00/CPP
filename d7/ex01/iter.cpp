/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/03 10:59:22 by atourner          #+#    #+#             */
/*   Updated: 2019/04/03 16:20:56 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void    add(T &nb)
{
    nb++;
}

void    addStr(std::string& str)
{
    str += " ADD ";
}


template <typename T>
void        iter(T *tab, unsigned int length, void (*fun)(T&))
{
    if (fun != NULL)
        for (unsigned int i = 0; i < length; i++)
            fun(tab[i]);
}

int main(void)
{
    std::string     *test = new std::string[3];
    int             *testI = new int[4];
    float           *testF = new float[5];

    test[0] = "Feel";
    test[1] = "good";
    test[2] = "shabada";
    testI[0] = 1;
    testI[1] = 2;
    testI[2] = 3;
    testI[3] = 4;
    testF[0] = 0.5f;
    testF[1] = 1.5f;
    testF[2] = 2.5f;
    testF[3] = 3.5f;
    testF[4] = 4.5f;
    void    (*prtStr)(std::string&) = addStr;
    void    (*ptrInt)(int&) = add;
    void    (*ptrFlo)(float&) = add;

    std::cout << "STR Avant : " << test[0] << " " << test[1] << " " << test[2] << std::endl;
    iter(test, static_cast<unsigned int>(3), prtStr);
    std::cout << "STR Apres : " << test[0] << " " << test[1] << " " << test[2] << std::endl;
    std::cout << "INT Avant : " << testI[0] << " " << testI[1] << " " << testI[2] << " " << testI[3] <<std::endl;
    iter(testI, static_cast<unsigned int>(4), ptrInt);
    std::cout << "INT Apres : " << testI[0] << " " << testI[1] << " " << testI[2] << " " << testI[3] << std::endl;
    std::cout << "FLOAT Avant : " << testF[0] << " " << testF[1] << " " << testF[2] << std::endl;
    iter(testF, static_cast<unsigned int>(5), ptrFlo);
    std::cout << "FLOAT Apres : " << testF[0] << " " << testF[1] << " " << testF[2] << std::endl;

}