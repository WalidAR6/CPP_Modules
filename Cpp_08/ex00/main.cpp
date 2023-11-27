/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 20:15:00 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/27 23:23:29 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
#include <array>

int main()
{
    static int i;
    std::array<int, 10> b;
    
    for (std::array<int, 10>::iterator idx = b.begin(); idx != b.end(); idx++)
        *idx = i++;
    easyfind(b, 8);
}