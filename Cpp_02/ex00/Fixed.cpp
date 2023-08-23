/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 01:30:06 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/22 02:10:51 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::n = 8;

Fixed::Fixed(): raw(0)
{
	std::cout << "Default constractor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constractor called" << std::endl;
	*this = obj;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignement operator called" << std::endl;
	this->raw = obj.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destractor called" << std::endl;
}

void Fixed::setRawBits(int raw)
{
	this->raw = raw;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->raw);
}
