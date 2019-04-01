/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:30:39 by atourner          #+#    #+#             */
/*   Updated: 2019/04/01 15:30:40 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Form {

    public: 

        class GradeTooLowException : public std::exception
        {

            public: 

                GradeTooLowException(void) throw();
                GradeTooLowException(Bureaucrat *hermes, std::string formName, std::string reason) throw();
                GradeTooLowException(GradeTooLowException const & src) throw(); 
                virtual ~GradeTooLowException(void) throw();
                virtual const char *what() const throw();

                GradeTooLowException &		operator=(GradeTooLowException const & rhs);


            private:
                std::string  const   _name;
                std::string  const   _formName;
                std::string  const   _reason;
        };

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

        class FormCreationError : public std::exception
        {

            public:

                FormCreationError(void) throw();
                FormCreationError(FormCreationError const & src) throw(); 
                virtual ~FormCreationError(void) throw();
                virtual const char *what() const throw();

                FormCreationError &		operator=(FormCreationError const & rhs);

            private:

        };

        Form(void);
        Form(std::string name, int sign, int exec);
        Form(Form const & src); 
        ~Form(void);

        Form &		operator=(Form const & rhs);

        void                check(int grade);
        std::string const	toString(void) const;
        void                beSigned(Bureaucrat *hermes);


    private:

        std::string const   _name;
        bool                _signed;
        int                 _gradeRequireSign;
        int                 _gradeRequireExec;

};

std::ostream &	operator<< (std::ostream & o, Form const & rhs);

#endif