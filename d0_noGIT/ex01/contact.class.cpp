/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 15:30:22 by atourner          #+#    #+#             */
/*   Updated: 2019/03/25 16:48:39 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.class.hpp"

Contact::Contact(void)
{
    return;
}

Contact::~Contact(void)
{
    return;
}

void                Contact::creation(void)
{
    std::cout << "PLease enter the first name : ";
    std::cin >> this->_first_name;
    std::cout << "PLease enter the last name : ";
    std::cin >> this->_last_name;
    std::cout << "PLease enter the nickname : ";
    std::cin >> this->_nickname;
    std::cout << "PLease enter the login : ";
    std::cin >> this->_login;
    std::cout << "PLease enter the postal adress : ";
    std::cin >> this->_postal_address;
    std::cout << "PLease enter the email adress : ";
    std::cin >> this->_email_address;
    std::cout << "PLease enter the phone number : ";
    std::cin >> this->_phone_number;
    std::cout << "PLease enter the birthday date : ";
    std::cin >> this->_birthday_date;
    std::cout << "PLease enter the favorite meal : ";
    std::cin >> this->_favorite_meal;
    std::cout << "PLease enter the underwear color : ";
    std::cin >> this->_underwear_color;
    std::cout << "PLease enter the darkest secret : ";
    std::cin >> this->_darkest_secret;
    Contact::_nb_contact += 1;
}

std::string Contact::str_truncated(std::string str)
{
    if (str.size() > 10)
    {
        str.resize(9);
        str += ".";
    }
    else
    {
        while (str.size() < 10)
            str.insert(0, " ");
    }
    return (str);
}

void                Contact::search(void)
{
    std::cout << Contact::str_truncated(this->_first_name) << "|";
    std::cout << Contact::str_truncated(this->_last_name) << "|";
    std::cout << Contact::str_truncated(this->_nickname) << std::endl;
}

void                Contact::show() const
{
    std::cout << "First name : " << this->_first_name << std::endl;
    std::cout << "Last name : " << this->_last_name << std::endl;
    std::cout << "Nickname : " << this->_nickname << std::endl;
    std::cout << "Login : " << this->_login << std::endl;
    std::cout << "Postal adress : " << this->_postal_address << std::endl;
    std::cout << "Email adress : " << this->_email_address << std::endl;
    std::cout << "Phone number : " << this->_phone_number << std::endl;
    std::cout << "Birthday date : " << this->_birthday_date << std::endl;
    std::cout << "Favorite meal : " << this->_favorite_meal << std::endl;
    std::cout << "Underwear color : " << this->_underwear_color << std::endl;
    std::cout << "Darkest secret : " << this->_darkest_secret << std::endl;
}

int                 Contact::get_instance_nb(void)
{
    return (Contact::_nb_contact);
}

int Contact::_nb_contact = 0;