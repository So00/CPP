#include "BasicModule.hpp"
#include <iostream>

BasicModule::BasicModule(void)
{
    return;
}

BasicModule::BasicModule(BasicModule const & src) 
{
    *this = src;
    return;
}

BasicModule::~BasicModule(void)
{
    return;
}

BasicModule &	BasicModule::operator=(BasicModule const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

t_data     BasicModule::getData(std::string key)
{
    return (this->_map[key]);
}

void                        BasicModule::taggleBoolean(std::string name)
{
    if (this->_map[name].display)
        this->_map[name].display = false;
    else
        this->_map[name].display = true;
}

std::vector<std::string>    BasicModule::getKeys()
{
    return (this->_keys);
}

void            BasicModule::setData(std::string key, t_data data)
{
    this->_map[key] = data;
}

std::string     BasicModule::get_list_systcl(std::string actSearch)
{
    size_t      size;
    sysctlbyname(actSearch.c_str(), NULL, &size, NULL, 0);
    char        getInfo[size];
    sysctlbyname(actSearch.c_str(), getInfo, &size, NULL, 0);
    std::string ret = getInfo;
    return (ret);
}

std::string     BasicModule::exec(const char* cmd)
{
    char buffer[128];
    std::string result = "";
    FILE* pipe = popen(cmd, "r");
    if (!pipe)
        throw std::runtime_error("popen failed!");
    try
    {
        while (fgets(buffer, 128, pipe) != NULL)
        {
            result += buffer;
        }
    }
    catch (std::exception & e)
    {
        pclose(pipe);
        throw std::runtime_error("Gets buffer failed");
    }
    pclose(pipe);
    return result;
}
