/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:10:25 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/14 13:26:35 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include  "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wea): name(name) ,weapon(wea) {}

HumanA::~HumanA(){}

void HumanA::set_name(std::string name)
{
	this->name = name;
}

std::string HumanA::get_name() const
{
	return (name);
}

void HumanA::attack()
{
	std::cout << get_name() << " attacks with their " << weapon.getType() << std::endl;
}
