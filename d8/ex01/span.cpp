#include "span.hpp"
#include <iostream>

Span::Span(void) : _size(1), _array()
{
    return;
}

Span::Span(unsigned int n) : _size(n), _array()
{
    return;
}

Span::Span(Span const & src) 
{
    *this = src;
    return;
}

Span::~Span(void)
{
    return;
}

Span &	            Span::operator=(Span const & rhs)
{
    if (this != &rhs)
    {
        this->_size = rhs._size;
        this->_array = rhs._array;
    }
    return (*this);
}

int                 Span::shortestSpan()
{
    if (this->_array.size() <= 1)
        throw std::exception();
    std::vector<int>    cp;
    int                 min;

    cp = this->_array;
    std::sort(cp.begin(), cp.end());
    min = static_cast<int>(abs(cp[1] - cp[0]));
    for (unsigned int i = 1; i + 1 < this->_array.size(); i++)
        if (min > static_cast<int>(abs(cp[i + 1] - cp[i])))
            min = static_cast<int>(abs(cp[i + 1] - cp[i]));
    return (min);
}

int                 Span::longestSpan()
{
    if (this->_array.size() <= 1)
        throw std::exception();

    std::vector<int>::iterator min = std::min_element(this->_array.begin(), this->_array.end());
    std::vector<int>::iterator max = std::max_element(this->_array.begin(), this->_array.end());

    return (abs(*max - *min));
}

std::string const   Span::toString(void) const
{
    std::string     ret;

    for (unsigned int i = 0; i < this->_size; i++)
        ret += "[" + std::to_string(i) + "]" + " = " + std::to_string(this->_array[i]) + "\n";
    return (ret);
}

void                Span::addNumber(int n)
{
    if (this->_array.size() >= this->_size)
        throw std::exception();
    this->_array.push_back(n);
}

int                 Span::operator[](unsigned int n) const
{
    if (n >= this->_array.size())
        throw std::exception();
    return (this->_array[n]);
}

std::ostream &	    operator<< (std::ostream & o, Span const & rhs)
{
    o << rhs.toString();
    return o;
}