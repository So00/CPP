#include "Human.hpp"

Brain::Brain()
{
    return;
}

Brain::~Brain()
{
    return;
}

std::string    Brain::identify()
{
    std::stringstream stream;

    stream << "0x" << std::hex << this;
    return (stream.str());
}