#ifndef PRINT_HPP
# define PRINT_HPP

# include <iostream>

class Print
{

public: 

    Print(void); 
    Print(Print const & src); 
    virtual ~Print(void); 

	Print &		operator=(Print const & rhs);

    std::string const	toString(void) const;
    void                execute(std::string & str, int pos);


private:

};
#endif
