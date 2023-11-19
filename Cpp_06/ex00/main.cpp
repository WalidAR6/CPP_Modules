/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 09:38:47 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/16 13:11:59 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"
#include <cstddef>
#include <string>

int main(int ac, char **av)
{
    (void)av;
    if (ac != 2)
    {
        std::cout << "Two arguments required" << std::endl;
        return (1);
    }
    // int i = 0;
    // float d = static_cast<float>(i);
    // std::cout << d << std::endl;
    // std::cout << "'" << std::stod(av[1], NULL) << "'" << std::endl;
    ScalarConverter::convert(av[1]);
}