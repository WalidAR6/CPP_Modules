/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:07:06 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/02 22:35:33 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat default constuctor called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat & obj)
{
	*this = obj;
}

Cat & Cat::operator=(const Cat & obj)
{
	if (this != &obj)
	{
		this->type = obj.getType();
	}
	return (*this);
}

void Cat::makeSound()
{
	std::cout << "Meow" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat Destructor called" << std::endl;
	delete this->brain;
}