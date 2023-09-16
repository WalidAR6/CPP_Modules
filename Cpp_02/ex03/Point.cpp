/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:26:09 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/16 03:11:07 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const Fixed x, const Fixed y):x(x),y(y){}

Point::Point(const Point & copy):x(copy.x), y(copy.y)
{
    *this = copy;
}

Point & Point::operator=(const Point &copy)
{
    (void)copy;
    return (*this);
}

Fixed Point::getX() const
{
    return (x);
}

Fixed Point::getY() const
{
    return (y);
}

Point::~Point(){}
