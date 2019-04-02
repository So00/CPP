#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class Base;

class B : public Base
{

public: 

    B(void); 
    B(B const & src); 
    virtual ~B(void); 

	B &		operator=(B const & rhs);

    std::string const	toString(void) const;


private:

};

std::ostream &	operator<< (std::ostream & o, B const & rhs);

#endif