#include "Array.hpp"

int main(void)
{
    unsigned int    i = 5;
    unsigned int    higher = 8;

    std::cout << std::endl << "*********************INT***********************" << std::endl << std::endl;
    Array<int>      intArray(i);
    Array<int>      intArrayAgain(higher);

    intArray[0] = 2;
    std::cout << intArray << std::endl;
    try
    {
        std::cout << intArray[8] << "mew" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "You're out of the size of the array" << std::endl;
    }
    
    intArrayAgain = intArray;
    std::cout << intArrayAgain << std::endl;
    intArrayAgain[2] = 5;
    std::cout << intArray << std::endl;
    std::cout << intArrayAgain << std::endl;
    intArray = intArrayAgain;
    intArrayAgain[2] = intArray[0];
    std::cout << intArray << std::endl;
    std::cout << intArrayAgain << std::endl;
    std::cout << "size : " << intArray.size() << std::endl;

    std::cout << std::endl << "*********************FLOAT***********************" << std::endl << std::endl;

    Array<float>      floatArray(i);
    Array<float>      floatArrayAgain(higher);

    floatArray[2] = 21;
    floatArrayAgain[3] = 42;
    floatArray[0] = floatArrayAgain[3];
    std::cout << floatArray << std::endl;
    std::cout << floatArrayAgain << std::endl;

    std::cout << std::endl << "*********************Empty array***********************" << std::endl << std::endl;

    Array<int>     empty;

    std::cout << "Size : " << empty.size() << std::endl;
    try
    {
        std::cout << empty[8] << "mew" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << "You're out of the size of the array" << std::endl;
    }
    

    return (0);
}