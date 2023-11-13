/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 19:47:13 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/11 17:23:09 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat bur("walid", 1);
        Intern a;
        AForm *rr;
        rr = a.makeForm("shrubbery creation", "Bender");
        if (rr)
        {
            std::cout << rr->getName() <<  std::endl;
            rr->beSigned(bur);
            rr->execute(bur);
        }
        delete rr;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "----------------------------------------------------" << std::endl;
    
    try
    {
        Bureaucrat bur("walid", 1);
        Intern a;
        AForm *rr;
        rr = a.makeForm("shrubbery creation", "Bender");
        if (rr)
        {
            std::cout << rr->getName() <<  std::endl;
            rr->execute(bur);
        }
        delete rr;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
    
    std::cout << "----------------------------------------------------" << std::endl; 
    
    try
    {
        Bureaucrat bur("walid", 1);
        Intern a;
        AForm *rr;
        rr = a.makeForm("robotomy request", "Bender");
        if (rr)
        {
            std::cout << rr->getName() <<  std::endl;
            rr->beSigned(bur);
            rr->execute(bur);
        }
        delete rr;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "-----------------------------ok-----------------------" << std::endl; 
    
    try
    {
        Bureaucrat bur("walid", 1);
        Intern a;
        AForm *rr;
        rr = a.makeForm("robotomy request", "Bender");
        if (rr)
        {
            std::cout << rr->getName() <<  std::endl;
            rr->execute(bur);
        }
        delete rr;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "----------------------------------------------------" << std::endl; 

    try
    {
        Bureaucrat bur("walid", 1);
        Intern a;
        AForm *rr;
        rr = a.makeForm("presidential pardon", "Bender");
        if (rr)
        {
            std::cout << rr->getName() <<  std::endl;
            rr->beSigned(bur);
            rr->execute(bur);
        }   
        delete rr;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    std::cout << "----------------------------------------------------" << std::endl;

    try
    {
        Bureaucrat bur("walid", 1);
        Intern a;
        AForm *rr;
        rr = a.makeForm("presidential pardon", "Bender");
        if (rr)
        {
            std::cout << rr->getName() <<  std::endl;
            rr->execute(bur);        
        }
        delete rr;
    }
    catch (std::exception & e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}