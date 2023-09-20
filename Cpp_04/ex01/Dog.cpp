/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:13:08 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 02:46:25 by waraissi         ###   ########.fr       */
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
	this->brain = new Brain(*obj.brain);
}

Dog & Dog::operator=(const Dog & obj)
{
	if (this->brain)
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