/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:23:08 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/23 19:47:06 by waraissi         ###   ########.fr       */
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
    
}

Fixed::Fixed(const float raw)
{
    std::cout << "Float constractor called" << std::endl;
    
}

Fixed::Fixed(const Fixed & copy)
{
    std::cout << "Copy constractor called" << std::endl;
    
}

Fixed &Fixed::operator=(const Fixed & copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    
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

}

int Fixed::toInt() const
{

}

std::ostream & operator<<(std::ostream & i, const Fixed & obj)
{
    
}

Fixed::~Fixed()
{
    std::cout << "Destractor called" << std::endl;
}
