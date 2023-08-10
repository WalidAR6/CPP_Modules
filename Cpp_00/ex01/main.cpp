/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:10:34 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/10 18:09:15 by waraissi         ###   ########.fr       */
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
		if (line == "Exit")
			p_b.exit();
		else if (line == "Add")
		{
			p_b.add(i);
			i++;
		}
		else if (line == "Search")
			p_b.search();
		else
			std::cout << "Invalid option" << std::endl;
	}
	
	return (0);
}
