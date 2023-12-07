/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 01:09:45 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/07 19:42:00 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_H
# define MUTANSTACK_H

#include <deque>
#include <functional>
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;
        typedef typename std::deque<T>::reverse_iterator reverse_iterator;
        typedef typename std::deque<T>::const_iterator const_iterator;
        typedef typename std::deque<T>::const_reverse_iterator const_reverse_iterator;

        MutantStack() {}
        MutantStack(const MutantStack & obj)
        {
            *this = obj;
        }
        MutantStack &operator=(const MutantStack & obj)
        {
            (void)obj;
            return *this;
        }
        ~MutantStack() {}
        
        iterator begin()
        {
            return this->c.begin();
        }

        iterator end()
        {
            return this->c.end();
        }

        reverse_iterator rbegin() const
        {
            return this->c.rbegin();
        }

        reverse_iterator rend()
        {
            return this->c.rend();
        }

        const_iterator cbegin() const
        {
            return this->c.cbegin();
        }

        const_iterator cend() const
        {
            return this->c.cend();
        }

        const_reverse_iterator crbegin() const
        {
            return this->c.crbegin();
        }

        const_reverse_iterator crend() const
        {
            return this->c.crend();
        }
};

#endif