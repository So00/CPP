#include "Controller.hpp"
#include <iostream>

Controller::Controller(void)
{
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
    Model::createData();
    Cpu::createData();
    Ram::createData();
}
