/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:40:52 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/30 18:50:51 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <iterator>
# include <vector>
# include <exception>

class Span
{
    private:
        int num;
        std::vector<int> vec;
    public:
        Span();
        Span(unsigned int N);
        Span(const Span & obj);
        Span &operator=(const Span & obj);
        ~Span();

        void addNumber(int add);
        void printVec();
        int shortestSpan();
        int longestSpan();
        template<typename T>
        void addNumbers(typename T::iterator begin, typename T::iterator end)
        {
            size_t size = std::distance(begin, end);
            if (vec.size() + size > (size_t)num)
                throw std::runtime_error("THERE ARE ALREADY N ELEMENTS STORED!!!");
            vec.insert(vec.end() - 1, begin, end);
        }
};


#endif