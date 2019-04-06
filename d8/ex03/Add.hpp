#ifndef ADD_HPP
# define ADD_HPP

# include <iostream>

class Add
{

public: 

    Add(void);
    Add(Add const & src);
    virtual ~Add(void);

	Add &		operator=(Add const & rhs);

    void        execute(std::string & mind, int pos);


private:

};
#endif
