#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm:: ShrubberyCreationForm(void)
: Form("ShrubberyCreationForm", 145, 137) 
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
    try
    {
    std::ofstream file;
    file.open("PlanetExpress.3000");
    file << "          .     .  .      +     .      .          .\n     .       .      .     #       .           .\n        .      .         ###            .      .      .\n      .      .   \"#:. .:##\"##:. .:#\"  .      .\n          .      . \"####\"###\"####\"  .\n       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n  .             \"#########\"#########\"        .        .\n        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n                .\"##\"#####\"#####\"##\"           .      .\n    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n      .     \"#######\"##\"#####\"##\"#######\"      .     .\n    .    .     \"#####\"\"#######\"\"#####\"    .      .\n            .     \"      000      \"    .     .\n       .         .   .   000     .        .       .\n.. .. ..................O000O........................ ......\n";
    file.close();
    }
    catch (std::exception e)
    {
        std::cout << "Error in the file : " << e.what() << std::endl;
    }
}

std::ostream &	operator<< (std::ostream & o,  ShrubberyCreationForm const & rhs)
{
    o << rhs.toString();
    return o;
}