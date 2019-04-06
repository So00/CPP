#ifndef PTRADD_HPP
# define PTRADD_HPP

# include <iostream>

class PtrAdd
{

public: 

    PtrAdd(void); 
    PtrAdd(PtrAdd const & src); 
    virtual ~PtrAdd(void); 

	PtrAdd &		operator=(PtrAdd const & rhs);

    std::string const	toString(void) const;
    void                execute(std::string & str, int pos);


private:

};
#endif
