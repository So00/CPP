#ifndef NAME_HPP
# define NAME_HPP

# include <iostream>
# include "BasicModule.hpp"

class Name : public virtual BasicModule
{

    public:

        Name(void);
        Name(Name const & src);
        virtual ~Name(void);

        Name &		            operator=(Name const & rhs);
        void                    createData();

    private:

};

#endif
