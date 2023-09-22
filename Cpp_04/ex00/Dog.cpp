/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:13:08 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 16:00:13 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog: Default constructor called" << std::endl;
}

Dog::Dog(const Dog & obj)
{
	std::cout << "Dog: Copy constructor called" << std::endl;
	*this = obj;
}

Dog & Dog::operator=(const Dog & obj)
{
	if (this == &obj)
		return (*this);

	this->type = obj.getType();
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "bark" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog: Destructor called" << std::endl;
}