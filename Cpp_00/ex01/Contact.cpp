/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 23:31:54 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/10 20:16:42 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact()
{
	set_f_name("");
	set_l_name("");
	set_n_name("");
	set_d_sec("");
	set_p_number("");
}

Contact::~Contact()
{
}

void Contact::set_id(int id)
{
	_id = id;
}

void Contact::set_f_name(std::string f_name)
{
	_first_name = f_name;
}
void Contact::set_l_name(std::string l_name)
{
	_last_name = l_name;
}

void Contact::set_n_name(std::string n_name)
{
	_nickname = n_name;
}

void Contact::set_d_sec(std::string d_sec)
{
	_darkest_sec = d_sec;
}

void Contact::set_p_number(std::string p_num)
{
	_phone_number = p_num;
}

int 		Contact::get_id() const
{
	return (_id);
}

std::string Contact::get_f_name() const
{
	return (_first_name);
}

std::string Contact::get_l_name() const
{
	return (_last_name);
}

std::string Contact::get_n_name() const
{
	return (_nickname);
}

std::string Contact::get_d_sec() const
{
	return (_darkest_sec);
}

std::string Contact::get_p_number() const
{
	return (_phone_number);
}
