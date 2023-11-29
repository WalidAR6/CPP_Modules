/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:15:18 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/29 17:23:23 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASY_FIND_H
# define EASY_FIND_H

# include <iostream>

template<typename T>
void easyfind(T container, int num)
{
    typename T::iterator it;
    it = std::find(container.begin(), container.end(), num);
    if (it != container.end())
        std::cout << "Found it, element is: " << *it << std::endl;
    else
        std::cout << "Element not found" << std::endl;
}

#endif