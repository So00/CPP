#ifndef CPU_HPP
# define CPU_HPP

# include <iostream>
# include "BasicModule.hpp"

class Cpu : public virtual BasicModule
{

    public:

        Cpu(void);
        Cpu(Cpu const & src);
        virtual ~Cpu(void);

        Cpu &		            operator=(Cpu const & rhs);
        void                    createData();

    private:

};

#endif
