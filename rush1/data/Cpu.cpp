#include "Cpu.hpp"

Cpu::Cpu(void)
{
    return;
}

Cpu::Cpu(Cpu const & src) 
{
    *this = src;
    return;
}

Cpu::~Cpu(void)
{
    return;
}

Cpu &	            Cpu::operator=(Cpu const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void                Cpu::createData()
{
    std::string split(this->_top.c_str());
    split = split.erase(0, split.find("CPU usage"));
    split.erase(split.find("\n"), std::string::npos);
    this->_map["Cpu"]._data["Cpu"] = get_list_systcl("machdep.cpu.brand_string");
    std::string tmp = exec("sysctl kern.maxproc");
    this->_map["Cpu"]._data["Max Proc"] = tmp.erase(tmp.length() - 1);
    std::string user = split.substr(split.find(":") + 2, split.find('%') - 2 - (split.find(':')));
    this->_map["Cpu"]._data["Cpu used by user"] = user;
    split = split.substr(split.find(",") + 2);
    std::string sys = split.substr(0, split.find('%'));
    this->_map["Cpu"]._data["Cpu used by system"] = sys;
}
