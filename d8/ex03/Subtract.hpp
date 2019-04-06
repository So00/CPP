#ifndef SUBTRACT_HPP
# define SUBTRACT_HPP

# include <iostream>

class Subtract
{

public: 

    Subtract(void); 
    Subtract(Subtract const & src); 
    virtual ~Subtract(void); 

	Subtract &		operator=(Subtract const & rhs);

    std::string const	toString(void) const;
    void        execute(std::string & mind, int pos);


private:

};
#endif
