/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:40:49 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/29 23:30:45 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"
#include <algorithm>
#include <iterator>
# include <stdexcept>
#include <sys/_types/_size_t.h>
# include <vector>

Span::Span(){}

Span::Span(unsigned int N)
{
    num = N;
}

Span::Span(const Span & obj)
{
    *this = obj;
}

Span &Span::operator=(const Span & obj)
{
    if (this == &obj)
        return (*this);
    num = obj.num;
    return (*this);
}

Span::~Span(){}

void Span::addNumber(int add)
{
    if (vec.size() + 1 > (size_t)num)
        throw std::runtime_error("THERE ARE ALREADY N ELEMENTS STORED!!!");
    vec.push_back(add);
}

int Span::shortestSpan()
{
    if (vec.size() <= 1)
        throw std::runtime_error("NO SPAN CAN BE FOUND!!!");
    int tmp = 0;
    int res = abs(*vec.begin() - *(vec.begin() + 1));
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
    {
        for (std::vector<int>::iterator it2 = it + 1; it2 != vec.end(); it2++)
        {
            tmp = abs(*it - *it2);
            if (tmp < res)
                res = tmp;
        }
    }
    return (res);
}

int Span::longestSpan()
{
    if (vec.size() <= 1)
        throw std::runtime_error("NO SPAN CAN BE FOUND!!!");
    int res;
    std::sort(vec.begin(), vec.end());
    res = *(vec.end() - 1) - *vec.begin();
    return (res);
}
