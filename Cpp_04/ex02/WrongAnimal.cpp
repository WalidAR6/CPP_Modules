/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:15:02 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 11:21:04 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal: Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
	std::cout << "WrongAnimal " << type << " parameterized constuctor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & obj)
{
	std::cout << "WrongAnimal: Copy constructor called" << std::endl;
	*this = obj;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & obj)
{
	if (this == &obj)
		return (*this);

	this->type = obj.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "???" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destructor called" << std::endl;
}