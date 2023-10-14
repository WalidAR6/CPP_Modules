/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/09 13:07:36 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
    try
    {
        Bureaucrat bur("walid", 1);

        ShrubberyCreationForm shr("home");
        shr.beSigned(bur);
        
        bur.executeForm(shr);
    }
    catch(std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------" << std::endl;
    
    try
    {
        Bureaucrat bur("walid", 146);

        ShrubberyCreationForm shr("home");
        shr.beSigned(bur);
        
        bur.executeForm(shr);
    }
    catch(std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "-----------------------------" << std::endl;
    
    try
    {
        Bureaucrat bur("bur2", 20);
        RobotomyRequestForm rob("robot");
        
        rob.beSigned(bur);

        bur.executeForm(rob);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------" << std::endl;
    
    try
    {
        Bureaucrat bur("bur2", 50);
        RobotomyRequestForm rob("robot");
        
        rob.beSigned(bur);

        bur.executeForm(rob);
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "-----------------------------" << std::endl;

    try
    {
        Bureaucrat bur("bur3", 4);
        PresidentialPardonForm pres("obama");

        pres.beSigned(bur);

        bur.executeForm(pres);
    }
    catch (std::exception & e)
    {
       std::cout << "Exception: " << e.what() << std::endl; 
    }
    
    std::cout << "-----------------------------" << std::endl;

    try
    {
        Bureaucrat bur("bur3", 50);
        PresidentialPardonForm pres("obama");

        pres.beSigned(bur);

        bur.executeForm(pres);
    }
    catch (std::exception & e)
    {
       std::cout << "Exception: " << e.what() << std::endl; 
    }
}