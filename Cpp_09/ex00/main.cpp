/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:44 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/08 02:09:55 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
#include <exception>

int main(int ac, char **av)
{
    if (ac != 2)
        return 1;
    try
    {
        DataWrapper data(av[1]);
        data.fill_map();
        data.printMap();
    } catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}