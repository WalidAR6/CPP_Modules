/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:00:18 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/27 17:48:23 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
/*
area of triangle = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2
pbc
pac
pab

*/

Fixed get_area(Point x1, Point x2, Point x3)
{
	Fixed Area((x1.get_x().toFloat() * (x2.get_y().toFloat() - x3.get_y().toFloat()) + x2.get_x().toFloat() * (x3.get_y().toFloat() - x1.get_y().toFloat()) + x3.get_x().toFloat() * (x1.get_y().toFloat() - x2.get_y().toFloat())) / 2);
	Area.setRawBits(std::abs(Area.getRawBits()));
	return (Area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = get_area(a, b, c);
	
	Fixed A1 = get_area(point, b, c);
	Fixed A2 = get_area(a, point, c);
	Fixed A3 = get_area(a, b, point);
	if (A == 0 || A1 == 0 || A2 == 0 || A3 == 0)
		return (false);
	if (A == A1.toFloat() + A2.toFloat() + A3.toFloat())
		return (true);
	return (false);
}