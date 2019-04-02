#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

class Base;

class C : public Base
{

public: 

    C(void); 
    C(C const & src); 
    virtual ~C(void); 

	C &		operator=(C const & rhs);

    std::string const	toString(void) const;


private:

};

std::ostream &	operator<< (std::ostream & o, C const & rhs);

#endif