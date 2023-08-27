/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 23:46:36 by waraissi          #+#    #+#             */
/*   Updated: 2023/08/27 17:50:42 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main()
{
    Point a(7 , 7);
    Point b(11 , 1);
    Point c(2 , 2);
    Point d(5 , 3);
    
    if (bsp(a, b, c, d) == true)
        std::cout << "the point is inside the triangle" << std::endl;
    else
        std::cout << "the point is outside the triangle" << std::endl;
}
