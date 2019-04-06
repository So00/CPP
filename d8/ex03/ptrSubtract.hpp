#ifndef PTRSUBTRACT_HPP
# define PTRSUBTRACT_HPP

# include <iostream>

class PtrSubtract
{

public: 

    PtrSubtract(void); 
    PtrSubtract(PtrSubtract const & src); 
    virtual ~PtrSubtract(void); 

	PtrSubtract &		operator=(PtrSubtract const & rhs);

    std::string const	toString(void) const;
    void                execute(std::string & str, int pos);


private:

};
#endif
