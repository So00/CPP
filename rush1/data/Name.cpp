#include "Name.hpp"

Name::Name(void)
{
    return;
}

Name::Name(Name const & src) 
{
    *this = src;
    return;
}

Name::~Name(void)
{
    return;
}

Name &	            Name::operator=(Name const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void                Name::createData()
{
    this->_map["Name"]._data["Hostname"] = get_list_systcl("kern.hostname");
    char username[31];
    getlogin_r(username, 31);
    this->_map["Name"]._data["Username"] = username;
}
