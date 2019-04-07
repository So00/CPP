#include "Model.hpp"

Model::Model(void)
{
    return;
}

Model::Model(Model const & src) 
{
    *this = src;
    return;
}

Model::~Model(void)
{
    return;
}

Model &	            Model::operator=(Model const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

void                Model::createData()
{
    this->_map["Model"]._data["Model"] = get_list_systcl("hw.model");
}
