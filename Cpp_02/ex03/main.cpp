/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:46:36 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/10 16:56:22 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    {
        Point a(-6.01836f, 6.66808f);
        Point b(-3.56638f, 0.57856f);
        Point c(2.36147f, 4.80889f);
        Point d(-4.46903f, 5.26695f);

        if (bsp(a, b, c, d) == true)
            std::cout << "the point is inside the triangle" << std::endl;
        else
            std::cout << "the point is outside the triangle" << std::endl;   
    }
    {
        Point a(7 , 7);
        Point b(11 , 1);
        Point c(2 , 2);
        Point d(0 , 0);

        if (bsp(a, b, c, d) == true)
            std::cout << "the point is inside the triangle" << std::endl;
        else
            std::cout << "the point is outside the triangle" << std::endl;
    }
}
