/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/09/30 21:30:08 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat a("walid", 149);
    for (int i = 0; i < 4; i++)
    {
        a.decGrade();
    }
    
    for (int i = 0; i < 6; i++)
    {
        a.incGrade();
    }
    std::cout << a << std::endl;
}