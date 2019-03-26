#include "Human.hpp"

Brain::Brain()
{
    return;
}

Brain::~Brain()
{
    return;
}

std::string    Brain::identify() const
{
    std::stringstream stream;

    stream << "0x" << std::hex << this;
    return (stream.str());
}