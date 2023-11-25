/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:09:05 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/26 00:39:53 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
  {
    const char *arr[] = {"hello", "world"};  
    iter(arr, 2, uppper<const char *>);
  }
  {
    int intArr[] = {1, 2, 3, 4, 5};
    iter(intArr, 5, incVal<int &>);
    iter(intArr, 5, showIncValues<int>);
  }
}