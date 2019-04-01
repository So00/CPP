/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 09:59:53 by atourner          #+#    #+#             */
/*   Updated: 2019/04/01 15:30:35 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat
{

    public: 

    class GradeTooHighException : public std::exception
    {

        public:

            GradeTooHighException(void) throw();
            GradeTooHighException(GradeTooHighException const & src) throw(); 
            virtual ~GradeTooHighException(void) throw();
            virtual const char *what() const throw();

            GradeTooHighException &		operator=(GradeTooHighException const & rhs);

        private:

    };

    class GradeTooLowException : public std::exception
    {

        public: 

            GradeTooLowException(void) throw();
            GradeTooLowException(GradeTooLowException const & src) throw(); 
            virtual ~GradeTooLowException(void) throw();
            virtual const char *what() const throw();

            GradeTooLowException &		operator=(GradeTooLowException const & rhs);


    private:

    };

    Bureaucrat(std::string const name, int grade);
    Bureaucrat(Bureaucrat const & src);
    ~Bureaucrat(void);

	Bureaucrat &		operator=(Bureaucrat const & rhs);

    std::string const   toString(void) const;
    std::string const   getName() const;
    int                 getGrade() const;
    void                signForm(std::string name);

    void                operator++();
    void                operator--();
    void                check(int grade);

private:
    Bureaucrat(void);
    std::string const    _name;
    int                  _grade;

};

std::ostream &	operator<< (std::ostream & o, Bureaucrat const & rhs);

#endif