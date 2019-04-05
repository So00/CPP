/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 09:17:16 by atourner          #+#    #+#             */
/*   Updated: 2019/04/04 16:28:55 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

        Array<T>(Array<T> const & src) : _element(new T[src.size()]), _size(src.size())
        {
            for (unsigned int i = 0; i < this->_size; i++)
                this->_element[i] = src[i];
            return;
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
                delete [] this->_element;
                this->_element = new T[rhs.size()];
                this->_size = rhs.size();
                for (unsigned int i = 0; i < this->_size; i++)
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

/* STRING */
template <>
class Array <std::string>
{

    public: 

        Array<std::string>(void) : _element(NULL), _size(0)
        {
            return;
        }

        Array<std::string>(unsigned int n): _element(new std::string[n]), _size(n)
        {
            for (unsigned int i = 0; i < this->_size; i++)
                this->_element[i] = "";
            return;
        }

        Array<std::string>(Array<std::string> const & src) : _element(new std::string[src.size()]), _size(src.size())
        {
            for (unsigned int i = 0; i < this->_size; i++)
                this->_element[i] = src[i];
            return;
        }

        ~Array<std::string>(void)
        {
            delete [] this->_element;
            return;
        }

        Array<std::string> &		        operator=(Array<std::string> const & rhs)
        {
            if (&rhs != this)
            {
                delete [] this->_element;
                this->_element = new std::string[rhs.size()];
                this->_size = rhs.size();
                for (unsigned int i = 0; i < this->_size; i++)
                    this->_element[i] = rhs[i];
                return *this;
            }
            return *this;
        }

        std::string &		            operator[](unsigned int n) const
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
                ret += "arr["+ std::to_string(i) +"] = " + this->_element[i] + "\n";
            return (ret);
        }


    private:
        std::string*        _element;
        unsigned int        _size;

};

std::ostream &	operator<< (std::ostream & o, Array<std::string> const & rhs)
{
     o << rhs.toString();
    return o;
}

#endif