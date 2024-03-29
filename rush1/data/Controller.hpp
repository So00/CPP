#ifndef CONTROLLER_HPP
# define CONTROLLER_HPP

# include <iostream>
# include "Model.hpp"
# include "Cpu.hpp"
# include "Ram.hpp"
# include "Name.hpp"
# include "OsInfo.hpp"
# include "Date.hpp"
# include "Processus.hpp"
# include "Network.hpp"

class Controller
:   public Model, public Cpu, public Ram,
    public Name, public OsInfo, public Date,
    public Processus, public Network
{

    public:

        Controller(void); 
        Controller(Controller const & src); 
        virtual ~Controller(void);
        void        update();

    private:
        virtual Controller &		operator=(Controller const & rhs);

};

#endif
