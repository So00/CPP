#include "span.hpp"
#include <ctime>

int main()
{
    srand((int)time(0));
    std::cout << "******Ok*******" << std::endl << std::endl;
    try
    {
        Span    test(3);

        test.addNumber(1);
        test.addNumber(8);
        test.addNumber(10);

        std::cout << test[1] << std::endl;
        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "An error has occured" << std::endl;
    }

    std::cout << std::endl << "******Error add*******" << std::endl << std::endl;
    try
    {
        Span    test(2);

        test.addNumber(1);
        test.addNumber(8);
        test.addNumber(10);

        std::cout << test[1] << " " << test.shortestSpan() << " " << test.longestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "An error has occured" << std::endl;
    }

    std::cout << std::endl << "*******Error test shortest******" << std::endl << std::endl;
    try
    {
        Span    test(3);

        std::cout << test.shortestSpan() << std::endl;
        test.addNumber(1);
        test.addNumber(8);
        test.addNumber(10);

        std::cout << test[1] << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "An error has occured" << std::endl;
    }

    std::cout << std::endl << "******Error test longest*******" << std::endl << std::endl;
    try
    {
        Span    test(3);

        test.addNumber(1);
        std::cout << test.longestSpan() << std::endl;
        test.addNumber(8);
        test.addNumber(10);

        std::cout << test[1] << std::endl;
        std::cout << test.shortestSpan() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << "An error has occured" << std::endl;
    }

    std::cout << "Test with 20000 lenght" << std::endl;

    Span        test(20000);
    for (int i = 0; i < 20000; i++)
        test.addNumber(rand());

    std::cout << test.longestSpan() << std::endl;
    std::cout << test.shortestSpan() << std::endl;

    return (0);
}