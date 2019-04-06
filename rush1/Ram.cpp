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
    std::string split = exec("top -l 1 | grep PhysMem:");
    std::string totalram = split.substr(split.find(":") + 2, split.find('u') - split.find(":") - 4);
    this->setData("totalram", totalram);
    split = split.substr(split.find("(") + 1);
    std::string wireram = split.substr(0, split.find("M"));
    this->setData("wireram", wireram);
    split = split.substr(split.find(",") + 2);
    std::string unusedram = split.substr(0, split.find("M"));
    this->setData("unusedram", unusedram);
}
