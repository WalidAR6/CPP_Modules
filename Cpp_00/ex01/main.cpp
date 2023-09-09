/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:10:34 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/09 17:16:04 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook	p_b;
	std::string line;
	int			i;

	i = 0;
	std::cout << "POSSIBLE OPTIONS:" << std::endl;
	std::cout << "1." << " ADD  " << "\t" << "or A" << std::endl;
	std::cout << "2." << " SEARCH " << "\t" << "or S" << std::endl;
	std::cout << "3." << " EXIT " << "\t" << "or E" << std::endl;
	while (true)
	{
		std::cout << "> ";
		std::getline(std::cin, line);
		if (std::cin.eof())
		{
			std::fclose(stdin);
			std::cin.clear();
			std::fopen("/dev/tty", "r");
			std::cout << "" << std::endl;
		}
		else if (line == "EXIT" || line == "E")
		{
			p_b.exit();
			return (0);
		}
		else if (line == "ADD" || line == "A")
		{
			p_b.add(&i);
		}
		else if (line == "SEARCH" || line == "S")
			p_b.search();
		else
			std::cout << "INVALID OPTION!!" << std::endl;
	}
	return (0);
}
