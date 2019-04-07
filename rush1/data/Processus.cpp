#include "Processus.hpp"

Processus::Processus(void)
{
    return;
}

Processus::Processus(Processus const & src) 
{
    *this = src;
    return;
}

Processus::~Processus(void)
{
    return;
}

Processus &	            Processus::operator=(Processus const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void                Processus::createData()
{
    std::string split(this->_top.c_str());
    split = split.erase(0, split.find("Processes:"));
    split.erase(split.find("\n"), std::string::npos);
    std::string total = split.substr(split.find(":") + 2, split.find("t") - split.find(":") - 3);
    this->_map["Processes"]._data["Total processes"] = total;
    split = split.erase(0, split.find(",") + 2);
    std::string running = split.substr(0, split.find("r") - 1);
    this->_map["Processes"]._data["Processes running"] = running;
    split = split.erase(0, split.find(",") + 2);
    std::string sleeping = split.substr(0, split.find("s") - 1);
    this->_map["Processes"]._data["Processes sleeping"] = sleeping;
    split = split.erase(0, split.find(",") + 2);
    std::string threads = split.substr(0, split.find("t") - 1);
    this->_map["Processes"]._data["Threads"] = threads;
}
