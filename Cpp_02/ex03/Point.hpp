/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 02:14:52 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/22 02:15:03 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include <iostream>
# include "Fixed.hpp"

class Point
{
    private:
        const Fixed x;
        const Fixed y;
    public:
        Point();
        Point(const Fixed x, const Fixed y);
        Point(const Point &copy);
        Point & operator=(const Point &copy);
        ~Point();

        Fixed getX() const;
        Fixed getY() const;
};

bool bsp(Point const a, Point const  b, Point const c, Point const point);

#endif
