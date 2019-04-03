/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 20:51:57 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 20:52:35 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm:: ShrubberyCreationForm(void)
: Form("ShrubberyCreationForm", 145, 137), _target("default")
{
    return;
}

ShrubberyCreationForm:: ShrubberyCreationForm(std::string target)
: Form("ShrubberyCreationForm", 145, 137), _target(target)
{
    return;
}

ShrubberyCreationForm:: ShrubberyCreationForm( ShrubberyCreationForm const & src) 
{
    *this = src;
    return;
}

ShrubberyCreationForm::~ ShrubberyCreationForm(void)
{
    return;
}

ShrubberyCreationForm &	 ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs)
{
    if (this != &rhs)
    {
        this->setSigned(rhs.getSigned());
    }
    return *this;
}

void            ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    this->checkExec(executor);
    std::ofstream file;
    file.open(this->_target.c_str());
    if (!file.fail())
        file << "          .     .  .      +     .      .          .\n     .       .      .     #       .           .\n        .      .         ###            .      .      .\n      .      .   \"#:. .:##\"##:. .:#\"  .      .\n          .      . \"####\"###\"####\"  .\n       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n  .             \"#########\"#########\"        .        .\n        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n                .\"##\"#####\"#####\"##\"           .      .\n    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n      .     \"#######\"##\"#####\"##\"#######\"      .     .\n    .    .     \"#####\"\"#######\"\"#####\"    .      .\n            .     \"      000      \"    .     .\n       .         .   .   000     .        .       .\n.. .. ..................O000O........................ ......\n";
    else
        std::cout << "An error has occurect during the opening of the file" << std::endl;
    file.close();
}

std::ostream &	operator<< (std::ostream & o,  ShrubberyCreationForm const & rhs)
{
    o << rhs.toString();
    return o;
}