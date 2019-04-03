#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{

    public: 

        Array<T>(void) : _element(NULL), _size(0)
        {
            return;
        }

        Array<T>(unsigned int n): _element(new T[n]), _size(n)
        {
            for (unsigned int i = 0; i < this->_size; i++)
                this->_element[i] = static_cast<T>(0);
            return;
        }

        Array<T>(Array<T> const & src)
        {
            unsigned int sizeOther = src.size();
            for (unsigned int i = 0; i < this->_size && i < sizeOther; i++)
                this->_element[i] = src[i];
            return (*this);
        }

        ~Array<T>(void)
        {
            delete [] this->_element;
            return;
        }

        Array<T> &		        operator=(Array<T> const & rhs)
        {
            if (&rhs != this)
            {
                unsigned int sizeOther = rhs.size();
                for (unsigned int i = 0; i < this->_size && i < sizeOther; i++)
                    this->_element[i] = rhs[i];
                return *this;
            }
            return *this;
        }

        T &		            operator[](unsigned int n) const
        {
            if (n >= this->_size)
                throw std::exception();
            return this->_element[n];
        }

        unsigned int        size() const
        {
            return (this->_size);
        }

        std::string const	toString(void) const
        {
            std::string ret;
            for (unsigned int i = 0; i < this->_size; i++)
                ret += "arr["+ std::to_string(i) +"] = " + std::to_string(this->_element[i]) + "\n";
            return (ret);
        }


    private:
        T*                  _element;
        unsigned int        _size;

};

template <typename T>
std::ostream &	operator<< (std::ostream & o, Array<T> const & rhs)
{
     o << rhs.toString();
    return o;
}

#endif