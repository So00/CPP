#ifndef RAM_HPP
# define RAM_HPP

# include <iostream>
# include "BasicModule.hpp"

class Ram : public virtual BasicModule
{

    public:

        Ram(void);
        Ram(Ram const & src);
        virtual ~Ram(void);

        Ram &		            operator=(Ram const & rhs);
        void                    createData();

    private:

};

#endif
