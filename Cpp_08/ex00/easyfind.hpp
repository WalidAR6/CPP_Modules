/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:15:18 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/27 23:22:23 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_H
# define EASY_FIND_H

# include <iostream>

template<typename T>
void easyfind(T container, int num)
{
    for (typename T::iterator idx = container.begin(); idx != container.end(); idx++)
    {
        if (*idx == num)
        {
            std::cout << "Found it, the value is: " << *idx << std::endl;
            return ;
        }
    }
    std::cout << "Element not found" << std::endl;
}

#endif