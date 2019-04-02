#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class Base;

class A : public Base
{

public: 

    A(void);
    A(A const & src);
    virtual ~A(void);

	A &		operator=(A const & rhs);

    std::string const	toString(void) const;


private:

};

std::ostream &	operator<< (std::ostream & o, A const & rhs);

#endif