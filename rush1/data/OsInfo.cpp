#include "OsInfo.hpp"

OsInfo::OsInfo(void)
{
    return;
}

OsInfo::OsInfo(OsInfo const & src) 
{
    *this = src;
    return;
}

OsInfo::~OsInfo(void)
{
    return;
}

OsInfo &	            OsInfo::operator=(OsInfo const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void                OsInfo::createData()
{
    /* OsInfo */
    struct utsname      *os = new struct utsname;
    uname(os);
    this->_map["Os"]._data["System Name"] = os->sysname;
    this->_map["Os"]._data["Node Name"] = os->nodename;
    this->_map["Os"]._data["Release"] = os->release;
    std::string version = os->version;
    this->_map["Os"]._data["Version"] = version.substr(0, version.find(":"));
    this->_map["Os"]._data["machine"] = os->machine;
}
