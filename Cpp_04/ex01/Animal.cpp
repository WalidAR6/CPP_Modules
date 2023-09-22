/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 17:21:59 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 20:01:18 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal")
{
	std::cout << "Animal: Default constructor called" << std::endl;
}

Animal::Animal(std::string type):type(type)
{
	std::cout << "Animal " << type << " parameterized constuctor called" << std::endl;
}

Animal::Animal(const Animal & obj)
{
	std::cout << "Animal: Copy constructor called" << std::endl;
	*this = obj;
}

Animal & Animal::operator=(const Animal & obj)
{
	if (this == &obj)
		return (*this);

	this->type = obj.type;
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "???" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal: Destructor called" << std::endl;
}
