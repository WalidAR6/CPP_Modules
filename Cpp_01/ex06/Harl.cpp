/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 14:12:26 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/17 21:41:17 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do!" << std::endl;
}

void Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int get_lvl_index(std::string *arr, std::string level)
{
	for (int i = 1; i <= 4; i++)
	{
		if (arr[i - 1] == level)
			return (i);
	}
	return (-1);
}
void Harl::complain(std::string level)
{
	void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = get_lvl_index(arr, level);
	switch (i)
	{
		case 1:
			std::cout << "[ " << arr[0] << " ]" << std::endl;
			(this->*func[0])();
			std::cout << "" << std::endl;
		case 2:
			std::cout << "[ " << arr[1] << " ]" << std::endl;
			(this->*func[1])();
			std::cout << "" << std::endl;
		case 3:
			std::cout << "[ " << arr[2] << " ]" << std::endl;
			(this->*func[2])();
			std::cout << "" << std::endl;
		case 4:
			std::cout << "[ " << arr[3] << " ]" << std::endl;
			(this->*func[3])();
			std::cout << "" << std::endl;
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}		
}
