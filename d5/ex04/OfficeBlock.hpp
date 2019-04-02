#ifndef OFFICEBLOCK_HPP
# define OFFICEBLOCK_HPP

# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "Intern.hpp"

class OfficeBlock {

    public: 

        OfficeBlock(void);
        OfficeBlock(Bureaucrat* hermes, Bureaucrat* signer, Intern* intern);
        OfficeBlock(OfficeBlock const & src); 
        ~OfficeBlock(void); 

    class LostForm : public std::exception
    {

        public: 

            LostForm(void) throw();
            LostForm(std::string error) throw();
            LostForm(LostForm const & src) throw(); 
            virtual ~LostForm(void) throw();

            virtual const char          *what() const throw();

            LostForm &		operator=(LostForm const & rhs);


        private:
            std::string     _error;
    };

        OfficeBlock &		operator=(OfficeBlock const & rhs);

        std::string const	toString(void) const;
        Bureaucrat*     getExecutor() const;
        Bureaucrat*     getSigner() const;
        Intern*         getIntern() const;
        void            setExecutor(Bureaucrat& hermes);
        void            setSigner(Bureaucrat& signer);
        void            setIntern(Intern& intern);
        void            doBureaucracy(std::string formName, std::string target) const;
        void            check() const;

    private:

        Bureaucrat*     _hermes;
        Bureaucrat*     _signer;
        Intern*         _intern;

};

std::ostream &	operator<< (std::ostream & o, OfficeBlock const & rhs);

#endif