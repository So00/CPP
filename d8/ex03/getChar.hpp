#ifndef GETCHAR_HPP
# define GETCHAR_HPP

# include <iostream>

class GetChar
{

public: 

    GetChar(void); 
    GetChar(GetChar const & src); 
    virtual ~GetChar(void); 

	GetChar &		operator=(GetChar const & rhs);

    std::string const	toString(void) const;
    void                execute(std::string & str, int pos);


private:

};
#endif
