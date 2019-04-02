#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

struct Data {
    std::string     s1;
    int             n;
    std::string     s2;
};

std::ostream &	operator<< (std::ostream & o, Data const & rhs);

#endif