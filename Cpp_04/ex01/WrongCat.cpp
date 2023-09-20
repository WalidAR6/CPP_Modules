/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:15:14 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 20:01:05 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Brain.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constuctor called" << std::endl;
	this->brain = new Brain();
}

WrongCat::WrongCat(const WrongCat & obj)
{
	this->brain = new Brain(*obj.brain);
}

WrongCat & WrongCat::operator=(const WrongCat & obj)
{
	if (this == &obj)
		return (*this);

	delete brain;
	this->brain = new Brain(*obj.brain);
	this->type = obj.getType();
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "Meow" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor called" << std::endl;
}