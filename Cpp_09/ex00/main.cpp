/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:44 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/10 14:10:58 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"
#include <exception>
#include <stdexcept>

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw std::runtime_error("Error: could not open file.");
        DataWrapper data(av[1]);
        data.inputHandler();
        // data.printMap();
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}