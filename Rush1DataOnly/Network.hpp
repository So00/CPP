#ifndef NETWORK_HPP
# define NETWORK_HPP

# include <iostream>
# include "BasicModule.hpp"

class Network : public virtual BasicModule
{

    public:

        Network(void);
        Network(Network const & src);
        virtual ~Network(void);

        Network &		            operator=(Network const & rhs);
        void                        createData();
        void                        fillActive(std::string act, std::string resp, std::string add);
        void                        fillInactive(std::string act, std::string add);

    private:

};

#endif
