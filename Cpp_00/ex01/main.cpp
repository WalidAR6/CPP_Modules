/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:10:34 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/18 17:14:21 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	p_b;
	std::string line;
	int			i;

	i = 0;
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, line);
		if (std::cin.fail())
			return (0);
		if (line == "exit" || line == "e")
		{
			p_b.exit();
			return (0);
		}
		else if (line == "add" || line == "a")
		{
			p_b.add(i);
			i++;
		}
		else if (line == "search" || line == "s")
			p_b.search();
		else
			std::cout << "Invalid option" << std::endl;
	}
	
	return (0);
}
