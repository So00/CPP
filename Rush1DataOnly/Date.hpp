#ifndef DATE_HPP
# define DATE_HPP

# include <iostream>
# include "BasicModule.hpp"

class Date : public virtual BasicModule
{

    public:

        Date(void);
        Date(Date const & src);
        virtual ~Date(void);

        Date &		            operator=(Date const & rhs);
        void                    createData();

    private:

};

#endif
