/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:07:06 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 19:38:02 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat: Default constuctor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat & obj)
{
	std::cout << "Cat: Copy constuctor called" << std::endl;
	this->brain = NULL;
	*this = obj;
}

Cat & Cat::operator=(const Cat & obj)
{
	if (this == &obj)
		return (*this);

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
	std::cout << "Cat: Destructor called" << std::endl;
	delete brain;
}