#ifndef MODEL_HPP
# define MODEL_HPP

# include <iostream>
# include "BasicModule.hpp"

class Model : public virtual BasicModule
{

    public:

        Model(void);
        Model(Model const & src);
        virtual ~Model(void);

        Model &		            operator=(Model const & rhs);
        void                    createData();

    private:

};

#endif
