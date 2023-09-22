/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:07:06 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/22 15:59:43 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout << "Cat: Default constructor called" << std::endl;
}

Cat::Cat(const Cat & obj)
{
	std::cout << "Cat: Copy constructor called" << std::endl;
	*this = obj;
}

Cat & Cat::operator=(const Cat & obj)
{
	if (this == &obj)
		return (*this);

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
}