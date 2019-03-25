#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <sstream>
# include "Brain.hpp"

class Human
{
    public:
        Human(Brain brain = Brain());
        ~Human();
        std::string     identify();
        Brain           getBrain();

    private:
        const Brain _brain;

};

#endif