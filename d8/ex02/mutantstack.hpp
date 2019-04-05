/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:57:46 by atourner          #+#    #+#             */
/*   Updated: 2019/04/05 11:19:10 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class Mutantstack : public std::stack<T>
{

    public:
        class Iterator{

            public:

                ~Iterator()
                {
                    return;
                }
                T*      getPtr()
                {
                    return (this->_ptr);
                }
                void    setPtr(T* ptr)
                {
                    this->_ptr = ptr;
                }
                Iterator(T* ptr)
                {
                    this->_ptr = ptr;
                }
                Iterator()
                {
                    return;
                }
                Iterator&   operator=(Iterator const & src)
                {
                    this->_ptr = src._ptr;
                    return (*this);
                }
                Iterator(Iterator const & src)
                {
                    *this = src;
                    return;
                }

                T       operator*()
                {
                    return (*this->_ptr);
                }

                void      operator++(int post)
                {
                    (void)post;
                    this->_ptr++;
                }

                void      operator--(int post)
                {
                    (void)post;
                    this->_ptr--;
                }

                bool        operator!=(Iterator toTest)
                {
                    if (&(*this->getPtr()) != &(*toTest.getPtr()))
                        return (true);
                    return (false);
                }

            private:
                T*      _ptr;

        };

        Mutantstack<T>(void)
        {
            this->_first.setPtr(NULL);
            this->_last.setPtr(NULL);
            return;
        }

        void        push(T obj)
        {
            std::stack<T>::push(obj);
            if (this->_first.getPtr() == NULL)
                this->_first.setPtr(&(this->top()));
            this->_last.setPtr(&(this->top()));
        }

        void        pop()
        {
            if (this->_first.getPtr() != this->_last.getPtr())
            {
                std::stack<T>::pop();
                this->_first.setPtr(&(this->top()));
            }
        }

        ~Mutantstack<T>(void)
        {
            return;
        }


        std::string const	toString(void) const
        {
            return ("");
        }

        Iterator            begin()
        {
            return (this->_first.getPtr());
        }

        Iterator            end()
        {
            return (this->_last.getPtr());
        }

    protected:
        Iterator       _first;
        Iterator       _last;

        Mutantstack<T>(Mutantstack const & src)
        {
            *this = src;
            return;
        }

        Mutantstack<T> &		operator=(Mutantstack<T> const & rhs)
        {
            (void)rhs;
            return *this;
        }
};

#endif