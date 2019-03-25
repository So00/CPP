#include "Human.hpp"

Human::Human(Brain brain) : _brain(brain)
{
    return;
}

Human::~Human()
{
    return;
}

std::string    Human::identify()
{
    std::stringstream stream; 

    stream << "0x" << std::hex << &_brain;
    return (stream.str());
}

Brain           Human::getBrain()
{
    return (this->_brain);
}
