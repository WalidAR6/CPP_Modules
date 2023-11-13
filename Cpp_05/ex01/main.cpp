/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/13 11:49:30 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("walid", 150);
        Form a("A", 37, 88);

        // a.beSigned(b);

        std::cout << a.getIndicator() << std::endl;
        b.signForm(a);
        
        std::cout << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "--------------------------" << std::endl;

    try
    {
        Bureaucrat b("walid", 20);
        Form a("A", 37, 88);
        
        a.beSigned(b);

        std::cout << a.getIndicator() << std::endl;
        b.signForm(a);
        
        std::cout << a << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}