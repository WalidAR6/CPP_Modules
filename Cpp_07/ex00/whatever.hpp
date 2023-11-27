/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:53:00 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/27 14:10:34 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template <typename T>
void swap(T &x, T &y)
{
    T swap = x;
    x = y;
    y = swap;
}

template<typename T>
T min(const T &x, const T &y)
{
    if (x < y)
        return (x);
    return (y);
}

template<typename T>
T max(const T &x, const T &y)
{
    if (x > y)
        return (x);
    return (y);
}

#endif