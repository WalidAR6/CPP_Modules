/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:57:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/18 17:12:54 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	set_contact_id();	
}

PhoneBook::~PhoneBook()
{	
}

void PhoneBook::search()
{
	std::string search;
	std::string id;
	std::stringstream ss;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|        id|    f_name|    l_name|  nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		std::cout << "|" << std::setw(10) << arr[i].get_id() << "|";
		std::cout << std::setw(10) << arr[i].get_f_name() << "|";
		std::cout << std::setw(10) << arr[i].get_l_name() << "|";
		std::cout << std::setw(10) << arr[i].get_n_name() << "|" << std::endl;
		
	}
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "Which contact are you looking for: ";
	std::getline(std::cin, search);
	for (int i = 0; i < 8; i++)
	{
		if (search.empty())
			return ;
		ss << arr[i].get_id();
		ss >> id;
		if (search == id)
		{
			std::cout << "Contact found" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|        id|    f_name|    l_name|  nickname|" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			std::cout << "|" << std::setw(10) << arr[i].get_id() << "|";
			std::cout << std::setw(10) << arr[i].get_f_name() << "|";
			std::cout << std::setw(10) << arr[i].get_l_name() << "|";
			std::cout << std::setw(10) << arr[i].get_n_name() << "|" << std::endl;
			std::cout << "---------------------------------------------" << std::endl;
			return ;
		}
		ss.clear();
	}
	std::cout << "Contact not found" << std::endl;
}

std::string trim_word(std::string word)
{
	if (word.length() > 10)
		return (word.substr(0, 9) + ".");
	return (word);
}

void PhoneBook::add(int i)
{
	std::string val[5];
	std::string arrr[5];

	arrr[0] = "first name: ";
	arrr[1] = "last_name: ";
	arrr[2] = "nickname: ";
	arrr[3] = "darkest_sec: ";
	arrr[4] = "phone_number: ";
	for (int i = 0; i < 5; i++)
	{
		std::cout << arrr[i];
		std::getline(std::cin, val[i]);
		if (val[i].empty())
			return ;
	}
	arr[i % 8].set_f_name(trim_word(val[0]));
	arr[i % 8].set_l_name(trim_word(val[1]));
	arr[i % 8].set_n_name(trim_word(val[2]));
	arr[i % 8].set_d_sec(trim_word(val[3]));
	arr[i % 8].set_p_number(trim_word(val[4]));
}

void PhoneBook::exit()
{
	std::cout << "Exit!" << std::endl;
}

void PhoneBook::set_contact_id()
{
	for (int i = 0; i < 8; i++)
	{
		arr[i].set_id(i);
	}
}