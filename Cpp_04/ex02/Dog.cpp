/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:13:08 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 19:59:29 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout << "Dog default constuctor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog & obj)
{
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
	std::cout << "Dog Destructor called" << std::endl;
	delete brain;
}