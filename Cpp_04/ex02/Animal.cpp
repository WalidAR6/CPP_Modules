/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:21:59 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 15:53:58 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AnimalA::AnimalA()
{
	std::cout << "AnimalA default constructor called" << std::endl;
}

AnimalA::AnimalA(std::string type):type(type)
{
	std::cout << "AnimalA " << type << " parameterized constuctor called" << std::endl;
}

AnimalA::AnimalA(const AnimalA & obj)
{
	*this = obj;
}

AnimalA & AnimalA::operator=(const AnimalA & obj)
{
	if (this != &obj)
	{
		this->type = obj.type;
	}
	return (*this);
}

std::string AnimalA::getType() const
{
	return (type);
}

AnimalA::~AnimalA()
{
	std::cout << "AnimalA destructor called" << std::endl;
}
