/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:15:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/10/02 20:43:56 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <cstddef>

Intern::Intern()
{
    std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::Intern(const Intern & obj)
{
    std::cout << "Intern: Copy constructor called" << std::endl;
    *this = obj;
}

Intern & Intern::operator=(const Intern & obj)
{
    (void)obj;
    return (*this);
}

Intern::~Intern()
{
    std::cout << "Intern: Destructor called" << std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    int i = 0;
    AForm *tmp = NULL;
    ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm(target);
    PresidentialPardonForm *presidential = new PresidentialPardonForm(target);
    RobotomyRequestForm *robotomy = new RobotomyRequestForm(target);
    
    AForm *arr[] = {robotomy, shrubbery, presidential, NULL};
    std::string targ[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    
    while (i < 3)
    {
        if (targ[i] == formName)
            tmp = arr[i];
        else
            delete arr[i];
        i++;
    }
    return (tmp);
}