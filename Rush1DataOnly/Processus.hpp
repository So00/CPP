#ifndef PROCESSUS_HPP
# define PROCESSUS_HPP

# include <iostream>
# include "BasicModule.hpp"

class Processus : public virtual BasicModule
{

    public:

        Processus(void);
        Processus(Processus const & src);
        virtual ~Processus(void);

        Processus &		            operator=(Processus const & rhs);
        void                    createData();

    private:

};

#endif
