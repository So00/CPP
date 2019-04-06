#ifndef CONTROLLER_HPP
# define CONTROLLER_HPP

# include <iostream>
# include "Model.hpp"
# include "Cpu.hpp"
# include "Ram.hpp"

class Controller : public Model, public Cpu, public Ram
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
