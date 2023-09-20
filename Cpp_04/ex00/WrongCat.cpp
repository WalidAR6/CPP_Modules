/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 11:15:14 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/20 20:08:11 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout << "WrongCat default constuctor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat & obj)
{
	*this = obj;
}

WrongCat & WrongCat::operator=(const WrongCat & obj)
{
	if (this == &obj)
		return (*this);

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