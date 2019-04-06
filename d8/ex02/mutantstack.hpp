/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/05 10:57:46 by atourner          #+#    #+#             */
/*   Updated: 2019/04/05 17:55:12 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

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

                T*      operator++(int post)
                {
                    static_cast<void>(post);
                    T* ret = this->_ptr;
                    this->_ptr--;
                    return (ret);
                }

                T*         operator--(int post)
                {
                    static_cast<void>(post);
                    T*ret = this->_ptr;
                    this->_ptr++;
                    return (ret);
                }

                void      operator++(void)
                {
                    this->_ptr--;
                }

                void      operator--(void)
                {
                    this->_ptr++;
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
            this->_first.setPtr(&(this->top()));
            if (this->_last.getPtr() == NULL)
            {
                this->_last.setPtr(&(this->top()));
                std::stack<T>::push(obj);
                this->_first.setPtr(&(this->top()));
            }
        }

        void        pop()
        {
            if (std::stack<T>::size() > 2)
            {
                std::stack<T>::pop();
                this->_first.setPtr(&(this->top()));
            }
            else if (std::stack<T>::size() == 2)
            {
                std::stack<T>::pop();
                std::stack<T>::pop();
                this->_first.setPtr(NULL);
                this->_last.setPtr(NULL);
            }            
        }

        ~Mutantstack<T>(void)
        {
            return;
        }

        int                 size()
        {
            if (std::stack<T>::size() > 1)
                return (std::stack<T>::size() - 1);
            return (0);
        }

        Iterator            begin()
        {
            if (this->size() != 0)
                return (this->_first.getPtr());
            return (NULL);
        }

        Iterator            end()
        {
            if (this->size() != 0)
            {
                return this->_last.getPtr();
            }
            return (NULL);
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
            static_cast<void>(rhs);
            return *this;
        }
};

#endif
