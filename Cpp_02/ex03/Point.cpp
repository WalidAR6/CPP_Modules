/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 12:26:09 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/27 17:49:52 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point():x(0), y(0){}

Point::Point(const float x, const float y)
{
    this->x = x;
    this->y = y;
}

Point::Point(const Point & copy)
{
    *this = copy;
}

Point & Point::operator=(const Point &copy)
{
    this->x = copy.x;
    this->y = copy.y;
    return (*this);
}

Fixed Point::get_x() const
{
    return (x);
}

Fixed Point::get_y() const
{
    return (y);
}

Point::~Point(){}