#include "Ram.hpp"

Ram::Ram(void)
{
    return;
}

Ram::Ram(Ram const & src) 
{
    *this = src;
    return;
}

Ram::~Ram(void)
{
    return;
}

Ram &	            Ram::operator=(Ram const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void                Ram::createData()
{
    /* RAM */
    std::string split (this->_top.c_str());
    split = split.erase(0, split.find("PhysMem"));
    split.erase(split.find("\n"), std::string::npos);
    std::string totalram = split.substr(split.find(":") + 2, split.find('u') - split.find(":") - 4);
    this->_map["Ram"]._data["Total ram"] = totalram;
    split = split.substr(split.find("(") + 1);
    std::string wireram = split.substr(0, split.find("M"));
    this->_map["Ram"]._data["Wire ram"] = wireram;
    split = split.substr(split.find(",") + 2);
    std::string unusedram = split.substr(0, split.find("M"));
    this->_map["Ram"]._data["Unused Ram"] = wireram;
}
