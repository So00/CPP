#include <iostream>
#include <fstream>
#include "IInsttruction.hpp"
#include "Mind.hpp"


int main(int ac, char** av)
{    
    if (ac == 2)
    {
        std::ifstream   file(av[1], std::ios::in);

        if (file)
        {
            std::string line;
            std::string allFile;
            while (getline(file, line))
                allFile += line;
            Mind    mind = Mind(allFile);
            mind.doStuff();
            file.close();
        }
        else
            std::cout << "Error while opening" << std::endl;
    }
    else
    {
        std::cout << "Usage : " << av[0] << " yourfile" << std::endl;
    }
    
    return (0);
}
