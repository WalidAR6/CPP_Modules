/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:10:37 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/12 21:39:33 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string const &type)
{
	this->type = type;
}

Weapon::~Weapon(){}

std::string	*Weapon::get_type()
{
	return (&type);
}

std::string const & Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
