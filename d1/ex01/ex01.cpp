/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 17:17:49 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 17:25:13 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void memoryLeak()
{
    std::string* panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}