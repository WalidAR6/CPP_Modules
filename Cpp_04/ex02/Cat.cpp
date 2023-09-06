/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:07:06 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/06 15:54:14 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():AnimalA("Cat")
{
	std::cout << "Cat default constuctor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat & obj)
{
	this->brain = new Brain();
	*this->brain = *obj.brain;
}

Cat & Cat::operator=(const Cat & obj)
{
	delete this->brain;
	this->brain = new Brain(*obj.brain);
	this->type = obj.getType();
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete brain;
}