#include "Convert.hpp"

Convert::Convert(void)
{
    return;
}

Convert::Convert(char c)
{
    if (std::isprint(c))
        std::cout << "'" << c << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;    
}

Convert::Convert(int i)
{
    std::cout << i << std::endl;
}

Convert::Convert(float f)
{
    if (f == static_cast<float>(static_cast<int>(f)))
        std::cout << f << ".0";
    else
        std::cout << f;
}

Convert::Convert(double d)
{
    if (d == static_cast<double>(static_cast<int>(d)))
        std::cout << d << ".0" << std::endl;
    else
        std::cout << d << std::endl;
}


Convert::Convert(Convert const & src) 
{
    *this = src;
    return;
}

Convert::~Convert(void)
{
    return;
}

Convert &	Convert::operator=(Convert const & rhs)
{
    if (&rhs == this)
        return (*this);
    return (*this);
}

std::string const Convert::toString(void) const
{
    return "";
}

std::ostream &	operator<< (std::ostream & o, Convert const & rhs)
{
    o << rhs.toString();
    return o;
}