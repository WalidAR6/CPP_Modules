/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:10:20 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/14 14:22:40 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name)
{
	this->weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::set_name(std::string name)
{
	this->name = name;
}

std::string HumanB::get_name() const
{
	return (name);
}

void HumanB::setWeapon(Weapon& wea)
{
	this->weapon = &wea;
}

void HumanB::attack()
{
	if (weapon)
		std::cout << get_name() << " attacks with their " << *(weapon->get_type()) << std::endl;
}