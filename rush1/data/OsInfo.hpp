#ifndef OSINFO_HPP
# define OSINFO_HPP

# include <iostream>
# include "BasicModule.hpp"

class OsInfo : public virtual BasicModule
{

    public:

        OsInfo(void);
        OsInfo(OsInfo const & src);
        virtual ~OsInfo(void);

        OsInfo &		            operator=(OsInfo const & rhs);
        void                        createData();

    private:

};

#endif
