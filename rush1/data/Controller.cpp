#include "Controller.hpp"
#include <iostream>

Controller::Controller(void)
{
    this->_keys.push_back("Ram");
    this->_keys.push_back("Model");
    this->_keys.push_back("Cpu");
    this->_keys.push_back("Name");
    this->_keys.push_back("Os");
    this->_keys.push_back("Date");
    this->_keys.push_back("Processes");
    this->_keys.push_back("Network");
    t_data      data;
    data.display = true;
    this->setData("Ram", data);
    this->setData("Model", data);
    this->setData("Cpu", data);
    this->setData("Name", data);
    this->setData("Os", data);
    this->setData("Date", data);
    this->setData("Processes", data);
    this->setData("Network", data);
    this->_start = std::chrono::system_clock::now();
    return;
}

Controller::Controller(Controller const & src)
{
    *this = src;
    return;
}

Controller::~Controller(void)
{
    return;
}

Controller &	Controller::operator=(Controller const & rhs)
{
    static_cast<void>(rhs);
    return *this;
}

void            Controller::update()
{
    this->_top = exec("top -l 1");
    Model::createData();
    Cpu::createData();
    Ram::createData();
    Name::createData();
    OsInfo::createData();
    Date::createData();
    Processus::createData();
    Network::createData();
}
