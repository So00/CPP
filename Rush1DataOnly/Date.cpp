#include "Date.hpp"

Date::Date(void)
{
    return;
}

Date::Date(Date const & src)
{
    *this = src;
    return;
}

Date::~Date(void)
{
    return;
}

Date &	            Date::operator=(Date const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void                Date::createData()
{
    /* Date */
    std::chrono::time_point<std::chrono::system_clock>  act;
    act = std::chrono::system_clock::now();
    std::time_t date = std::chrono::system_clock::to_time_t(act);
    int elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(act-this->_start).count();
    this->_map["Date"]._data["Timestamp"] = std::to_string(std::chrono::system_clock::to_time_t(act)) + "s";
    std::string tmp = std::ctime(&date);
    this->_map["Date"]._data["Date"] = tmp.erase(tmp.length() - 1);
    this->_map["Date"]._data["Time spent here, get a life"] = std::to_string(elapsed_seconds) + "s";
    std::string ret = exec("sysctl kern.boottime");
    ret = ret.substr(ret.find("}") + 2, std::string::npos);
    ret = ret.erase(ret.length() - 1);
    this->_map["Date"]._data["Last boot date"] = ret;
}
