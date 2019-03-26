/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/26 11:18:08 by atourner          #+#    #+#             */
/*   Updated: 2019/03/26 11:18:09 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int     main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *ptr_str = &str;
    std::string &ref_str = str;

    std::cout << *ptr_str << std::endl;
    std::cout << ref_str << std::endl;
}