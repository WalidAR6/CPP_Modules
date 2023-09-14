/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:10:37 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/14 14:09:19 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon(){};

Weapon::Weapon(std::string const &type)
{
	this->type = type;
}

Weapon::~Weapon(){}

const std::string *Weapon::get_type() const
{
	return (&type);
}

const std::string & Weapon::getType() const
{
	return (type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
