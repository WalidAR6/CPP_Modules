/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutanStack.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 01:09:45 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/30 18:55:16 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANSTACK_H
# define MUTANSTACK_H

# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
    public:
        typedef typename std::deque<T>::iterator iterator;
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
};

#endif