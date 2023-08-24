/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:23:08 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/24 23:39:52 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::n = 8;

Fixed::Fixed()
{
    std::cout << "Default constractor called" << std::endl;
}

Fixed::Fixed(const int raw)
{
    std::cout << "Int constractor called" << std::endl;
    this->raw = raw * (1 << n);
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constractor called" << std::endl;
    this->raw = round(raw * (1 << n));
}

Fixed::Fixed(const Fixed & copy)
{
    std::cout << "Copy constractor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed & copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->raw = copy.getRawBits();
    return (*this);
}

void Fixed::setRawBits(int raw)
{
	this->raw = raw;
}

int Fixed::getRawBits() const
{
	return (this->raw);
}

float Fixed::toFloat() const
{
    return ((float)raw / (1 << n));
}

int Fixed::toInt() const
{
    return ((int)raw >> 8);
}

std::ostream & operator<<(std::ostream & i, const Fixed & obj)
{
    i << obj.toFloat();
    return (i);
}

Fixed::~Fixed()
{
    std::cout << "Destractor called" << std::endl;
}
