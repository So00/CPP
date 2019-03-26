#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <sstream>
# include "Brain.hpp"

class Human
{
    public:
        Human();
        ~Human();
        std::string     identify() const;
        Brain const     &getBrain() const;

    private:
        Brain const     _brain;

};

#endif