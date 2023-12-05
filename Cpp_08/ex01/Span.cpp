/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 15:40:49 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/05 15:49:18 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int N)
{
    if ((int)N < 0)
        throw std::runtime_error("INVALID RANGE!!!");
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
    std::sort(vec.begin(), vec.end());
    int tmp = 0;
    int res = *(vec.begin() + 1) - *vec.begin();
    size_t i = vec.size();
    for (std::vector<int>::iterator it = vec.end() - 1; i > 1; it--,i--)
    {
        tmp = *it - *(it - 1);
        if (tmp < res)
            res = tmp;
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
