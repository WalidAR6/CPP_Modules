/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 23:14:44 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/23 16:41:55 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac != 2)
            throw std::runtime_error("Error: could not open file.");
        DataWrapper data(av[1]);
        Date date;
        data.inputHandler(date);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}