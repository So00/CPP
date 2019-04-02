/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/01 15:30:39 by atourner          #+#    #+#             */
/*   Updated: 2019/04/02 11:04:45 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <ctime>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

    public:

        class GradeTooLowException : public std::exception
        {

            public: 

                GradeTooLowException(void) throw();
                GradeTooLowException(Bureaucrat *hermes, std::string formName, std::string reason) throw();
                GradeTooLowException(GradeTooLowException const & src) throw(); 
                virtual ~GradeTooLowException(void) throw();

                virtual const char          *what() const throw();

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
        
        class ExecuteError : public std::exception
        {

            public:

                ExecuteError(void) throw();
                ExecuteError(Bureaucrat const *hermes, std::string formName, std::string reason) throw();
                ExecuteError(ExecuteError const & src) throw(); 
                virtual ~ExecuteError(void) throw();
                virtual const char *what() const throw();

                ExecuteError &		operator=(ExecuteError const & rhs);

            private:
                std::string  const   _name;
                std::string  const   _formName;
                std::string  const   _reason;
        };

        Form(void);
        Form(std::string name, int sign, int exec);
        Form(Form const & src); 
        virtual ~Form(void);

        Form &		operator=(Form const & rhs);

        void                check(int grade);
        std::string const	toString(void) const;
        void                beSigned(Bureaucrat *hermes);
        bool                getSigned() const;
        std::string         getName() const;
        virtual void        execute(Bureaucrat const & executor) const = 0;
        int                 getGradeToSign() const;
        int                 getGradeToExec() const;
        void                setSigned(bool sign);
        void                checkExec(Bureaucrat const &hermes) const;

    private:

        std::string const   _name;
        bool                _signed;
        int                 _gradeRequireSign;
        int                 _gradeRequireExec;

};

std::ostream &	operator<< (std::ostream & o, Form const & rhs);

#endif