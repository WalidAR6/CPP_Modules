/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:38:47 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/15 21:34:41 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"
#include <cstddef>

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << "Two arguments required" << std::endl;
        return (1);
    }
    
    std::cout << "'" << av[1] << "'" << std::endl;
    ScalarConverter::convert(av[1]);
}