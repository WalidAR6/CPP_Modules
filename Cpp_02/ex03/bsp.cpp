/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:00:18 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/10 16:57:34 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed get_area(Point x1, Point x2, Point x3)
{
	Fixed Area((  x1.getX() * (x2.getY() - x3.getY())
				+ x2.getX() * (x3.getY() - x1.getY())
				+ x3.getX() * (x1.getY() - x2.getY())) / Fixed(2));
	Area.setRawBits(std::abs(Area.getRawBits()));
	return (Area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A = get_area(a, b, c);

	Fixed A1 = get_area(point, b, c);
	Fixed A2 = get_area(a, point, c);
	Fixed A3 = get_area(a, b, point);

	Fixed A4;

	A4 = A1 + A2 + A3;	
	std::cout << A << std::endl;
	std::cout << A4 << std::endl;
	std::cout << A1 << std::endl;
	std::cout << A2 << std::endl;
	std::cout << A3 << std::endl;
	if (A == 0 || A1 == 0 || A2 == 0 || A3 == 0)
		return (false);
	
	if (A == A1 + A2 + A3)
		return (true);
	
	return (false);
}