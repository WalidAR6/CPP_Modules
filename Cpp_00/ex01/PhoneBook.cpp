/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 16:57:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/11 18:17:55 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	set_contact_id();	
}

PhoneBook::~PhoneBook(){}

std::string trim_word(std::string word)
{
	if (word.length() > 10)
		return (word.substr(0, 9) + ".");
	return (word);
}

bool empty_fields(Contact arr)
{
	if (arr.get_f_name().empty() || arr.get_l_name().empty() || arr.get_n_name().empty()
			|| arr.get_d_sec().empty() || arr.get_d_sec().empty())
		return true;
	return false;
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
		std::cout << std::setw(10) << trim_word(arr[i].get_f_name()) << "|";
		std::cout << std::setw(10) << trim_word(arr[i].get_l_name()) << "|";
		std::cout << std::setw(10) << trim_word(arr[i].get_n_name()) << "|" << std::endl;
	}
	std::cout << "---------------------------------------------" << std::endl;
	
	std::cout << "Which contact are you looking for: ";
	std::getline(std::cin, search);
	if (std::cin.fail())
	{
		eof_handler();
		return ;
	}
	for (int i = 0; i < 8; i++)
	{
		ss << arr[i].get_id();
		ss >> id;
		if (search == id && !empty_fields(arr[i]))
		{
			std::cout << "CONTACT FOUND" << std::endl;
			std::cout << "first_name\t-> " << arr[i].get_f_name() << std::endl;
			std::cout << "last_name\t-> " << arr[i].get_l_name() << std::endl;
			std::cout << "nickname\t-> " << arr[i].get_n_name() << std::endl;
			std::cout << "darkest_sec\t-> " << arr[i].get_d_sec() << std::endl;
			std::cout << "phone_number\t-> " << arr[i].get_p_number() << std::endl;
			return ;
		}
		ss.clear();
	}
	std::cout << "CONTACT NOT FOUND!!" << std::endl;
}

void PhoneBook::add(int *i)
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
		std::cout << "(" << i + 1 << " / 5) " << arrr[i];
		std::getline(std::cin, val[i]);
		if (std::cin.fail())
		{
			eof_handler();
			return ;
		}
		if (val[i].empty())
		{
			std::cout << "YOU ENTERED AN EMPTY FIELD!!" << std::endl;
			return ;
		}
	}

	arr[*i % 8].set_f_name(val[0]);
	arr[*i % 8].set_l_name(val[1]);
	arr[*i % 8].set_n_name(val[2]);
	arr[*i % 8].set_d_sec(val[3]);
	arr[*i % 8].set_p_number(val[4]);
	
	(*i)++;
}

void PhoneBook::exit()
{
	std::cout << "EXIT!" << std::endl;
}

void PhoneBook::set_contact_id()
{
	for (int i = 0; i < 8; i++)
	{
		arr[i].set_id(i);
	}
}

void eof_handler()
{
	if (std::cin.eof())
	{
		std::fclose(stdin);
		std::cin.clear();
		std::fopen("/dev/tty", "r");
		std::cout << std::endl;
	}
}
