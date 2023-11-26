/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:09:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/26 21:33:27 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

# include <iostream>

template <typename T, typename F>
void iter(T *arr, size_t arraySize, F func)
{
    if (!arr)
        return ;
    for (size_t idx = 0; idx < arraySize; idx++)
    {
        func(arr[idx]);
    }
}
//TEST TEMPLATES
template<typename T>
void uppper(T &str)
{
  for(size_t idx = 0; idx < strlen(str);idx++)
  {
    std::cout << (char)toupper(str[idx]);
  }
  std::cout << std::endl;
}

template<typename T>
void incVal(T val)
{
  val++;
}

template <typename T>
void showIncValues(T val)
{
  std::cout << val << std::endl;
}

#endif