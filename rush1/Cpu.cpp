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
    this->setData("cpu", get_list_systcl("machdep.cpu.brand_string"));
    this->setData("maxproc", exec("sysctl kern.maxproc"));
    std::string split = exec("top -l 1 | grep \"CPU usage:\"");
    std::string user = split.substr(split.find(":") + 2, split.find('%') - 2 - (split.find(':')));
    this->setData("cpuuser", user);
    split = split.substr(split.find(",") + 2);
    std::string sys = split.substr(0, split.find('%'));
    this->setData("cpusys", sys);
    split = split.substr(split.find(",") + 2);
    std::string idle = split.substr(0, split.find('%'));
    this->setData("idle", idle);
}
