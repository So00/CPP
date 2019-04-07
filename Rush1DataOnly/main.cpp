#include <iostream>
#include "Controller.hpp"

int main()
{
    Controller control;

    control.update();
    std::vector<std::string> vec = control.getKeys();
    std::vector<std::string>::iterator it = vec.begin();

    while (it != vec.end())
    {
        std::cout << "Module " << *it << std::endl;
        t_data data = control.getData(*it);
        std::cout << "Display ? " << data.display << std::endl;
        std::map<std::string, std::string>::iterator itD = data._data.begin();
        while (itD != data._data.end())
        {
            std::cout << itD->first << " => " << itD->second << std::endl;
            itD++;
        }
        it++;
    }
    return (0);
}
