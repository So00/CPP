/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atourner <atourner@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/29 14:57:09 by atourner          #+#    #+#             */
/*   Updated: 2019/03/29 20:25:51 by atourner         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void)
: _start(new t_marines)
{
    this->_start->marine = NULL;
    this->_start->next = NULL;
    return;
}

Squad::Squad(Squad const & src) 
{
    *this = src;
    return;
}

Squad::~Squad(void)
{
    t_marines       *act;
    t_marines       *next;

    act = this->_start;
    next = act->next;
    while (act != NULL)
    {
        delete act->marine;
        delete act;
        act = next;
        if (next != NULL)
            next = next->next;
    }
    return;
}

Squad &	        Squad::operator=(Squad const & rhs)
{
    if (this != &rhs)
    {
        this->_start = rhs._start;
    }
    return (*this);
}

int             Squad::getCount() const
{
    t_marines       *act;
    int             ret;

    act = this->_start;
    ret = 0;
    if (act->marine == NULL)
        return (0);
    if (act->marine && act->next == NULL)
        return (1);
    while (act != NULL)
    {
        act = act->next;
        ret++;
    }
    return (ret);
}

ISpaceMarine*   Squad::getUnit(int want) const
{
    int         act;
    t_marines   *ret;

    act = 0;
    ret = this->_start;
    while (ret->next && want != act)
    {
        ret = ret->next;
        act++;
    }
    return(ret->marine);
}

int             Squad::push(ISpaceMarine *push)
{
    int         ret;
    t_marines   *act;
    t_marines   *prev;

    if (push == NULL)
        return (this->getCount());
    ret = 1;
    if (this->_start->marine == NULL)
    {
        this->_start->marine = push;
        return (ret);
    }
    act = this->_start;
    prev = act;
    while (act)
    {
        if (act->marine == push)
        {
            return (this->getCount());
        }
        prev = act;
        act = act->next;
        ret++;
    }
    t_marines   *add = new t_marines;
    add->marine = push;
    add->next = NULL;
    prev->next = add;
    return(ret);
}