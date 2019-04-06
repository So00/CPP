#include "Mind.hpp"

Mind::Mind(void)
{
    return;
}

Mind::Mind(Mind const & src) 
{
    *this = src;
    return;
}

Mind::Mind(std::string mind)
{
    this->_mind = mind;
    this->_position = 0;
    this->_str = " ";
    this->_str[0] -= 32;
}

Mind::~Mind(void)
{
    return;
}

int     Mind::loop(int i, int start)
{
    while (static_cast<size_t>(i) < this->_mind.length())
    {
        if (this->_mind[i] == '{')
            i = this->loop(i + 1, i);
        else if (this->_mind[i] == '}')
        {
            if (this->getValue())
                i = start;
            else
                return (i);
        }
        else
            this->execute(this->_mind[i]);
        i++;
    }
    return (i + 1);
}

void        Mind::doStuff()
{
    size_t i = 0;
    for (; i < this->_mind.length(); i++)
    {
        if (this->_mind[i] != '{')
            this->execute(this->_mind[i]);
        else
        {
            i = this->loop(i + 1, i);
        }
    }
}

void        Mind::execute(char c)
{
    switch(c)
    {
        case 'p' :
            this->add.execute(this->_str, this->_position);
        Case 'm' :
            this->subtract.execute(this->_str, this->_position);
        Case 'n' :
            this->ptrAdd.execute(this->_str, this->_position + 1);
            this->_position += 1;
        Case 'b' :
            this->ptrSubtract.execute(this->_str, this->_position - 1);
            this->_position -= 1;
        Case ';' :
            this->print.execute(this->_str, this->_position);
        Case '!' :
            this->getChar.execute(this->_str, this->_position);
        break;
        default :

        break;
    }
    return;
}

int             Mind::getValue()
{
    return (static_cast<int>(this->_str[this->_position]));
}

std::string     Mind::toString() const
{
    std::string ret;
    for (size_t i = 0; i < this->_str.length(); i++)
        ret += std::to_string(static_cast<int>(this->_str[i])) + "\n";
    ret += " POS : " +  std::to_string(this->_position);
    return (ret);
}

Mind &	Mind::operator=(Mind const & rhs)
{
    static_cast<void>(rhs);
    return (*this);
}

std::ostream &	operator<< (std::ostream & o, Mind const & rhs)
{
    o << rhs.toString();
    return o;
}
