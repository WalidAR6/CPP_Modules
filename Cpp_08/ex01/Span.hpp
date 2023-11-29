/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:40:52 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/29 23:24:40 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <iterator>
# include <vector>

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
        void addNumbers(T begin, T end)
        {
            size_t size = std::distance(begin, end);
            if (vec.size() + size > (size_t)num)
                throw std::runtime_error("THERE ARE ALREADY N ELEMENTS STORED!!!");
            while (begin != end)
            {
                addNumber(*begin);
                begin++;
            }
        }
};


#endif