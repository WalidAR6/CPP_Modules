/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waraissi <waraissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:15:58 by waraissi          #+#    #+#             */
/*   Updated: 2023/11/10 17:28:02 by waraissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern()
{
    std::cout << "Intern: Default constructor called" << std::endl;
}

Intern::Intern(const Intern &obj)
{
    std::cout << "Intern: Copy constructor called" << std::endl;
    *this = obj;
}

Intern &Intern::operator=(const Intern &obj)
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

    std::string targ[] = {"robotomy request", "shrubbery creation", "presidential pardon"};
    while (i < 3)
    {
        if (targ[i] == formName)
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            std::cout << "Intern creates " << targ[i] << std::endl;
            return (new RobotomyRequestForm(target));
        case 1:
            std::cout << "Intern creates " << targ[i] << std::endl;
            return (new ShrubberyCreationForm(target));
        case 2:
            std::cout << "Intern creates " << targ[i] << std::endl;
            return (new PresidentialPardonForm(target));
        default:
            std::cout << "Intern can't create " << formName << std::endl;
    }
    return (NULL);
}