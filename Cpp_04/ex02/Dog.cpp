/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:13:08 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 16:58:43 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog: Default constuctor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog & obj)
{
	std::cout << "Dog: Copy constuctor called" << std::endl;
	this->brain = NULL;
	*this = obj;
}

Dog & Dog::operator=(const Dog & obj)
{
	if (this == &obj)
		return (*this);

	delete this->brain;
	this->brain = new Brain(*obj.brain);
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
	delete brain;
}