/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 00:31:46 by waraissi          #+#    #+#             */
/*   Updated: 2023/12/15 01:08:37 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        return (std::cerr << "Error" << std::endl, 0);
    int res = reverseNotation(av[1]);
    std::cout << res << std::endl;
}