/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/08 13:54:40 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("bureaucrat1", 120);
        b.decGrade();  
        std::cout << b << std::endl;
        b.incGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "---------------------------" << std::endl;
    
    try
    {
        Bureaucrat b("bureaucrat2", 1);
        b.incGrade();
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "---------------------------" << std::endl;
    
    try
    {
        Bureaucrat b("bureaucrat3", 150);
        b.decGrade();  
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "---------------------------" << std::endl;
    
    try
    {
        Bureaucrat b("bureaucrat4", 0);
        b.decGrade();  
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "---------------------------" << std::endl;
    
    try
    {
        Bureaucrat b("bureaucrat5", 151);
        b.decGrade();  
        std::cout << b << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}