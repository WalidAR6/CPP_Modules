/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:47:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/25 02:26:16 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::n = 8;

Fixed::Fixed():raw(0){}

Fixed::Fixed(const int raw)
{
    this->raw = raw * (1 << n);
}

Fixed::Fixed(const float raw)
{
    this->raw = round(raw * (1 << n));
}

Fixed::Fixed(const Fixed & copy)
{
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed & copy)
{
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

bool Fixed::operator==(const Fixed & obj)const
{
	return (raw == obj.getRawBits());
}

bool Fixed::operator!=(const Fixed & obj)const
{
	return (raw != obj.getRawBits());
}

bool Fixed::operator>(const Fixed & obj)const
{
	return (raw > obj.getRawBits());
}

bool Fixed::operator<(const Fixed & obj)const
{
	return (raw < obj.getRawBits());	
}

bool Fixed::operator>=(const Fixed & obj)const
{
	return (raw >= obj.getRawBits());
}

bool Fixed::operator<=(const Fixed & obj)const
{
	return (raw <= obj.getRawBits());
}

Fixed Fixed::operator+(const Fixed & obj)const
{
	return (raw + obj.getRawBits());	
}

Fixed Fixed::operator-(const Fixed & obj)const
{
	return (raw - obj.getRawBits());	
}

Fixed Fixed::operator*(const Fixed & obj)const
{
	return (toFloat() * obj.toFloat());
}

Fixed Fixed::operator/(const Fixed & obj)const
{
	if (obj.toFloat() != 0)
		return (toFloat() / obj.toFloat());
	return (0);
}

Fixed & Fixed::operator++()
{
	raw++;
	return (*this);
}

Fixed & Fixed::operator--()
{
	raw--;
	return (*this);	
}

Fixed Fixed::operator++(int)
{
	Fixed cpy;

	cpy = *this;
	raw++;
	return (cpy);
}

Fixed Fixed::operator--(int)
{
	Fixed cpy;

	cpy = *this;
	raw--;
	return (cpy);
}

Fixed const &Fixed::max(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed &Fixed::max(Fixed &obj1, Fixed &obj2)
{
	if (obj1 > obj2)
		return (obj1);
	return (obj2);
}

Fixed const &Fixed::min(const Fixed &obj1, const Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed &Fixed::min(Fixed &obj1, Fixed &obj2)
{
	if (obj1 < obj2)
		return (obj1);
	return (obj2);
}

Fixed::~Fixed(){}