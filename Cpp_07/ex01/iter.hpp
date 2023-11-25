/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:09:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/24 19:00:40 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template <typename T, typename F>
void iter(T *arr, size_t arraySize, F func)
{
    for (size_t idx = 0; idx < arraySize; idx++)
    {
        func(arr[idx]);
    }
}

// template <typename T>
// void iter(T *arr, size_t arraySize, void fun(const T &))
// {
//     for (size_t idx = 0; idx < arraySize; idx++)
//     {
//         func(arr[idx]);    
//     }
// }

#endif